//+build debug

package main

var TestString string = "test debug"
var TestString2 string = " and it will run every module with debug tag."

func GetConfigString() string {
	return "it is debug....."
}