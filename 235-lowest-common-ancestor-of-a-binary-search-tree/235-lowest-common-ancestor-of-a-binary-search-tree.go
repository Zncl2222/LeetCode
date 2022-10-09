/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val   int
 *     Left  *TreeNode
 *     Right *TreeNode
 * }
 */

func lowestCommonAncestor(root, p, q *TreeNode) *TreeNode {
    if root == nil {
        return nil
    }
    
    var res *TreeNode
    
    if root.Val < p.Val && root.Val < q.Val {
        res = lowestCommonAncestor(root.Right, p, q)
    } else if root.Val > p.Val && root.Val > q.Val {
        res = lowestCommonAncestor(root.Left, p, q)
    } else {
        res = root
    }
    return res
}