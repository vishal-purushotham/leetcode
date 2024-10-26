int mostWordsFound(vector<string>& sentences) {
        vector<int> res;
        for(int i=0;i<sentences.size();i++){
            int cnt=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' ') cnt++; 
            }
            res.push_back(cnt+1);
        }
        return *max_element(res.begin(),res.end());
    }