class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>res;
        res.push_back(0);
        for(int i=1;i<=num;i++){
            count(i,res);
        }
        return res;
    }
    
    void count(int i, vector<int>& res){
            int count = 0;
            while(i){
                count = count+(i&1);
                i>>=1;
            }
            res.push_back(count);
    }
};