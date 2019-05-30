class Solution {
public:
    bool verifyPreorder(vector<int>& preorder) {
        stack<int> stk;
        int lower_bound= INT_MIN;
        for(auto n: preorder){
            if(n< lower_bound)
                return false;
            while(!stk.empty() && n> stk.top()){
                lower_bound= stk.top();
                stk.pop();
            }
            stk.push(n);
        }
        return true;
    }
};