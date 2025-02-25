public class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        // If the list is empty, there's nothing to do
        if (head == null) {
            return null;
        }
        
        ListNode current = head;
        
        // Traverse the list
        while (current != null && current.next != null) {
            // If the current node's value is the same as the next node's value
            if (current.val == current.next.val) {
                // Skip the next node by pointing to the next of next
                current.next = current.next.next;
            } else {
                // Otherwise, just move the current pointer to the next node
                current = current.next;
            }
        }
        
        return head; // Return the modified list
    }
}
Input
head =
[1,1,2]
Output
[1,2]
Expected
[1,2]
