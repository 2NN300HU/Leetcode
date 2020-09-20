// First ver.
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> sol;
        for (int j = 0; j < (nums.size()-1); j++) {
            for (int i=j+1;i<nums.size();i++){
                if((target-nums[j])==nums[i]){
                    sol.push_back(j);
                    sol.push_back(i);
                    return sol;
                }
            }
        }
        return sol;
    }
};

//Last ver.
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int,int> set;
        for (unordered_map<int,int>::size_type i = 0 ; i<nums.size(); i++) {
            if (set.find(nums[i])!=set.end()){
                return {set[nums[i]], static_cast<int>(i)};
            }
            set[target - nums[i]] = i;
        }
        return {};
    }
};