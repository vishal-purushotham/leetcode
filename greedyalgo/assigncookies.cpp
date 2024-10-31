int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cookie=0, ans=0;
        while(cookie<s.size() && ans<g.size()){
          if(s[cookie]>=g[ans]){
               ans++;
          }
            cookie++;
        }
         return ans;
    }