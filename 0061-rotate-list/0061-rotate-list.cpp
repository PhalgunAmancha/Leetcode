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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Find the length of the linked list
        int cnt = 1;  // Start with 1 since we're at head
        ListNode* temp = head;
        
        while (temp->next) {
            cnt++;
            temp = temp->next;
        }

        // Step 2: Connect the last node to the head (circular linked list)
        temp->next = head;

        // Step 3: Calculate the effective rotation
        k = k % cnt;
        int stepsToNewHead = cnt - k;

        // Step 4: Find the new head and break the circle
        temp = head;
        for (int i = 1; i < stepsToNewHead; i++) {
            temp = temp->next;
        }

        // The new head is the next node
        ListNode* newHead = temp->next;
        temp->next = nullptr;  // Break the circle

        return newHead;
    }
};
