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
struct compare{
    bool operator()(const ListNode* a,const ListNode* b){
        return a->val > b->val;
    }
};

class Solution {
public:

    ListNode* mergeKLists(vector<ListNode*>& lists) {        
        priority_queue<ListNode*,vector<ListNode*>,compare> pq;

        for(int i=0;i<lists.size();i++){
            if(lists[i])pq.push(lists[i]);
        }
        ListNode dummy(0);
        ListNode* curr=&dummy;

        while(!pq.empty()){
            ListNode* node=pq.top();
            pq.pop();
            curr->next=node;
            curr=curr->next;
            if(node->next) pq.push(node->next);
        }

        return dummy.next;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna