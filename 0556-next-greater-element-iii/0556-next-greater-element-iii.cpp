class Solution {
public:
    int nextGreaterElement(int n) {
        // int num=n;
        // int ans=0;
        // while(n!=0){
        //     int digit=n%10;
        //     ans= ans*10+digit;
        //     n = n/10;
        // }
        
        // if(ans>num){
        //     return ans;
        // }
        // return -1;
        string s=to_string(n);
        next_permutation(s.begin(),s.end());
        long long num = stol(s);
        if(num>INT_MAX){
            return -1;
        }
        if(num>n){
            return num;
        }
        return -1;

    }
};