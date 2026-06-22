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
    int pairSum(ListNode* head) {
        int n=0;
        ListNode* root=head;
        while(root){
            root=root->next;
            n++;
        }
        int i=0;
        map<int,int>mpp;
        while(i < n/2 && head ){
            mpp[i]=head->val;
            head=head->next;
            i++;
        }
        while(i < n){
            mpp[n-1-i]+=head->val;
            head=head->next;
            i++;
        }
        int maxi=INT_MIN;
        for(auto x : mpp){
            maxi=max(maxi,x.second);
        }
        return maxi;
    }
};