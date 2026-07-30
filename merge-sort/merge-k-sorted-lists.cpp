
class Solution {
public:
ListNode*mergetwolists(ListNode*L1 ,ListNode*L2 ){
    if(L1==NULL) return L2;
    if(L2==NULL) return L1;

    if(L1->val < L2->val){
        L1->next = mergetwolists(L1->next , L2);
        return L1;
    }else{
        L2->next = mergetwolists(L1 , L2->next);
        return L2;
    }
    return NULL;
}
ListNode*partionandmerge(int start , int end ,vector<ListNode*>& lists){
    if(start==end){
        return lists[start];
    }
    if(start>end) return NULL;

    int mid = start + (end - start)/2;
   ListNode* M1 = partionandmerge(start , mid , lists);
    ListNode*M2 = partionandmerge(mid+1 , end , lists);

    return mergetwolists( M1 , M2);
}

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if(k==0) return NULL ;

        return partionandmerge(0 , k-1 , lists);
    }
};