class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int cnt=0;
        while(target!=1){
            if(!maxDoubles) break;
            if(target%2==0 && maxDoubles){
                cnt++;
                target=target/2;
                maxDoubles--;
                if(!maxDoubles) break;
            }
            else{
                target=target-1;
                cnt++;
            }
        }
        return cnt+target-1;
    }
};