ListNode *head=0,*tail=0;
        int c = 0;
        int sum=0;
        while(l1!=0 || l2!=0 || c==1){
            ListNode* l3 = new ListNode();
            l3->next = 0;
        if (l1 != 0 && l2 != 0) {
            sum = l1->val + l2->val+ c;
            if(sum<=9){
                l3->val=sum;
                c=0;
            }
            else if(sum>9){
                sum=sum%10;
                l3->val = sum;
                c=1;

            }
            l1 = l1->next;
            l2 = l2->next;
        } else if (l1 != 0 && l2 == 0) {
            sum = l1->val + c;
             if(sum<=9){
                l3->val=sum;
                c=0;
            }
            else if(sum>9){
                sum=sum%10;
                l3->val = sum;
                c=1;

            }
            l1 = l1->next;
        } else if (l2 != 0 && l1 == 0 ) {
            sum = l2->val + c;
             if(sum<=9){
                l3->val=sum;
                c=0;
            }
            else if(sum>9){
                sum=sum%10;
                l3->val = sum;
                c=1;

            }
            l2 = l2->next;
        }
        else if(l1==0 && l2==0 && c == 1){
            l3->val = c;
            c=0;
        }
        if (head == 0) {
            head = l3;
        } else {
            tail->next = l3;
        }
        tail=l3;
        }

    return head;
