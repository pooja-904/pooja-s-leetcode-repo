class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> duplicates;
        for (int i = 0; i < nums.size(); i++)
            for (int j = i + 1; j < nums.size(); j++)
                if (nums[j] == nums[i]) duplicates.push_back(nums[i]);
        return duplicates;
    }
};