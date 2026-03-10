class Solution {
public:
    string reorganizeString(string s) {
        map<char,int>mpp;
        int n=s.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            maxi=max(maxi,mpp[s[i]]);
        }
        if(maxi> (n+1)/2) return "";
        priority_queue<pair<int,char>>pq;
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }
        int i=0;
        while(!pq.empty()){
            int freq=pq.top().first;
            int val=pq.top().second;
            pq.pop();
            while(freq--){
                if(i>=n) i=1;
                s[i]=val;
                i+=2;
            }
        }
        return s;
    }
};