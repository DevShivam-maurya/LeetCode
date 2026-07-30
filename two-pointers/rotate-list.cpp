
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL || k==0 )  return head;
        int l=1;
        ListNode*tail = head;
        while(tail->next != NULL){
            tail = tail->next;
            l++;
        }
        k = k%l;
        if(k==0) return head;
        tail->next = head;
        int remain = l-k; 
        ListNode*newtail = head ;
        for(int c=1 ; c<remain ; c++){
            newtail = newtail->next;
        }
        ListNode*newhead = newtail->next;
        newtail->next = NULL ;

        return newhead;
    }
};