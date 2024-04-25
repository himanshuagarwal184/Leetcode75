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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        vector<ListNode*> arr;
        while(head!=NULL){
            arr.push_back(head);
            head=head->next;
        }   
        int m=arr.size();
        if(n==1 && m==1){
            return NULL;
        }
        if(n==m)
        {
            return arr[1];
        }
        arr[m-n-1]->next =arr[m-n]->next;
        return arr[0]; 

    }
};