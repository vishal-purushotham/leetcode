//using hash map
bool checkIfPangram(string sentence) {
        unordered_map <char,int> m;
        int n=sentence.length();
        for(int i=0;i<n;i++){
            m[sentence[i]]++;
        }
        if(m.size()==26) return true;
        return false;
    }
// using hashset
bool checkIfPangram(string sentence) {
    unordered_set<char> uniqueChars;
    for (char c : sentence) {
        uniqueChars.insert(c);
    }
    return uniqueChars.size() == 26;
}
