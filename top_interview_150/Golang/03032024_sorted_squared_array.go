package main

import (
	"fmt"
)

func sortedSquares(nums []int) []int {
	n := len(nums)
	squared := make([]int, n)
	left := 0
	right := n - 1

	for i := n - 1; i >= 0; i-- {
		leftSquare := nums[left] * nums[left]
		rightSquare := nums[right] * nums[right]

		if leftSquare > rightSquare {
			squared[i] = leftSquare
			left++
		} else {
			squared[i] = rightSquare
			right--
		}
	}

	return squared
}

func main() {
	// Example usage
	nums := []int{-4, -2, 0, 2, 4}
	squared := sortedSquares(nums)
	fmt.Println(squared) // Output: [0 4 4 16 16]
}
