package main

import (
	"fmt"
	"strings"
)

func maximumOddBinaryNumber(s string) string {
	// Make the string to start with the 1 character as the maximum number
	// Minus the 1 at the LSB position
	prefix := strings.Repeat("1", strings.Count(s, "1")-1)

	// Fill the rest of them by 0 by counting
	filled_zero := strings.Repeat("0", strings.Count(s, "0"))

	return prefix + filled_zero + "1"
}

func main() {
	// Example usage
	s := "0101"
	result := maximumOddBinaryNumber(s)
	fmt.Println("Maximum odd binary number:", result)
}
