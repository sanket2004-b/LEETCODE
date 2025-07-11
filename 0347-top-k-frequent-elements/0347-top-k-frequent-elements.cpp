class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int n :nums){
            m[n]++;
        }
        // for(auto& it : m){
        //     if(it.second>=k){
        //         ans.push_back(it.first);
        //     }
        // }
        vector<pair<int,int>>p(m.begin(),m.end());
        sort(p.begin(),p.end(), [](pair<int,int>&a,pair<int,int>&b){
            return a.second>b.second;
        });
        for(int i=0;i<k;i++){
            ans.push_back(p[i].first);
        }
        return ans;
    }
};