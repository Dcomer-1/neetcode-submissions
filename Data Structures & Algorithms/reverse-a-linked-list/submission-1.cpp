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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        } 

        ListNode* temp = head;
        head = head->next;
        temp->next = nullptr;
        //point to head and make it point to nothing
        
        while(head->next != nullptr){
            ListNode* temp2 = head;
            head = head->next;
            temp2->next = temp;
            temp = temp2;
        }
        head->next = temp;

        //iterate through linked list and 
            return head;
    }
};
