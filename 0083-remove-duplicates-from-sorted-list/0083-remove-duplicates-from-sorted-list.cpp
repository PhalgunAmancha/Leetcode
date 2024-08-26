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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
        {
            return nullptr;
        }
        ListNode * temp=head;
        set<int>st;
        while(temp)
        {
            st.insert(temp->val);
            temp=temp->next;
        }
        auto it=st.begin();
        ListNode * begin=new ListNode(*it);
        ListNode * newNode =begin;
        ++it;
        for(;it!=st.end();it++)
        {
            ListNode * x=new ListNode(*it);
            newNode->next=x;
            newNode =newNode->next;
        }
        return begin;
        

    }
};