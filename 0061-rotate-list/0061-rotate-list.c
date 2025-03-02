/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* rotateRight(struct ListNode* head, int k) {
 struct ListNode* temp = head;
    if(head== NULL || k == 0)
        return head;
    int n = 0;
    while(temp->next != NULL){
        temp = temp->next;
        n++;
    }
    temp->next = head;
    k = k%(n+1);   
    int x = n-k;
    temp = head;
    while(x){
        temp = temp->next;
        x--;
    }
   struct ListNode* head1 = temp->next ; 
    temp->next = NULL;
        return head1;  
}