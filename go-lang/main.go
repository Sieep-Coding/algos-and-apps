package main

import (
	"fmt"
)

func main() {
	fmt.Println("Hello World")
	// continue switch break
	flag := true
	for i := 1; i < 10; i++ {
		if i%2 == 0 {
			flag = false
			break
		} else if i == 1 {
			continue
		}
	}
	fmt.Println(flag)

	day := "Fri"
	switch day {
	case "Fri":
		fmt.Println("TGIF")
	case "Mon":
		fmt.Println("Boring")
	default:
		fmt.Println("default")
	}

	switch {
	case day == "Fri":
		fmt.Println("TGIF")
		break
	}
}
