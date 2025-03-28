int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    for(int i=0;i<seatsSize-1;i++){
        for(int j=0;j<seatsSize-i-1;j++){
            if(seats[j]>seats[j+1]){
                int temp = seats[j];
                seats[j]=seats[j+1];
                seats[j+1]=temp;
            }
        }
    }
    for(int i=0;i<studentsSize-1;i++){
        for(int j=0;j<studentsSize-i-1;j++){
            if(students[j]>students[j+1]){
                int temp = students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
        }
    }
    int total=0;
    for(int i=0;i<studentsSize;i++){
       if(students[i]>seats[i]){
        total+=students[i]-seats[i];
       }
       else{
        total+=seats[i]-students[i];
       }
    }
    return total;
}