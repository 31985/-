class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       if(l1==nullptr)
       {
           return l2;
       }
       else if(l2==nullptr)
       {
           return l1;
       }
       ListNode* tmp=nullptr;
       if(l1->val<l2->val)
       {
           tmp=l1;
           tmp->next=mergeTwoLists(l1->next,l2);
       }
       else
       {
           tmp=l2;
           tmp->next=mergeTwoLists(l1,l2->next);
       }
       return tmp;
    }
};
