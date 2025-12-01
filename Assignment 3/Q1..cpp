#include <vector>
#include <unordered_map>
#include <iostream>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map; 

    for (int i = 0; i < nums.size(); ++i) {
        int needed = target - nums[i];
    
        if (map.find(needed) != map.end()) {
            return {map[needed], i};
        }
        
        map[nums[i]] = i;
    }
    return {};
}