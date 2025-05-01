class Solution {
public:
    int gcd(int a,int b){
        while(a>0&&b>0){
            if(a>b) a=a%b;
            else b=b%a;
        }
        if(a==0)return b;
        return a;
    }
     int first(int num) {
        while (num >= 10) {
            num /= 10;
        }
        return num;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int first_num=first(nums[i]);
            for(int j=i+1;j<nums.size();j++){
                if(gcd(first_num,nums[j]%10)==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};