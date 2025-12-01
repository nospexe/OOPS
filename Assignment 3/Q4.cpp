#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

std::vector<int> nextGreaterElement(const std::vector<int>& nums) {
    std::vector<int> result(nums.size(), -1); 
    std::stack<int> st; 

    for (int i = 0; i < nums.size(); ++i) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            int index = st.top();
            st.pop();
            result[index] = nums[i];
        }
        st.push(i);
    }
    return result;
}