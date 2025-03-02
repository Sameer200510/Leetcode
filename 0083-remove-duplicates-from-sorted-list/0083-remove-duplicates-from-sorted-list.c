/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct Node *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* curr = head;
    struct ListNode* temp = NULL;
    while(curr){
    if(curr->next == NULL)
        break;
    
    if(curr->val == curr->next->val){
        temp = curr->next->next;
        free(curr->next);
        curr->next = temp;
    } else {
        curr = curr->next;
    }        
}
return head;
}