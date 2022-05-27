class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index = 0;
        unordered_map<int,int> indexMap;
        
        for(int i = 0; i < nums.size(); i++)        
        {            
            int requireNum = target-nums[i];
            if(indexMap.find(requireNum) != indexMap.end())
                return {indexMap[requireNum], i};
            indexMap[nums[i]] = i;
        }
        
        return {};        
    }
    
};