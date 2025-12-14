class Solution {
public:
    long long minMoves(vector<int>& balance) {
        int n=balance.size();
        long long total=0;
        int neg=-1;
        for(int i=0;i<n;i++){
            total+=balance[i];
            if(balance[i]<0) neg=i;
        }
        if(total < 0) return -1;
        if(neg==-1) return 0;
        long long need=-balance[neg];
        long long moves=0;
        int left=(neg-1+n)%n;
        int right=(neg+1)%n;
        int dist=1;
        while(need > 0){
            if(balance[left]>0){
                long long rem=min((long long )balance[left],need);
                moves+=rem*dist;
                need-=rem;
                balance[left]-=rem;
            }
            if(need==0) break;
            if(balance[right]>0){
                long long rem=min((long long)balance[right],need);
                moves+=rem*dist;
                need-=rem;
                balance[right]-=rem;
            }
            left=(left-1+n)%n;
            right=(right+1)%n;
            dist++;
        }
        return moves;
    }
};