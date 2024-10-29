int findPlatform(vector<int>& arr, vector<int>& dep) {
        int n=arr.size();
        sort(arr.begin(),arr.end()); sort(dep.begin(),dep.end());
        int i=1,j=0;
        int ans=1,cnt=1;
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                cnt++; i++;
            }
            else{
                cnt--; j++;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }