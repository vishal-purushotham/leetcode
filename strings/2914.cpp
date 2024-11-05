class Solution {
public:
    int minChanges(string s) {
        int n=s.length();
        if(n==0 || n==1) return 0;
        int i=0,j=1;
        int cnt=0;
        while(j<n && i<j){
            if(s[i]!=s[j]){
              cnt++; i++; i++; j++; j++;
                
             }
           else{
               i++; i++; j++;j++;
        }
           
    }
        return cnt;
        }
};