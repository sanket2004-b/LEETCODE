class Solution {
public:
bool iszero(int n){
    while(n>0){
        if(n%10==0) return true;
        n=n/10;
    }
    return false;
}
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;

        for(int i=1;i<n;i++){
            int j=n-i;
            if(!iszero(i) && !iszero(j)){
                return {i,j};
               
            }
        }
        return {};
    }
};