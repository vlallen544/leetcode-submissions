/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {

    int n = 0;
    struct ListNode* slow = head;

    while(slow != NULL){
        slow = slow->next;
        n++;
    }

    if(n == 1){
        return NULL;
    }
    n = n/2;

    struct ListNode* temp = head;
    for(int i = 0; i<n-1; i++){
        temp = temp->next;
    }

    struct ListNode* del = temp->next;
    temp->next = del->next;

    free(del);
    return head;
}