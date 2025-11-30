class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());

        int n=skill.size();
        int l=0;
        int r=n-1;
        int sum=-1;
        int target=skill[l]+skill[r];
        long long res=0;
        while(l<r){
            
            if(skill[l]+skill[r] != target){
                return -1;
                
            }else{
                res += (skill[l]*skill[r]);
            }
            l++;
            r--;

        }
        return res;
    }
};