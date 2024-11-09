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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        while(temp){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        ListNode* temp2=head;
        temp=prev;
        while(temp){
            ListNode* temp3=temp2->next;
            ListNode* temp4=temp->next;
            temp2->next=temp;
            temp->next=temp3;
            temp2=temp3;
            temp=temp4;
        }

        

    }
};