class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *r = new ListNode(0);
        ListNode *t1 = l1;
        ListNode *t2 = l2;
        ListNode *result = r;
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        while(t1!=NULL && t2!=NULL){
            if(t1->val<=t2->val) {
                result->next = t1;
                t1 = t1->next;
                result = result->next;
                }
            
            else{
                result->next = t2;
                t2 = t2->next;
                result = result->next;
            } 
        }
		//below loops to check if any element remains in either of the list
        while(t2!=NULL){
            result->next = t2;
            t2 = t2->next;
            result = result->next;
        }
        while(t1!=NULL){
            result->next = t1;
            t1 = t1->next;
            result = result->next;
        }

        return r->next;
    }
};