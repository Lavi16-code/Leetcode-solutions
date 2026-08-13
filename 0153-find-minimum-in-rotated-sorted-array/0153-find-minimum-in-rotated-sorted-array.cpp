class Solution {
public:
    int findMin(vector<int>& nums) {
    int minval=INT_MAX
    ;
    for(int i=0;i<nums.size();i++){
      if ( nums[i]<minval){
      minval=nums[i];
    }
    }
    return minval;
    }
};