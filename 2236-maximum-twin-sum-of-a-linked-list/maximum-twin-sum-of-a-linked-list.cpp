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
    int pairSum(ListNode* head) 
    {
        vector<ListNode*> nodes;
        while(head!=NULL)
        {
            nodes.push_back(head);
            head=head->next;
        }    
        int maxx=INT_MIN;
        int i=0,j=nodes.size()-1;
        while(i<j)
        {
            ListNode *k=nodes[i],*q=nodes[j];

            maxx=max(maxx,(k->val + q->val));
            i++;
            j--;
        }
        return maxx;
    }
};