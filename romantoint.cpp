class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int prev = -1;
        cout<<s.size();
        for(int i=s.size()-1;i>=0;i--){
            int curr = sToInt(s[i]);
            if(prev>curr){
                sum=sum-curr;
                continue;
            }
            
            sum+=curr;
            prev = curr;
            
        }
        return sum;
    }
    
    int sToInt(char x){
        switch(x){
                case('I'):
                    return 1;
                    break;
                case('V'):
                    return 5;
                    break;
                case('X'):
                    return 10;
                    break;
                case('L'):
                    return 50;
                    break;
                case('C'):
                    return 100;
                    break;
                case('D'):
                    return 500;
                    break;
                case('M'):
                    return 1000;
                    break;
                default:
                    return 0;
                    break;
                        
        }
    }
};