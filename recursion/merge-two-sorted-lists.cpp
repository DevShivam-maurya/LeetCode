
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* lists1, ListNode* lists2) {
        if(lists1==NULL) return lists2;
        if(lists2==NULL) return lists1;

        if(lists1->val < lists2->val){
            lists1->next =  mergeTwoLists(lists1->next , lists2);
            return lists1;
        }else{
            lists2->next =  mergeTwoLists(lists1 , lists2->next);
            return lists2;
        }
        return NULL;
    }
};