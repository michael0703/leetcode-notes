/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        if(head->next==nullptr) return false;
        auto ptr2 = head->next;
        auto ptr1 = head;
        while(ptr1!=nullptr&&ptr2!=nullptr){
            if(ptr1==ptr2){
                return true;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            if(!ptr2) return false;
            ptr2=ptr2->next;
        }
        return false;
    }
};