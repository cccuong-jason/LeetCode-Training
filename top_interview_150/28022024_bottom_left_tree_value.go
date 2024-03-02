package main

import "fmt"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func findBottomLeftValue(root *TreeNode) int {
	var bottomLeftValue int
	var maxDepth int

	dfs(root, 0, &maxDepth, &bottomLeftValue)

	return bottomLeftValue
}

func dfs(node *TreeNode, depth int, maxDepth *int, bottomLeftValue *int) {
	if node == nil {
		return
	}

	if depth > *maxDepth || *maxDepth == 0 {
		*maxDepth = depth
		*bottomLeftValue = node.Val
	}

	dfs(node.Left, depth+1, maxDepth, bottomLeftValue)
	dfs(node.Right, depth+1, maxDepth, bottomLeftValue)
}

func main() {
	// Example usage
	root := &TreeNode{
		Val: 1,
		Left: &TreeNode{
			Val:   2,
			Left:  &TreeNode{Val: 4},
			Right: nil,
		},
		Right: &TreeNode{
			Val:   3,
			Left:  &TreeNode{Val: 5},
			Right: &TreeNode{Val: 6},
		},
	}

	bottomLeftValue := findBottomLeftValue(root)
	fmt.Println("Bottom-left value:", bottomLeftValue)
}
