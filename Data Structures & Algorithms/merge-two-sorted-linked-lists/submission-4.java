/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        // create new list
        // Check that list1 and list2 exist
        // If it does, check if list1 node is greater than list2
        // If so we add list1 node first and progress the node 
        // Else we add list2 node first and progress the node
        // If there only list1 or list2 exists then we add the entirety of the list
        // return the head
        ListNode newList = new ListNode(0);
        ListNode head = newList;
        while(list1 != null && list2 != null ){
            if(list1.val < list2.val){
                head.next = list1;
                list1 = list1.next;
            }else{
                head.next = list2;
                list2 = list2.next;
            }
            head = head.next;
        }
        head.next = (list1 != null) ? list1 : list2;
        return newList.next;
    }
}