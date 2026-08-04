class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<int>ans;
       
        int mini = INT_MAX;
        int maxi= INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]+1){
                for(int j=nums[i-1]+1;j<nums[i];j++){
                    ans.push_back(j);
                }
            }
        }
        return ans;
       
      
    }
};