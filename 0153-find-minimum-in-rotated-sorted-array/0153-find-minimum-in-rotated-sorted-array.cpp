class Solution {
public:
    int findMin(vector<int>& nums) {
      int n=nums.size();
      int num=nums[0];
      for(int i=0;i<n;i++)
      {
          if(nums[i]<num)
          num=nums[i];
      } 
       return num;
    }
    
};