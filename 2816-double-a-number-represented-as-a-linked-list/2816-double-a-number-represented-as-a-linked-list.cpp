/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int dfs(ListNode* head){
        if(!head) return 0;
        int carry=dfs(head->next);
        int ans=head->val*2+carry;
        head->val=ans%10;
        return ans/10;
    }
    ListNode* doubleIt(ListNode* head) {
        int car=dfs(head);
        if(car>0) {
            ListNode* temp=new ListNode(car);
            temp->next=head;
            return temp;
        }
        return head;
    }
};