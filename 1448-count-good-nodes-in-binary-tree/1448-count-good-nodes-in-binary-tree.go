/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func goodNodes(root *TreeNode) int {
    res := 0
    dfs(root, &res, root.Val)
    
    return res
}

func MAX(a, b int) int {
    if a > b {
        return a
    } else {
        return b
    }
}

func dfs(root *TreeNode, res *int, curr_max int) {
    if root == nil {
        return
    }
    
    curr_max = MAX(curr_max, root.Val)
    if root.Val >= curr_max {
        *res++
    }
    
    dfs(root.Left, res, curr_max)
    dfs(root.Right, res, curr_max)
}