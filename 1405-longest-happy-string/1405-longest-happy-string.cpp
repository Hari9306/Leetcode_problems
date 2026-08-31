class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string res="";
        priority_queue<pair<int,char>> pq;
        if(a > 0) pq.push({a,'a'});
        if(b > 0) pq.push({b,'b'});
        if(c > 0) pq.push({c,'c'});
        while(!pq.empty()){
            int top=pq.top().first;
            char ch=pq.top().second;
            pq.pop();
            if(res.size()>=2 && res[res.size()-1] == ch && res[res.size()-2]==ch){
                if(pq.empty()) break;
                int stop=pq.top().first;
                char sch=pq.top().second;
                pq.pop();
                res+=sch;
                stop--;
                if(stop > 0) pq.push({stop,sch});
                pq.push({top,ch});
            }
            else{
                if(top >=2) {
                    res+=ch;
                    res+=ch;
                    top-=2;
                }
                else if(top==1){
                    res+=ch;
                    top--;
                }
                if(top > 0)pq.push({top,ch});
            }
        }
        return res;
    }
};