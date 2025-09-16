class Solution {
public:
    void solve(vector<int>& candidates, int target, int index, vector<int>& ans,vector<vector<int>>& result) {
        if (target==0) {
            result.push_back(ans);
            return;
        }
        if(target<0){
            return ;
        }

        if (index >= candidates.size()) {
            return;
        }

        // Include current element
        ans.push_back(candidates[index]);
        solve(candidates, target-candidates[index], index, ans,  result);
        ans.pop_back();  // Backtrack

        // Exclude current element
        solve(candidates, target, index + 1, ans, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> result;
        solve(candidates, target, 0, ans, result);
        return result;
    }
};
