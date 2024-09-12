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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       
        ListNode* temp = head;
        vector<ListNode*> ans(k);
        if (head == NULL) return ans;
        int totlen=0;
        while(temp != NULL)
        {
            totlen++;
            temp= temp->next;

        }
        temp=head;
        ListNode* prev=NULL;
        int size= totlen/k;
        int extrasize= totlen%k;
        for(int i=0;i<k;i++ )
        {      
            ans[i]=(temp);
            for( int i=0;i<size+(extrasize>0?1:0);i++)
            {
                prev=temp;
                temp= temp->next;
            }
            prev->next= NULL;
            // if(exrtrasize > 0)
                extrasize--;
        }  
        return ans;  

    }
};