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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* temp=head;
        int cnt=0;
        while(temp != NULL)
        {
            cnt++;   // give no length of LL
            temp=temp->next;
        }

        if(cnt == 1 ) return NULL;

        int target = cnt/2;
        temp= head;

        while(temp != NULL)
        {
            target--;
            if(target == 0) break;
            temp= temp->next;
           
        }
        
        temp->next= temp->next->next ;
        return head;
    }
};