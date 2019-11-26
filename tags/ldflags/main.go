package main

import (
	"fmt"
)

var flagString string

func main() {
	fmt.Println("This build with ldflag:", flagString)
}