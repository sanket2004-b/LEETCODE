class Solution {
public:
    int palin(vector<int>& ans){
        int i=0;
        int j=ans.size()-1;
        int cnt=0;
        while(i<=j){
            if(ans[i]==ans[j]){
                i++;
                j--;
            }else if(ans[i] != ans[j]){
                i++;
                j--;
                cnt++;
            }
        }

        return cnt;
    }
    int minFlips(vector<vector<int>>& grid) {
        int row=0;
        int col=0;
        int n=grid.size();
        int m=grid[0].size();
        // row wise
        for(int i=0;i<n;i++){
            row+=palin(grid[i]);
        }
        
        for(int j=0;j<m;j++){
            vector<int>temp;

            for(int i=0;i<n;i++){
                temp.push_back(grid[i][j]);
            }
            col+=palin(temp);
        }
        return min(row,col);

    }
};