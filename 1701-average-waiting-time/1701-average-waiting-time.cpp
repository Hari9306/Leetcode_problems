class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long finish=customers[0][0]+customers[0][1];
        long long sum = finish-customers[0][0];
        // cout<< sum << " "<< finish << endl;
        for(int i=1;i<customers.size();i++){
                if(finish>=customers[i][0]){
                    finish+=customers[i][1];
                    sum+=(finish-customers[i][0]);
                }
                else {
                    finish=customers[i][0]+customers[i][1];
                    sum+=(finish-customers[i][0]);
                }    
                //  cout << sum << " "<< finish<<endl;
        }
        double ans = (double) sum / customers.size();
        return ans;
    }
};