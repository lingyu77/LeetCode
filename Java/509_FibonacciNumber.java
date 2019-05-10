// 8 ms
class Solution {
    public int fib(int N) {
        return (N <= 1)? N : fib(N - 1) + fib(N - 2);
    }
}

/* Reference : 0 ms
class Solution {
    public int fib(int N) {
        
        if(N==0)
            return 0;
        if(N==1)
            return 1;
       int f=0;
       int s=1;
        int t=0;
        for(int i=2;i<=N;i++)
        {
            t=s+f;
            f=s;
            s=t;
        }
        
        return t;
        
    }
}
*/