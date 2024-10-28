int getDecimalValue(ListNode* head) {
        int cnt=1;
        double dec=0.0;
        ListNode* temp=head;
        while(temp->next!=NULL){
            ++cnt; temp=temp->next;
        }
        temp=head;

        if(cnt==1 && temp->val==0) return 0;
        if(cnt==1 && temp->val==1) return 1;
        for(int i=1;i<=cnt;i++){
            dec+=(temp->val)*pow(2,cnt-i);
            temp=temp->next;
        }
        return (int)dec;
    }