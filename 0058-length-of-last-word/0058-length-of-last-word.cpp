class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int cnt=0;
        bool flag=false;
        for(int i=n-1;i>=0;i--){
            
            if((s[i]==' ') && flag ){
               break;
            }
            else if(s[i]!=' '){
                cnt+=1;
                flag=true;
            }
        }
        return cnt;
    }
};