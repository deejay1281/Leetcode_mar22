class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> valSet;
        unordered_set<int> duplicateSet;
        for (ListNode* w = head; w; w = w->next) {
            if (valSet.find(w->val) != valSet.end()) {
                duplicateSet.insert(w->val);
            }
            else {
                valSet.insert(w->val);
            }
        }
        ListNode *newHead = new ListNode(INT_MIN);
        ListNode *w = newHead;
        for (auto &it : valSet) {
            if (duplicateSet.find(it) == duplicateSet.end()) {
                w->next = new ListNode(it);
                w = w->next;
            }
        }
        return newHead->next;
    }
};