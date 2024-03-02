package main

import (
	"fmt"
	"math"
)

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func diameterOfBinaryTree(root *TreeNode) int {
	diameter := 0
	calculateHeight(root, &diameter)
	return diameter
}

func calculateHeight(node *TreeNode, diameter *int) int {
	if node == nil {
		return 0
	}

	leftHeight := calculateHeight(node.Left, diameter)
	rightHeight := calculateHeight(node.Right, diameter)

	// Update the diameter if the current path is longer
	*diameter = int(math.Max(float64(*diameter), float64(leftHeight+rightHeight)))

	// Return the height of the current node
	return int(math.Max(float64(leftHeight), float64(rightHeight))) + 1
}

func main() {
	// Create a binary tree
	root := &TreeNode{Val: 1}
	root.Left = &TreeNode{Val: 2}
	root.Right = &TreeNode{Val: 3}
	root.Left.Left = &TreeNode{Val: 4}
	root.Left.Right = &TreeNode{Val: 5}

	// Find the diameter of the binary tree
	diameter := diameterOfBinaryTree(root)
	fmt.Println("Diameter of the binary tree:", diameter)
}
