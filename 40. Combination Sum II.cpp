

class Solution {
    set<vector<int>> s;
    void generateCombinations(vector<int>& candidates, int target, int index, vector<int>combination, int currentSum) {
        if (currentSum == target) {
            s.insert(combination);
            return;
        }
        for (int i = index; i < candidates.size(); ++i) {
            if (i > index && candidates[i] == candidates[i - 1])
                continue;
            if (currentSum + candidates[i] <= target) {
                combination.push_back(candidates[i]);
                generateCombinations(candidates, target, i + 1, combination, currentSum + candidates[i]);
                combination.pop_back();
            }
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        generateCombinations(candidates, target, 0, {}, 0);
        return vector<vector<int>>(s.begin(), s.end());
    }
};