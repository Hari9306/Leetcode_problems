class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v;
        int sum=0;
        v.push_back(sum);
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            v.push_back(sum);
        }
        int highest=*max_element(v.begin(),v.end());
    return highest;
    }
};