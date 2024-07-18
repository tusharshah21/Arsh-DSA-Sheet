

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            if (!set.insert(nums[i]).second) {
                return nums[i];
            }
        }
        return len;
    }
};