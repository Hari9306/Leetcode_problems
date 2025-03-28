class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
       
       sort(seats.begin(),seats.end());
       sort(students.begin(),students.end());
        int total=0;
    for(int i=0;i<students.size();i++){
       if(students[i]>seats[i]){
        total+=students[i]-seats[i];
       }
       else{
        total+=seats[i]-students[i];
       }
    }
    return total;
    }
};