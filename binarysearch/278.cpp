int firstBadVersion(int n) {
        int st=0,et=n;
        while(st<=et){
            int mid=st+(et-st)/2;
            if(isBadVersion(mid)==false) st=mid+1;
            else{
                et=mid-1;
            }
        }
        return st;
    }