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
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return false;

        ListNode *x= head;
        ListNode *y = head;

        while (y != NULL && y->next != NULL) {
            x = x->next;          
            y = y->next->next;     

            if (x==y)            
                return true;
        }

        return false;  // no cycle
    }
};
