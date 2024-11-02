//valid palindrome
bool isPalindrome(string s) {
        string res="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])) res+=tolower(s[i]);
        }
        string ans=res;
        reverse(res.begin(),res.end());
        return (ans==res);
    }