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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int>s;
        for(auto i:nums)
        {
            s.insert(i);
        }
        bool l = false;
        int c=0;
        while(head!=nullptr)
        {
            int v = head->val;
            if(s.count(v)>0 && l==false)
            {
                l=true;
                c++;
            }
            else if(s.count(v)==0 && l==true)
            {
                l=false;
            }
            head=head->next;
        }
        return c;
    }
};
