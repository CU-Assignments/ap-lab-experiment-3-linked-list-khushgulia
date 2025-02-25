public class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        // Create a dummy node to simplify handling the head of the merged list
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;

        // Traverse through both lists as long as both are not empty
        while (l1 != null && l2 != null) {
            if (l1.val <= l2.val) {
                current.next = l1;
                l1 = l1.next; // Move l1 pointer to the next node
            } else {
                current.next = l2;
                l2 = l2.next; // Move l2 pointer to the next node
            }
            current = current.next; // Move the current pointer
        }

        // If any list is left, append the remaining nodes to the result
        if (l1 != null) {
            current.next = l1;
        } else {
            current.next = l2;
        }

        // Return the merged list, which starts from dummy.next
        return dummy.next;
    }
}
Input
list1 =
[1,2,4]
list2 =
[1,3,4]
Output
[1,1,2,3,4,4]
Expected
[1,1,2,3,4,4]
