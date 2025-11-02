class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
      vector<vector<char>> grid(m, vector<char>(n, '.'));
        for(int i=0;i<guards.size();i++) grid[guards[i][0]][guards[i][1]]='G';
        for(int i=0;i<walls.size();i++)  grid[walls[i][0]][walls[i][1]]='W';
        
        for(int i=0;i<guards.size();i++){
            int x=guards[i][0];
            int y=guards[i][1];
            //left 
            int l=y-1;
            while(l>=0 && grid[x][l]!='W' && grid[x][l]!='G'&&grid[x][l]!='r'){
                grid[x][l]='r';
                l--;
            }
            // right
            int r=y+1;
            while(r<n && grid[x][r]!='W' && grid[x][r]!='G'&&grid[x][r]!='r'){
                grid[x][r]='r';
                r++;
            }
            //top
            int t=x-1;
            while(t>=0 && grid[t][y]!='W' && grid[t][y]!='G'&&grid[t][y]!='c'){
                grid[t][y]='c';
                t--;
            }
            //bottom
             int b=x+1;
            while(b<m && grid[b][y]!='W' && grid[b][y]!='G' && grid[b][y]!='c'){
                grid[b][y]='c';
                b++;
            }
        }
        int cnt=0;
         for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++){
                if(grid[i][j]=='.'){
                cnt++;
                }
            }
        }
        return cnt;
    }
};