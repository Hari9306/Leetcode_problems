class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        long long score=0;
        while(!pq.empty()){
            int idx=pq.top().second;
            if(nums[idx]!=-1){
                score+=pq.top().first;
                if(idx-1 >= 0) nums[idx-1]=-1;
                if(idx+1 < n)  nums[idx+1]=-1;
                pq.pop();
            }
            else {
                pq.pop();
            }
        }
        return score;
    }
};