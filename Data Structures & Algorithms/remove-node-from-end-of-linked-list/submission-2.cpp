/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //travel to n - 1 node, 0 based index
        int i =0;
        int listSize = 0;

        ListNode* ptr = head;
        while(ptr != nullptr){
            listSize++;
            ptr = ptr->next;
        }

        int nodeIndex = listSize - n;
        ptr = head;

        if(nodeIndex == 0){
            head = head->next;
            delete(ptr);
            return head;
        }

        while(i < nodeIndex -1){
            ptr = ptr->next;
            i++;
        }

        ListNode* temp = ptr->next;
        ptr->next = temp->next;
        delete(temp);
        return head;
        //create a copy of the next node's pointer, delete the node and point to the temp
    }
};
