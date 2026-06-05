class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueElements;
        for (int number : nums) {
            if (uniqueElements.count(number)) {
                return true;
            }
            uniqueElements.insert(number);
        }
        return false;
    }
};
