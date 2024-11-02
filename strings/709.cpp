string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            if(isupper(s[i])) s[i]=tolower(s[i]);
            else{continue;}
        }
        return s;
    }
//or
string toLowerCase(string s) {
    for (auto &x:s) if (x<91 && x>64) x+=32;
    return s;
}