package main

import (
	"fmt"
	"time"
)

const amount = 400000000//8000000

func main() {
	var array[amount]int
	num:=amount

	for i := 0; i < amount; i++{
		array[i] = i
	}
	
	fmt.Println("Items in the array:", amount)

	t1:= time.Now()
	
	for i := 0; i < amount; i++{
		if array[i] == num{
			fmt.Println("The number is in!")
			break;
		} else if i == amount-1{
			fmt.Println("The number isn't in!")
		}
	}
	
	t2:= time.Now()
	diff:= t2.Sub(t1)
	
	fmt.Println("\nTime elapsed:",diff)
}
