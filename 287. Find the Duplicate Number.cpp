

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_set<int> set;
//         int len = nums.size();
//         for (int i = 0; i < len; ++i) {
//             if (!set.insert(nums[i]).second) {
//                 return nums[i];
//             }
//         }
//         return len;
//     }
// };

// optimal solution 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast=0;
        int slow=0;
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow=0;
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};