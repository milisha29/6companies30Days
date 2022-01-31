int divide(int dividend, int divisor) {
         if(dividend==INT_MIN && divisor==-1) 
         {
             return INT_MAX;
         }
        int sign=(dividend<0)^(divisor<0)?-1:1;
        
        long x=abs(dividend),y=abs(divisor),ans=0;
        while(x>=y)
        {
            long tp=y,cnt=1;
            while((tp<<1)<=x)
            {
                tp<<=1;
                cnt<<=1;
            }
            x-=tp;
            ans+=cnt;
        }
        if(sign==-1)
        {
            return -ans;
        }
        return ans;
    }
