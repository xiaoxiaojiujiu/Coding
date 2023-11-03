package main
import "fmt"
func main(){
	var name string = "Zhi Yin Ni Shi Zai Shi Tai Mei"
	sum:=0
	for i:=0;i<len(name);i++{
		sum=sum+int(name[i])
	}
	var sum_bytes [4]byte
	var j int
	for j=3;sum !=0;j--{
		sum_bytes[j]=byte(sum%10)+'0'
		sum=sum/10
	}
	fmt.Printf("%c",sum_bytes[0])
	fmt.Printf("%c",sum_bytes[1])
	fmt.Printf("%c",sum_bytes[2])
	fmt.Printf("%c",sum_bytes[3])
	fmt.Printf("\n")
}