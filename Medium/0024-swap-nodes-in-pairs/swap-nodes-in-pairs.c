/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* temp = head;
    if(temp == NULL || temp->next == NULL){
        return head;
    }
    struct ListNode* prev = NULL;
    struct ListNode* newhead = head->next;
    while(temp != NULL && temp->next != NULL){
        struct ListNode* curr = temp;
        struct ListNode* next = temp->next;
        struct ListNode* next2 = temp->next->next;
        if(prev == NULL){
            prev = next;
        }
        else{
            prev->next = next;
        }
        next->next = curr;
        curr->next = next2;
        prev = curr;
        temp = next2;
    }
    return newhead;
}