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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> Cri;
        ListNode* prev=head;
        ListNode* temp=head->next;
        ListNode* post=head->next->next; 
        int idx=1;
        while(post){
            if((temp->val > prev->val && temp->val > post->val) || (temp->val < prev->val && temp->val < post->val)){
                Cri.push_back(idx);
            }
            idx++;
            prev=prev->next;
            temp=temp->next;
            post=post->next;
        }
        if(Cri.size() < 2) return {-1,-1};
        int mini=INT_MAX;
        for(int i=0;i<Cri.size()-1;i++){
            mini=min(mini,abs(Cri[i]-Cri[i+1]));
        }
        return {mini,Cri[Cri.size()-1]-Cri[0]};
    }
};