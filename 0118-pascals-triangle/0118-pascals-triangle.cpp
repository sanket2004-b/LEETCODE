class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int>res;
        res.push_back(1);
        for(int i=1;i<rowIndex;i++){
            ans= ans*(rowIndex-i);
            ans=ans/i;
             res.push_back(ans);
           
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<int>ans;
        vector<vector<int>>res;
        for(int i=1;i<=numRows;i++){
            res.push_back(getRow(i));
        }
        return res;
        
    }
};