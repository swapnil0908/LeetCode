class Solution {
public:
    bool isValid(string s) {
        char x;
        stack<char> p;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{' ){
                p.push(s[i]);           
                continue;
            }
            
            if(p.empty())
                return false;
            switch (s[i]){
                    case ')' :
                        x = p.top();
                        p.pop();
                        if(x== '[' || x== '{')
                            return false;
                        break;
                    case(']'):
                        x = p.top();
                        p.pop();
                        if(x== '(' || x== '}')
                            return false;
                        break;
                    case('}'):
                        x = p.top();
                        p.pop();
                        if(x== '[' || x== '(')
                            return false;
                        break;
            }
        }
        
        return (p.empty());
        
    }
};