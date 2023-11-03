package main

import (
	"flag"
	"fmt"
	"os"
)

const (
	S = 54 // standard size of header
	T = 32 // number of bytes needed to hide the text length
	C = 4  // number of bytes needed to hide a character
)

func recover(pix []byte, size int) int {
	value := 0
	for i := size-1; i >= 0; i-- {
		value = value << 2
		pix[i] = pix[i] & 0x3
		value = value | int(pix[i])
	}
	return value
}

var (
	image string // input doctor image name
	txt   string // output text name
)


// init sets command line arguments
func init() {
	// DON'T modify this function!!!
	flag.StringVar(&image, "i", "", "input image name")
	flag.StringVar(&txt, "t", "", "output text name")
}

func main() {
	// parse command line arguments
	flag.Parse()
	if image == "" || txt == "" {
		flag.PrintDefaults()
		os.Exit(1)
	}
	// TODO: write your code here

	p, err := os.ReadFile(image)
    if err != nil {
        fmt.Printf("Read image file failed, err = %v\n", err)
        os.Exit(1)
    }

	len := recover(p[S:S+T],T)
    
    var t []byte = make([]byte, len)
	for i := 0; i < len; i++ {
		offset := S + T + C*i
		t[i] = byte(recover(p[offset:offset+C], C))
	}

    err = os.WriteFile(txt, t, 0644)
	if err != nil {
		fmt.Printf("Write doctored image failed, err = %v\n", err)
		os.Exit(1)
	}
}