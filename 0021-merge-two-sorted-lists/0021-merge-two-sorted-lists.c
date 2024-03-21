/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *head;
    struct ListNode *temp;

    if(list1==NULL && list2==NULL){
        return NULL;
    }
    else if(list1==NULL)
        return list2;
    else if (list2==NULL)
        return list1;
    
    else{
        if(list1->val<list2->val){
            head=list1;
            temp=head;
            list1=list1->next;
        }
        else{
            head=list2;
            temp=head;
            list2=list2->next;
        }
    }

    while(list1!=NULL && list2!=NULL){
        if(list1->val<list2->val){
            temp->next=list1;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            list2=list2->next;
        }
        temp=temp->next;
    }
     if(list1 != NULL)
        temp->next = list1;
    else
        temp->next = list2;

    return head;
}