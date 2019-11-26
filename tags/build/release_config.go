//+build !debug

package main

var TestString string = "test release"
var TestString2 string = " and it will run every module as no debug tag."

func GetConfigString() string {
	return "it is release....."
}