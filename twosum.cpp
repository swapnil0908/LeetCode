class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int complement;
        map<int, int> MyMap;
        map<int, int>::iterator it;
        for(int i=0;i<nums.size();i++){
            complement = target - nums[i];
            it = MyMap.find(complement);
            if (it != MyMap.end())
            {
            //cout<< MyMap[complement] << " " << i << endl;
            return std::vector{MyMap[complement], i};
            }
            MyMap.insert({nums[i], i});
        }
        return {0};
    }
};