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
    int getDecimalValue(ListNode* head) {
        ListNode * temp=head;
        int cnt=1;
        while(temp->next)
        {
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int sum=0;
        while(temp)
        {
            sum=sum+(pow(2,(cnt-1))*(temp->val));
            cnt--;
            temp=temp->next;
        }
        return sum;
    }
};