class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> mpp;
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        int rank=1;
        for(int x : temp){
            if(mpp.find(x)==mpp.end()){
                mpp[x]=rank;
                rank++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mpp[arr[i]];
        }
        return arr;
    }
};