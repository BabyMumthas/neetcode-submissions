class Solution {
    public:
    ListNode* reverseList (ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head ;
        while (curr != nullptr){
            ListNode* next =curr->next;
            curr->next= prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
/*
Linked List
Reverse
Reverse List
Reverse Nodes

Immediately think:

prev
curr
next
One-line Memory
Save → Reverse → Move

next = curr->next
curr->next = prev
prev = curr
curr = next
*/