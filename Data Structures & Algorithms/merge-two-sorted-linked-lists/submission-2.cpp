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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *curr1 = list1;
        ListNode *curr2 = list2;
        ListNode *head = NULL;
        ListNode *tail = NULL;
        while (curr1 != NULL || curr2 != NULL) {
            if (curr1 == NULL || (curr2 != NULL && curr2->val < curr1->val)) {
                if (head == NULL) {
                    head = curr2;
                    tail = curr2;
                } else {
                    tail->next = curr2;
                    tail = curr2;
                }
                curr2 = curr2->next;
            } else {
                if (head == NULL) {
                    head = curr1;
                    tail = curr1;
                } else {
                    tail->next = curr1;
                    tail = curr1;
                }
                curr1 = curr1->next;
            }
        }
        if (tail == NULL) return NULL;
        tail->next = NULL;
        return head;
    }
};
