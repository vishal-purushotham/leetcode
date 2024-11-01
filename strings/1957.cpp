string makeFancyString(string s) {
        if (s=="") return "";
        string res;
        int cnt=1;
        int n=s.length();
        res.push_back(s[0]);
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                cnt++;
            }
            else{
                cnt=1;
            }
            if(cnt<3){
                res.push_back(s[i]);
            }
        }
        return res;
    }