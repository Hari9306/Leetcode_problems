class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        int n=piles.size();
        for(int i=0;i<n;i++){
            pq.push(piles[i]);
        }
        while(k--){
            int val=pq.top();
            pq.pop();
            pq.push((val+1)/2);
        }
        int stones=0;
        while(!pq.empty()){
            stones+=pq.top();
            pq.pop();
        }
        return stones;
    }
};