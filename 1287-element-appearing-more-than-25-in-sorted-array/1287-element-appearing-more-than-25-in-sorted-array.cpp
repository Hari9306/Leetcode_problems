class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int freq[1000001]={0};
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        float avg=arr.size()/4;
        for(int i=0;i<arr.size();i++){
            if(freq[arr[i]]>avg){
                return arr[i];
                break;
            }
        }
        return 0;
    }
};