vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
    int xorSum = 0;
    for(int num : nums) {
        xorSum ^= num;

    }
    while(nums.size() > 0) {
        int mask = (1 << maximumBit) - 1;
        int k = xorSum ^ mask;
        ans.push_back(k);
        xorSum ^= nums.back();
        nums.pop_back();

    }
    return ans;
}