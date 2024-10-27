int differenceOfSum(vector<int>& nums) {
        int esum,dsum=0;
        int rem;
        for(int i=0;i<nums.size();i++){
            esum+=nums[i];
        }
        for(int j=0;j<nums.size();j++){
            int num=nums[j];
            while(num>0){
                rem=num%10;
                dsum+=rem;
                num/=10;
            }
        }
        return abs(esum-dsum);
    }