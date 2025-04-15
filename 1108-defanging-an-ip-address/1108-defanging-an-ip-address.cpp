class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for(auto val:address){
            if(val=='.'){
                s+='[';
                s+='.';
                s+=']';
            }
            else{
                s+=val;
            }
        }
        return s;
    }
};