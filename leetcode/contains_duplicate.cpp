class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        for(int i = 1; i< nums.size(); i++){

            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};

// theres one more solution to this using hashing/ set

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set <int> seen;

        for(int num : nums){
            if(seen.count(num)){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};