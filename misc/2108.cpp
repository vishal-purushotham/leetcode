string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string s1=words[i];
            reverse(s1.begin(),s1.end());
            if (words[i]==s1) return words[i];
        }
        return "";
    }