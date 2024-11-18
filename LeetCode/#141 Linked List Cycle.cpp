/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        // Traverse the list
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;       // Move slow pointer one step
            fast = fast->next->next; // Move fast pointer two steps

            if (slow == fast)
            { // If slow meets fast, a cycle exists
                return true;
            }
        }
        return false; // If the loop exits, no cycle is present
    }
};
