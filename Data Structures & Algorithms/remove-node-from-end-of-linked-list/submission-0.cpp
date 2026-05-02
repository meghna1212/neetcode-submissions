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

        ListNode* temp = head;
        int len =1;

        while(temp->next!=NULL)
        {
            temp = temp->next;
            len++;
        }

        int delete_node = len-n+1;

        if(delete_node==1)
        {
            ListNode* temp  = head;
            head=head->next;
            delete(temp);
            return head;
        }

        int counter =1;
        ListNode* temp2 = head;
        while(counter<delete_node-1)
        {
            temp2=temp2->next;
            counter++;
        }

        temp2->next=temp2->next->next;
        return head;


        
    }
};
