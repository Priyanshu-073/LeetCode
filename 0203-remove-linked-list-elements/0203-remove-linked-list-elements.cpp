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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        ListNode* nh=new ListNode(0);
        nh->next=head;

        ListNode* res=nh;
        
        while(nh && nh->next){
            if(nh->next->val==val){
                nh->next=nh->next->next;
            }else{
                nh=nh->next;
            }
        }
        return res->next;
    }
};