class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> dup;
        for(int x: nums){
            dup[x]++;
        }

        for(auto [key, count] : dup){
            if(count > 1){
                return true;
            }
        }

        return false;

    }
};