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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* ee=nullptr, *es=nullptr, *os=nullptr, *oe=nullptr;
        int x=1;
        for(ListNode* curr=head;curr!=nullptr;curr=curr->next, x++){
            if(x%2==0){
                if(es==nullptr){
                    es=ee=curr;
                }
                else{
                    ee->next=curr;
                    ee=curr;
                }
            }
            else{
                if(os==nullptr){
                    os=oe=curr;
                }
                else{
                    oe->next=curr;
                    oe=curr;
                }
            }
        }
        if(os==nullptr || es==nullptr)
        return head;
        oe->next=es;
        ee->next=nullptr;
        return os;
    }
};