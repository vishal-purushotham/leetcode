int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum1=0,sum2=0;
        sum1=(n*(n+1))/2;
        sum2=accumulate(nums.begin(),nums.end(),0);
        return(sum1-sum2);
    }