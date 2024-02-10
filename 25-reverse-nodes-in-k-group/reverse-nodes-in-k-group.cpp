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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        int n=0;
        ListNode *temp;
        temp=head;
        vector<ListNode*> arr; 
        while(temp!=NULL)
        {
            arr.push_back(temp);
            temp=temp->next;
            n++;
        }
        int j=n/k;
        for(int i=0;i<j;i++)
        {
            reverse(arr.begin()+i*k,arr.begin()+i*k+k);
        }

        temp=arr[0];
        for(int i=0;i<n;i++)
        {
            temp->next=arr[i];
            temp=arr[i];
        }
        temp->next=NULL;
        return arr[0];
    }
};