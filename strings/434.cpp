//1.
class Solution {
public:
    int countSegments(string s) {
        if(s=="") return 0;
        int count=0;
        for(int i=0;i<s.length();i++)
            if((s[i] != ' ') && ((s[i+1] == ' ')||(s[i+1]=='\0')))  count++;
        return count;
    }
};
//2.
class Solution {
public:
    int countSegments(string s) {
        int count=0;
        stringstream sa(s);
        string word;
        while(sa>>word) count++;
        return count;
    }
};