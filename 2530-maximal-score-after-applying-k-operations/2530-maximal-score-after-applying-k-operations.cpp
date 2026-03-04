class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        long long score=0;
        while(k--){
            int val=pq.top();
            pq.pop();
            pq.push((val+2)/3);
            score+=val;
        }
        return score;
    }
};