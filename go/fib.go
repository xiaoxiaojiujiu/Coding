package main
import "fmt"
func fib(n int) int{
	if n<=1{
		return n
	}
	return fib(n-1)+fib(n-2)
}
func main(){
	n:=10
	fmt.Printf("第 %d 项的值为：%d\n", n, fib(n))
}