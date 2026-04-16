#include <vector>
#include <iostream>

using namespace std;

class LinkedNode{
    public:
        int val_;
        LinkedNode *next = nullptr;
	LinkedNode(int val){val_ = val;}
	LinkedNode() = default;
};

class LinkedList {
public:
    LinkedNode *head;	
    LinkedList() {
	head = nullptr;
    }

    int get(int index) {
        int i = 0;
        LinkedNode* temp = head;
        if(temp == nullptr){
            return -1;
        }
        while(index > i){
            if(temp->next == nullptr){
                return -1;
            }else{
                temp = temp->next;
                i++;
            }
        }
        return temp->val_;
    }

    void insertHead(int val) {
    LinkedNode* node = new LinkedNode(val);
	if(head == nullptr){
	    head = node;
	}else{
	    node->next = head;
        head = node;
	    }
    }
    
    void insertTail(int val) {
	LinkedNode* node = new LinkedNode(val);
	if (head == nullptr) {
	    head = node;
	}else{
	    LinkedNode* temp = head;
	    while(temp->next != nullptr){
	       temp = temp->next; 
	    }
	    temp->next = node;
	    }
    }

    bool remove(int index) {
	    LinkedNode *temp = head;
        int i = 0;
        if(index == 0){
            if(head == nullptr){
                return false;
            }else{
                temp = head->next;
                delete(head);
                head = temp;
                return true;
            }
        }

        while(index - 1 > i){
            if(temp->next == nullptr){
                return false;
            }else{
                temp = temp->next;
                i++;
            }
        }
        //delete the last nod
        //e
        if(temp->next != nullptr){
            LinkedNode *temp2, *temp3;
            temp3 = temp;
            temp = temp->next;
            temp2 = temp->next;
            delete(temp);
            temp3->next = temp2;
            return true;
        }
        // we arrive at the node
        return false;
    }

    vector<int> getValues() {
	    vector<int> vals;
        LinkedNode* temp = head;
        while(temp != nullptr){
            vals.push_back(temp->val_);
            temp = temp->next;
        }
        return vals;
    }
};