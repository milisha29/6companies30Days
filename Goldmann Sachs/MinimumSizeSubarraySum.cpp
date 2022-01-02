int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        
        int i=0,j=0,currsum=0;
        while(j<nums.size()){
            currsum+=nums[j];
            if(currsum<target)j++;
            else{
            while(currsum>=target && i<nums.size()){
                   ans =min(ans,j-i+1);
                currsum-=nums[i++];
            }
                j++;
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
