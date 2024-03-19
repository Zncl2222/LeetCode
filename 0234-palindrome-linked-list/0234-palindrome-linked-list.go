/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func isPalindrome(head *ListNode) bool {
    fast, slow := head, head
    var reverse *ListNode
    
    for fast != nil && fast.Next != nil {
        fast = fast.Next.Next
        slow_next := slow.Next
        slow.Next = reverse
        reverse = slow
        slow = slow_next
    }
    
    if fast != nil {
        slow = slow.Next
    }
    
    for slow != nil {
        if slow.Val != reverse.Val {
            return false
        }
        slow = slow.Next
        reverse = reverse.Next
    }
    return true
}