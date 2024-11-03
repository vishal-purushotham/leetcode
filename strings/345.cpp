string reverseVowels(string s) {
        string t="aeiouAEIOU";
        int n=s.length();
        int l=0,r=n-1;
        while(l<=r){
            size_t found1=t.find(s[l]);
            size_t found2=t.find(s[r]);
            if(found1!=string::npos && found2!=string::npos){
                swap(s[l],s[r]);l++;r--;
            }
            else if(found1==string::npos){
                l++;
            }
            else{
                r--;
            }
        }
        return s;
    }