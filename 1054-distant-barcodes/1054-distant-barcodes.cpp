class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int n=barcodes.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[barcodes[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }
        vector<int>res(n);
        int i=0;
        while(!pq.empty()){
            int freq=pq.top().first;
            int val=pq.top().second;
            pq.pop();
            while(freq--){
                 if (i >= n) i = 1;
                res[i] = val;
                i+= 2;
            }
        }
        return res;
    }
};