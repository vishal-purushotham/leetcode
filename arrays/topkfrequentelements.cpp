vector<int> topKFrequent(vector<int>& nums,int k) {
        map <int,int> mp;
        vector <int> ans;
        for(int x:nums){
            mp[x]++;
        }
        priority_queue <pair<int,int>> pq;
        for(auto& y:mp){
            pq.push({y.second,y.first});
        }
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }