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
        ListNode* p1=head,*p2=head;
        while(n--){
            p2=p2->next;
        }
        if(p2==nullptr)
        {
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        while(p2->next!=nullptr){
            p2=p2->next;
            p1=p1->next;
        }
        ListNode* temp =p1->next;
        p1->next=p1->next->next;
        delete temp;
        return head;

    }
};