class Solution {
public:
    string originalDigits(string s) {
        vector<int>freq(26);
        int nums[10]={0};
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        // for zero
        nums[0]=freq['z'-'a'];
        nums[2]=freq['w'-'a'];
        nums[6]=freq['x'-'a'];
        nums[8]=freq['g'-'a'];
        nums[4]=freq['u'-'a'];
        nums[7]=freq['s'-'a']-nums[6];
        nums[3]=freq['h'-'a']-nums[8];
        nums[5]=freq['v'-'a']-nums[7];
        nums[9]=freq['i'-'a']-nums[6]-nums[8]-nums[5];
        nums[1]=freq['o'-'a']-nums[0]-nums[2]-nums[4];
        string res="";
        for(int i=0;i<10;i++){
            if(nums[i]>0){
              res += string(nums[i], '0' + i);
            }
        }
        return  res;
    }
};