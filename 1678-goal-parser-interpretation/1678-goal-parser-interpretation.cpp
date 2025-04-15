class Solution {
public:
    string interpret(string command) {
     string s;
     for(int i=0;i<command.size();i++){
        if(command[i]=='a'||command[i]=='l'||command[i]=='G'){
            s+=command[i];
        }
        else if (command[i]=='('&&command[i+1]==')'){
            s+='o';

        }
     }   
     return s;
    }
};