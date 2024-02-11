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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        ListNode *temp=NULL;
        multiset<int> s;
        for(int i=0;i<lists.size();i++)
        {
            ListNode *t=lists[i];
            while(t!=NULL)
            {
                s.insert(t->val);
                t=t->next;
            }
        }
        if(s.empty())
        {
            return NULL;
        }
        ListNode *t=new ListNode(),*p;
        p=t;
        for(auto it=s.begin();it!=s.end();)
        {
           ListNode *te=new ListNode(NULL);
            t->val=*it;
            it++;
            if(it==s.end())
            {
                t->next=NULL;
            }
            else{

            t->next=te;
            t=t->next;
            }
        }
        t=p;
        while(t->next!=NULL)
        {
            if(t->next==NULL)
            {
                t=NULL;
            }
                t=t->next;
        }
        return p;    
    }
};