#include<queue>

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        int n=nums.size();
        // return nums[n-k];
        priority_queue<int,vector<int >,greater<int>>q;
        for(int i=0;i<k;i++){
            q.push(nums[i]);
        }
        for(int i=k;i<n;i++){
            if(q.top()<nums[i]){
                q.pop();
                q.push(nums[i]);
            }
        }
        // while(q.size()>k){
        //     q.pop();
        // }
        return q.top();
    }
};