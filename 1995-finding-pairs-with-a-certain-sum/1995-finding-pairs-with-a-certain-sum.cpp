class FindSumPairs {
    private:
    vector<int>nums1;
    vector<int>nums2;
    unordered_map<int,int>m;
public:
    FindSumPairs(vector<int>& _nums1, vector<int>& _nums2) {
        nums1= _nums1;
        nums2= _nums2;
        for(int n:nums2){
            m[n]++;
        }

    }
    
    void add(int index, int val) {
        m[nums2[index]]--;
        nums2[index] += val;
        m[nums2[index]]++;
    }
    
    int count(int tot) {
        int cnt=0;
        for(int i=0;i<nums1.size();i++){
            int x=tot-nums1[i];
            cnt +=m[x];
        }
        return cnt;
        
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */