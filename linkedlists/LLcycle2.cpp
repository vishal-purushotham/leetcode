ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* entry=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                while(entry!=slow){
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }