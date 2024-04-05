class Solution {
public:
    string makeGood(string s) {
        stack<int> p;
        p.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!p.empty()){
                if(p.top()==(s[i]+32) || p.top()==(s[i]-32)){
                    p.pop();
                }
                else{
                    p.push(s[i]);
                }
            }
            else{
                p.push(s[i]);
            }
        }
        string r;
        while(!p.empty()){
            r+=p.top();
            p.pop();
        }
        reverse(r.begin(), r.end());
        return r;
    }
    
};