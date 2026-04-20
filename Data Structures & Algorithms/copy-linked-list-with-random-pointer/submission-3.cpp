/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //create hash Map to copy all nodes
        //each node is indexed with its address and the node object which can be referenced later
        unordered_map<Node*, Node*> hashMap;
        hashMap[NULL] = NULL;
        Node* curr = head;
        //Iterate through copying each node object into the hashMap 
        while(curr!=nullptr){
            hashMap[curr] = new Node(curr->val);
            curr = curr->next;
        }
        //point pointer back at the head
        curr = head;
        //create new nodes while iterrating through curr and reference the copied objects
        while(curr!=nullptr){
            Node* copy = hashMap[curr];
            copy->next = hashMap[curr->next];
            copy->random = hashMap[curr->random];
            curr = curr->next;
        }
        //return the head of the hashMap
        return hashMap[head];   
    }
};
