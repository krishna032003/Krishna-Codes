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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        
        while(temp && temp->next){
            ListNode* gcd=new ListNode(__gcd(temp->val,temp->next->val));
            ListNode* b=temp->next;
            temp->next=gcd;
            gcd->next=b;
            temp=gcd->next;
            
        }
        return head;
    }
};