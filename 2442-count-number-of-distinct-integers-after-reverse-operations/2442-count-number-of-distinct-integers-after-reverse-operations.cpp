class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int num=nums[i];
            int ans=0;
            while(num != 0){
                int digit=num%10;
                ans=ans*10+digit;
                num=num/10;
            }
            st.insert(ans);
        }
        return st.size();
    }
};