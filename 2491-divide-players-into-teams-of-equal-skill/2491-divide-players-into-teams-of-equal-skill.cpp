class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
      sort(skill.begin(),skill.end());
      int n=skill.size();
      long long ans=0;
      int maxi=skill[0]+skill[n-1];
      for(int i=0;i<n/2;i++){
        if(skill[i]+skill[n-i-1] == maxi){
            ans+=(1LL*skill[i]* skill[n-i-1]);
        }
        else{
            return -1;
        }
      }
      return ans;
    }
};