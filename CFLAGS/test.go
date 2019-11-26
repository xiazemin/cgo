package main

import "fmt"

/*
#cgo CFLAGS: -DTEST
#include <stdio.h>
extern void ACFunction();
*/
import "C"

//export AGoFunction
func AGoFunction() {
	fmt.Println("AGoFunction()")
}

func main() {
	C.ACFunction()
}