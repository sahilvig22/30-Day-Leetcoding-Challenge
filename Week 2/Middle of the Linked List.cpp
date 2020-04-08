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
    ListNode* middleNode(ListNode* head) {

        ListNode* hare, * tortoise;
        hare = tortoise = head;

        while (hare && hare->next)
        {
            hare = hare->next->next; //hare takes two steps for every 1 step of tortoise.
            tortoise = tortoise->next;
        }

        return tortoise;
    }
};