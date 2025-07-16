class Solution {
public:
   static bool compare(string& a,string& b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>res;
        for(int num:nums){
            res.push_back(to_string(num));
        }
       
        sort(res.begin(),res.end(),compare);
       string ans="";
       if(res[0]=="0"){
        return "0";
       }
       for(string& s:res){
        ans +=s;
       }
       return ans;
    }
};