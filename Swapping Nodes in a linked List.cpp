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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *s = head,*p=head,*s1 = head;
        int t=0;
        int n=0;
        while(p!=nullptr){
            n++;
            p = p->next;
        }
        if(k==1 || n==k){
            ListNode *f = head, *l = head;
            while(l->next!=nullptr){
                l = l->next;
            }

            int m = 0;
            m = f->val;
            f->val = l->val;
            l->val = m;
        }
        else if(n>k){
        for(int i=2;i<k;i++){
            s = s->next;
        }

        for(int i=2;i<n-k+1;i++){
            s1 = s1->next;
        }
        t = s->next->val;
       s->next->val = s1->next->val;
       s1->next->val = t;
        }


        return head;
    }
};
