class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int ans=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]>nums2[i]){
                 ans=-(nums1[i]-nums2[i]);
            }else{
                ans=nums2[i]-nums1[i];
            }
        }
        return ans;
    }
};