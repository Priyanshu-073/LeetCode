/**
 * Definition for singly-linked list.
 * struct ListListNode  {
 *     int val;
 *     ListListNode  *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    ListNode* temp=head;
    int length=0;
    while(temp->next!=NULL){
        temp=temp->next;
        length++;
    }
    int mid=length/2;
    while(mid--){
        head=head->next;
    }           
    if(length % 2 == 0){
    return head;
    }
    return head->next;
    }
};