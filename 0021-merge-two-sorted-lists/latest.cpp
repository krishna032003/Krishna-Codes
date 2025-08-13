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
    ListNode* addnewnode(int n,ListNode* head){
        ListNode* newnode=new ListNode(n);
        ListNode* l=head;
        if(head==NULL)
        return newnode;
        else{
            while(head->next!=NULL)
            {
                head=head->next;
            }
            head->next=newnode;
        }
        return l;
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans=NULL;
        
        while(l1!=NULL && l2!=NULL){
            if(l1->val <= l2->val){
                ans=addnewnode(l1->val,ans);
                l1=l1->next;
                
            }
            else if(l1->val > l2->val){
                ans=addnewnode(l2->val,ans);
                l2=l2->next;
                
            }
        }
        while(l1!=NULL){
            ans=addnewnode(l1->val,ans);
                l1=l1->next;
        
        }
        while(l2!=NULL){
            ans=addnewnode(l2->val,ans);
                l2=l2->next;
                
        }
        return ans;
    }
};