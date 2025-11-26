class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string n1=to_string(num1);
        string n2=to_string(num2);
        string n3=to_string(num3);
        while(n1.size()<4){
            n1='0'+n1;
        }
        while(n2.size()<4){
            n2='0'+n2;
        }
        while(n3.size()<4){
            n3='0'+n3;
        }
        int ans=0;
        for(int i=0;i<=3;i++){
            int d1 = n1[i] - '0';
            int d2 = n2[i] - '0';
            int d3 = n3[i] - '0';

            int digit = min({d1, d2, d3});
            ans=ans*10+digit;
        }

        

 
        
        return ans;
    }
};