struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {

    struct ListNode dummy;
    dummy.next = head;

    struct ListNode* before = &dummy;
    int i = left;

    while(i > 1){
        before = before->next;
        i--;
    }

    struct ListNode* temp2 = head;
    int j = right;

    while(j > 0){
        temp2 = temp2->next;
        j--;
    }

    struct ListNode* fnext = temp2;

    struct ListNode* curr = before->next;
    struct ListNode* tail = curr; 
    struct ListNode* prev = NULL;
    struct ListNode* nex = NULL;

    while(curr != temp2){
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }

    tail->next = fnext;   
    before->next = prev;
    return dummy.next;
}