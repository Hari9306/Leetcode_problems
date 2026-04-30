class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int tgas=0,tcost=0;
       for(int i=0;i<gas.size();i++){
            tgas+=gas[i];
            tcost+=cost[i];
       } 
       if(tgas < tcost) return -1;
       int curr_gas=0;
       int start=0;
       for(int i=0;i<gas.size();i++){
            curr_gas+=gas[i]-cost[i];
            if(curr_gas<0){
                curr_gas=0;
                start=i+1;
            }
       }
       return start;
    }
};