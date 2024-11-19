 vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector <int> temp;
        if (k<0){
            for(int i=0;i<n ;i++){
                int sum=0;
                for(int j=1;j<=abs(k);j++){
                    sum+=code[(i-j+n)%n];
                }
                temp.push_back(sum);
            }
        }
        if(k>0 || k==0){
        for(int i=0;i<n ;i++){
            int sum=0;
            for(int j=1;j<=k;j++){
                sum+=code[(i+j)%n];
            }
            temp.push_back(sum);
        }
        }
        return temp;
    }