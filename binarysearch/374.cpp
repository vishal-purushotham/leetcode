int guessNumber(int n) {
        int st=0,et=n;
        while(st<=et){
            int mid=st+(et-st)/2;
            if(guess(mid)==0) return mid;
            else if(guess(mid)==1) st=mid+1;
            else{
                et=mid-1;
            }
        }
        return st;
    }