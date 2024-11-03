bool rotateString(string s, string goal) {
        int n=s.length();
        int cnt=0;
        while(cnt<n){
            char c=s[0];
            s+=c;
            s.erase(0,1);
            cnt++;
            if(s==goal) return true;
        }
        return false;
    }