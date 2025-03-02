/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    int i,temp,diff=right-left;
    struct ListNode* ptrLeft=head;
    for(i=0;i<left-1;i++)
        ptrLeft=ptrLeft->next;
    struct ListNode* iter=ptrLeft;
    
    while(diff > 0){
        temp = ptrLeft->val;
        for(i = 0; i < diff ; i++)
            iter=iter->next;
        ptrLeft->val=iter->val;
        iter->val=temp;
        
        diff-=2;
        ptrLeft=ptrLeft->next;
        iter=ptrLeft;
    }
    return head;
}