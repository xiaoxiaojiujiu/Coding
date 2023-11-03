package main

import (
	"fmt"
	"os"
)

const (
	headerSize = 54                // standard size of header
	fileMode   = 0644              // Access permissions
	maxDepth   = 255               // maximum color depth value
	srcImg     = "./panda.bmp"     // input image name
	destImg    = "./darkPanda.bmp" // output image name
)

func main() {
	// Read "panda.bmp"
	imgBytes, err := os.ReadFile(srcImg)
	if err != nil {
		fmt.Printf("read panda.bmp failed, err = %v\n", err)
		os.Exit(1)
	}
	// For each v in pixel array, invert it with (maxDepth-v)
	for i := headerSize; i < len(imgBytes); i++ {
		imgBytes[i] = maxDepth - imgBytes[i]
	}
	// save modified pixel array to "darkPanda.bmp"
	err = os.WriteFile(destImg, imgBytes, fileMode)
	if err != nil {
		fmt.Printf("save image failed, err = %v\n", err)
		os.Exit(1)
	}
}
