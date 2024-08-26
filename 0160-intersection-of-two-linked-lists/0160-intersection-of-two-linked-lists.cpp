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
    ListNode * collisionPoint(ListNode * t1,ListNode * t2,int diff)
    {
        while(diff)
        {
            diff--;
            t2=t2->next;
        }
        while(t1!=t2)
        {
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * temp1=headA;
        ListNode * temp2=headB;
        int c1=0;
        int c2=0;
        while(temp1)
        {
            c1++;
            temp1=temp1->next;
        }
        while(temp2)
        {
            c2++;
            temp2=temp2->next;
        }
        if(c1<c2)
        {
            return collisionPoint(headA,headB,c2-c1);
        }
        return collisionPoint(headB,headA,c1-c2);
    }
};