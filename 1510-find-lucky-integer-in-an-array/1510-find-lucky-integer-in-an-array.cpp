class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int n : arr){
            m[n]++;
        }
        int maxi=0;
        for(auto& it:m){
            if(it.first==it.second){
                maxi=max(maxi,it.first);
            }
        }
        if(maxi==0){
            return -1;
        }
        return maxi;
    }
};