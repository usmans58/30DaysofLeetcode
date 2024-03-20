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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        if (temp==nullptr){
            return nullptr;
        }
        int count=0;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }

        ListNode* arr[count];
        temp=head;
        for (int i=0; i<count; i++){
            arr[i]=temp;
            temp=temp->next;
        }
        for (int i=count-1; i>0; i--){
            arr[i]->next=arr[i-1];
        }
        arr[0]->next=nullptr;
        return arr[count-1];
        
        
    }
};