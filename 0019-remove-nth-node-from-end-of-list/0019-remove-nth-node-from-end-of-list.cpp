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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* temp = head;
        
        // First, calculate the length of the list
        while (temp) {
            cnt++;
            temp = temp->next;
        }
        
        // Calculate the position of the node to remove from the start (1-based index)
        int rem = cnt - n;

        // If the node to remove is the head
        if (rem == 0) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete; // Free the memory
            return head;
        }

        // Reset temp to head and initialize other variables
        temp = head;
        ListNode* prev = nullptr;
        int c = 0;

        // Traverse to the node to be removed
        while (temp) {
            if (c == rem) {
                prev->next = temp->next;
                delete temp; // Free the memory
                break;
            }
            prev = temp;
            temp = temp->next;
            c++;
        }

        return head;
    }
};
