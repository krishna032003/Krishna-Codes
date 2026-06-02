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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int m=0,n=0;
        ListNode* curra=headA, *currb=headB;
        while(curra!=nullptr)
        {m++;
        curra=curra->next;}
        curra=headA;
        while(currb!=nullptr)
        {n++;
        currb=currb->next;}
        currb=headB;
        int x=abs(m-n);
        if(m>n){
            while(x--)
            curra=curra->next;
        }
        else
        {
            while(x--){
                currb=currb->next;
            }
        }
        while(curra!=nullptr && currb!=nullptr)
        {
            if(curra==currb)
            return curra;
            curra=curra->next;
            currb=currb->next;
        }
        return nullptr;

    }
};