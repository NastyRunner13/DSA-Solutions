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
class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *dummyNode = new ListNode(-1);
        dummyNode->next = head;

        ListNode *leftPre = dummyNode;
        ListNode *currNode = head;

        for (int i = 0; i < left - 1; i++)
        {
            leftPre = leftPre->next;
            currNode = currNode->next;
        }

        ListNode *subNodeHead = currNode;
        ListNode *preNode = NULL;

        for (int i = 0; i <= right - left; i++)
        {
            ListNode *nextNode = currNode->next;
            currNode->next = preNode;
            preNode = currNode;
            currNode = nextNode;
        }

        leftPre->next = preNode;
        subNodeHead->next = currNode;

        return dummyNode->next;
    }
};