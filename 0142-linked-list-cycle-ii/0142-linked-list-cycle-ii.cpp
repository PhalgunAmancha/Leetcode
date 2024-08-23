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
    ListNode *detectCycle(ListNode *head) {
        ListNode * temp=head;
        map<ListNode *,int>mpp;
        int idx=0;
        while(temp!=NULL)
        {
            if(mpp.find(temp)!=mpp.end())
            {
                return temp;
            }
            mpp[temp]=idx;
            idx++;
            temp=temp->next;
        }
        return nullptr;
    }
};