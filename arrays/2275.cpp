int largestCombination(vector<int>& candidates) {
        int n=candidates.size();
        int ans=0;
        for(int i=0;i<32;i++){
            int cnt=0;
            for(auto x:candidates){
                if(x & (1<<i)) cnt++;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }