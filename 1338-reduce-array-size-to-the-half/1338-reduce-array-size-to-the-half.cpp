class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        priority_queue<int>pq;
        for(auto it:mpp){
            pq.push(it.second);
        }
        int cnt=0;
        int sum=0;
        int n=arr.size();
        while(!pq.empty()){
            int val=pq.top();
            pq.pop();
            sum+=val;
            if(sum >=(n/2)){
                cnt++;
                break;
            }
            else{
                cnt++;
            }
        }
        return cnt;
    }
};