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
    struct Triplet{
    int val;
    int lpos;
    ListNode* node;
    Triplet(int v,int l,ListNode* n){
        val=v;
        lpos=l;
        node=n;
    }    
    };
    struct MyCmp{
        bool operator()(const Triplet& a,const Triplet& b){
            return a.val>b.val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<Triplet,vector<Triplet>,MyCmp> pq;
        for(int i=0;i<lists.size();i++){
            if(lists[i])
            pq.push(Triplet(lists[i]->val,i,lists[i]));
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* tail=dummy;
        while(!pq.empty()){
            Triplet curr=pq.top();
            pq.pop();
            tail->next=curr.node;
            tail=tail->next;
            if(curr.node->next){
                Triplet t(curr.node->next->val,curr.lpos,curr.node->next);
                pq.push(t);
            }
        }
        return dummy->next;
    }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna