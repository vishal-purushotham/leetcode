class Solution {
public:
    string compressedString(string word) {

        string res="";
        int n=word.length();
 
        int j=0;
        while(j<n){
            char p=word[j];
            int cnt=0;
            while(j<n && p==word[j] && cnt<9){
                cnt++; j++;
            }
    
                
           
           res+=to_string(cnt)+p;
         }
        return res;
    }
};