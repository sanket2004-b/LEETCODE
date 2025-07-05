class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>count;
        // vector<int>count(26,0);
        for(char c:s){
            count[c-'a']++;
        }
        for(char c:t){
            count[c-'a']--;
        }
       for(auto& i:count){
        if(i.second!=0){
            return false;
        }
       }
       return true;
    }
};