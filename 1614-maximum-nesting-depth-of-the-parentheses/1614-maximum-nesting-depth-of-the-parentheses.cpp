class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
                
            }
            else if(s[i]==')'){
                maxi=max(maxi,cnt);
                cnt--;
            }
        }
        return maxi;
    }
};
