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
    
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        ListNode *s = head;
        ListNode *f = head->next;
        while(s!=NULL){
            if(f==NULL){
                v.push_back(0);
                s=s->next;
                if(s!=NULL){
                    f=s->next;
                }
            }
            else if(s->val<f->val){
                v.push_back(f->val);
                s=s->next;
                if(s!=NULL){
                    f = s->next;
                }else{
                    f=NULL;
                }
            }
            else{
                f=f->next;
            }

        }
    return v;
    }
};
