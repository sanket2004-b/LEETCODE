class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>ans;
        for(int i=0;i<heights.size();i++){
            ans.push_back(heights[i]);
        }
        int cnt=0;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(ans[i]!=heights[i]){
                cnt++;
            }
        }
        return cnt;
    }
};