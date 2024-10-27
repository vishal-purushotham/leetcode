ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            ListNode* temp=head;
            head=head->next;
            delete temp;
        }
        if(head==nullptr) return nullptr;
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->val==val){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }