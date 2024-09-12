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
    int gcd(int a, int b)
    {
        if ( a == 0) return b;
        if( b == 0) return a;
        if(a > b)
             return gcd(a% b, b);
        else
            return gcd(b%a, a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if( head == NULL) return NULL;
        ListNode* temp = head;
        ListNode* fast= head->next;
        while( fast != NULL)
        {
            int val= gcd(temp->val, fast->val);
            ListNode* newnode = new ListNode(val);
            newnode->next=temp->next;
            temp->next= newnode;
            temp=fast;
            fast= fast->next;
        }
        return head;

        
    }
};