class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int second=target-first;
            if(m.find(second)!= m.end()){
                v.push_back(i);
                v.push_back(m[second]);
                break;
            }
            m[first]=i;
        }
        
        return v;
        
    }
};