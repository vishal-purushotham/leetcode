int countDigits(int num) {
        int cnt=0;
        int n=num;
        while (num>0){
            int rem=num%10;
            if(n%rem==0) cnt++;
            num/=10;
        }
        return cnt;
    }