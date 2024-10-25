ListNode* rotateRight(ListNode* head, int k) {
        //edge cases
        if(!head || !head->next || k==0) return head;
        //compute length
        ListNode* cur=head;
        int len=1;
        while(cur->next && ++len) cur=cur->next;
        //go till that node
        cur->next=head;
        k=k%len;
        k=len-k; //rotate rightwise
        while(k--) cur=cur->next;
        //make node head and break connection
        head=cur->next;
        cur->next=NULL;
        return head;
    }