class Solution {
public:
    string str(int i,int n){
        string s="";
        while(i>0){
            s+=(i%2)+'0';
            i/=2;
        }
        while(s.size()<n) s+='0';
        reverse(s.begin(),s.end());
        return s;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        for(int i=0;i<=n;i++){
            string res=str(i,n);
            if(find(nums.begin(),nums.end(),res)==nums.end()) return res;
        }
        return "";
    }
};