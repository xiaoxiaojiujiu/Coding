package main
import "fmt"
var d [8]int = [8]int{8,3,6,7,2,1,4,5}
var s []int = d[0:8]
func main(){
	fastsort(s)
	fmt.Println(s)
}
func fastsort(A[]int){
	if len(A)<2 {
		return
	}
	lowerA,upperA:=partition(A)
	fastsort(lowerA)
	fastsort(upperA)
}
func partition(A[]int)([]int,[]int){
	lower:=0
	for i:=0;i<len(A);i++{
		if A[i]<A[len(A)-1]{
			A[i],A[len(A)-1]=A[len(A)-1],A[i]
		}
	}
	A[lower],A[len(A)-1]=A[len(A)-1],A[lower]
	return A[0:lower],A[lower+1:len(A)]
}