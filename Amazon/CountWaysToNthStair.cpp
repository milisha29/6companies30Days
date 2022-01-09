long long countWays(int m)
    {
        // your code here
        // By observing the pattern 
  
  
 /*
 For 1:1
 For 2 or 3 :2
 For 4 or 5 :3
 For 6 or 7 :4
and so on... 
 */
        if(m%2!=0){
            m--;
        }
        long long ans = m/2  +1;
        return ans;
    }
