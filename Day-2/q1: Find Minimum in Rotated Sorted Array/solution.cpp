int findMin(vector<int>& nums) {
        int ind=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                return nums[i+1];}
        }
        return nums[0];
    }