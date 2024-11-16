vector<int> resultsArray(vector<int>& nums, int k) {
        if (k == 1) {
            return nums;
        }
        int n = nums.size();
        vector<int> result;
        deque<int> window;
        for (int i = 0; i < n; i++) {
            while (!window.empty() && i - window.front() >= k) {
                window.pop_front();
            }
            if (window.empty() || nums[i] - nums[i-1] == 1) {
                window.push_back(i);
            } else {
                window.clear();
                window.push_back(i);
            }
            if (i >= k-1) {
                result.push_back(window.size() == k ? nums[i] : -1);
            }
        }
        return result;
    }