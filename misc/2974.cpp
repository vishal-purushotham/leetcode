vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int l=0,r=1;
        int n=nums.size();
        while(l<n && r<n){
            ans.push_back(nums[r]); r++; r++;
            ans.push_back(nums[l]); l++; l++;
        }
        return ans;
    }