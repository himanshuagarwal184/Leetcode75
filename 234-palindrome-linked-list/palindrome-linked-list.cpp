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
 #include<algorithm>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>a,b;
        while(head!=NULL)
        {
            a.push_back(head->val);
            head=head->next;
        }
        b=a;
        reverse(b.begin(),b.end());
        for(int i=0,j=0;i<a.size();i++,j++)
        {
            if(a[i]==b[j])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};