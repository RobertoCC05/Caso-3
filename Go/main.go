package main

import (
	"fmt"
	"time"
)

const amount = 8000000

func main() {
	var array[amount]int
	num:=amount

	for i := 0; i < amount; i++{
		array[i] = i
	}
	
	fmt.Println("Added values!")
	
	t1:= time.Now()
	
	for i := 0; i < amount; i++{
		if array[i] == num{
			fmt.Println("Is in!")
			break;
		} else if i == amount-1{
			fmt.Println("Isn't in!")
		}
	}
	
	t2:= time.Now()
	diff:= t2.Sub(t1)
	
	fmt.Println("\n\nTime elapsed:",diff)
}
