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
        string x="";
        while(head!=NULL)
        {
            x+=to_string(head->val);
            a.push_back(head->val);
            head=head->next;
        }
        string y=x;
        reverse(x.begin(),x.end());
        cout<<y<<" "<<x;
        if(x.compare(y))
        {
            return false;
        }
        return true;
    }
};