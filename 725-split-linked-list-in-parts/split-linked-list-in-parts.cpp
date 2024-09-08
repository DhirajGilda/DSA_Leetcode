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
        
        vector<ListNode*> ans;

        int length=0;

        ListNode* curr=head;

        while(curr!=NULL){
            curr=curr->next;
            length++;
        }

        int parts=length/k;
        int remainingParts=length%k;
        ListNode*  temp =head;

        for(int i=0;i<k;i++){

            ans.push_back(temp);

            int addparts=parts+(i<remainingParts?1:0);

            for(int i=0;i<addparts-1;i++){
                if(temp){
                    temp=temp->next;
                }
                
            }

            if(temp){
                ListNode* next=temp->next;
                temp->next=NULL;
                temp=next;
            }
        }

        return ans;


    }
};