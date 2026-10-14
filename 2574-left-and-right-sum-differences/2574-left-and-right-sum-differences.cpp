class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum;
        vector<int> answer;

        for (int i = 0; i < nums.size(); i++) {
            int left = 0;
            for(int j = 0; j < i; j++)
                left += nums[j];
            leftSum.push_back(left);
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
            int right = 0;
            for(int j = nums.size() - 1; j > i; j--)
                right += nums[j];
            rightSum.push_back(right);
        }

        reverse(rightSum.begin() ,rightSum.end());
        for (int i = 0; i < nums.size(); i++)
            answer.push_back(abs(leftSum[i] - rightSum[i]));
        return answer;
    }
};