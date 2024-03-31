/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
    int count=0;
    struct ListNode *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    if(count<=2)
        return;
    else{
        for (int i=0;i<count/2;i++)
        {
            struct ListNode *temp=head;
            struct ListNode *prev=NULL;
            while(temp->next!=NULL)
            {
                prev=temp;
                temp=temp->next;
            }
            prev->next=NULL;
            temp->next=head->next;
            head->next=temp;
            head=temp->next;
        }

    }
    
}