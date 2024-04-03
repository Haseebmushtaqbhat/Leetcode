class Solution {
public:
    bool search(int i,int j,int idx,vector<vector<char>>& board,string word,int n,int m){
        if(idx==word.size())
        return true;

        if(i<0 || i>=m ||j<0 || j>=n || board[i][j]!=word[idx] || board[i][j]=='!'){
            return false;
        }
        char c=board[i][j];
        board[i][j]='!';

        bool left=search(i,j-1,idx+1,board,word,n,m);
        bool right=search(i,j+1,idx+1,board,word,n,m);
        bool bottom=search(i+1,j,idx+1,board,word,n,m);
        bool top=search(i-1,j,idx+1,board,word,n,m);
         board[i][j]=c;


        return left || right || bottom || top;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[idx]){
                    if(search(i,j,idx,board,word,n,m)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};