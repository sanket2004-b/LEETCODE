class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int sum=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0){
                rem+=k;
            }

            if(m.find(rem)!=m.end()){
                count+=m[rem];
            }
            m[rem]++;
        }
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum=sum+nums[j];
        //         if(sum%k==0){
        //             count++;
        //         }
        //     }
        // }
         return count;

    }
};