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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* ans = NULL;
        ListNode* tail = NULL;
        bool issame = false;

        while(head != NULL){
            if(head -> next != NULL && head -> val == head -> next -> val){
                issame = true;
            }
            else{
                if(issame == false){
                    ListNode* newnode = new ListNode(head -> val);
                    if(ans == NULL){
                        ans = newnode;
                        tail = newnode;
                    }
                    else{
                        tail -> next = newnode;
                        tail = newnode;
                    }
                }
                issame = false;
            }
            head = head -> next;
        }
        
        return ans;
        
    }
};