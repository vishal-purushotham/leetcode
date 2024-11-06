//bruteforce, not an optimal solution at all
//o(n^2) time complexity, o(n) space complexity
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector <int> temp=nums;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            string binary =bitset<32>(nums[j]).to_string();
            string binary2 =bitset<32>(nums[j+1]).to_string();
            if(count(binary.begin(),binary.end(),'1')==count(binary2.begin(),binary2.end(),'1')){
            if (nums[j] >nums[j + 1])
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    sort(temp.begin(),temp.end());
    if(nums!=temp) return false;
    return true;
    }
};