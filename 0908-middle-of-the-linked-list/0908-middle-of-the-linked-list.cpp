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
    ListNode* middleNode(ListNode* head) {
        ListNode * temp=head;
        int cnt=0;
        while(temp)
        {
            temp=temp->next;
            cnt++;
        }
        temp=head;
        int tar=0;
        while(temp)
        {
            if(tar<cnt/2)
            {
                tar++;
                temp=temp->next;
            }
            else{
                break;
            }
            
        }
        ListNode * x=temp;
       return x;

    }
};