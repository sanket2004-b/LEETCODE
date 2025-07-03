class Solution {
public:
char solve(char c){
    // return (c=='z')  ? 'a' : c+1;
    if(c=='z'){
        return 'a';
    }else{
        return c+1;
    }
    
}
    char kthCharacter(int k) {
        if(k==1){
            return 'a';
        }
        int len=1;
       while(len*2<k){
            len *=2;
        }

        if(k<=len){
            return kthCharacter(k);
        }else{
            return solve(kthCharacter(k-len));
        }

    }
};