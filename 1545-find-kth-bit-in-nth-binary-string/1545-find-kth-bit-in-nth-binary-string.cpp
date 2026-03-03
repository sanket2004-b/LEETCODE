class Solution {
public:
    string invert(const string& temp){
        string res=temp;
        for(char &c:res){
            c=(c=='0') ? '1' : '0';
        }
        reverse(res.begin(),res.end());
        return res;
    }
    // void reversed(string res){
    //     reverse(res.begin(),res.end());
    // }
    char findKthBit(int n, int k) {
        string res="0";
        for(int i=2;i<=n;i++){
            if(res.size()>=k){
                break;
            }
             string right = invert(res);

            // Also avoid building beyond k
            string temp = res + "1";
            if ((int)temp.size() >= k) return temp[k - 1];

            temp += right;
            res = temp;

            if ((int)res.size() >= k) break;
        }
        // for(char c:res){
        //     // cout<<c<<" ";
        // }
        return res[k-1];
    }
};