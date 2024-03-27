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
        
        ListNode *temp = head;
        ListNode *prev = nullptr;
        if (head->next == nullptr)
        {
            head = nullptr;
            return head;
        }
        int count = 0;
        while (count < n)
        {
            count++;
            temp = temp->next;
        }
        if (temp == nullptr)
        {
            head = head->next;
            return head;
        }
        prev = head;
        while (temp->next != nullptr)
        {
            prev = prev->next;
            temp = temp->next;
        }

        if (prev->next->next == nullptr)
        {
            prev->next = nullptr;
        }
        else
        {
            prev->next = prev->next->next;
        }
        return head;
    }
};