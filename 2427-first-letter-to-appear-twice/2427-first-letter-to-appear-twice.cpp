class Solution {
public:
    char repeatedCharacter(string s) {
        // unordered_map<char,int>m;

        // for(char c :s){
        //     m[c]++;
        // }
        // string res="";
        // for(auto& it:m){
        //     if(it.second>=2){
        //         res.push_back(it.first);
        //         break;
                
        //     }
        // }
        unordered_set<char>visit;
        for(char c :s){
            if(visit.count(c)){
                return c;
            }
            visit.insert(c);
        }
        // int n=res.size();
        return '\0';

    }
};