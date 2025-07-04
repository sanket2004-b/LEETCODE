class Solution {
public:
    string reverseWords(string s) {
        // int start=1;
        // int end=s.size()-1;
        // while(start<=end){
        //     if(s[start]==' '){
        //         swap(s[start-1],s[end]);
        //     }
        //     start++;
        //     end--;
        // }

       // return s;
       istringstream iss(s);
       vector<string>words;
       string word;
       while(iss >> word){
        words.push_back(word);
       }

       reverse(words.begin(),words.end());

       ostringstream oss;
       for(size_t i=0;i<words.size();i++){
        oss<<words[i];
            if(i !=words.size()-1){
                oss<<' ';
            }
       }
       return oss.str();
    }
};