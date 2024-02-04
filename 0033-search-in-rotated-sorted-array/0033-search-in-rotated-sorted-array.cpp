class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;


        while (l < h) {
            int mid = (l + h)/2;

         
            if (nums[0] <= nums[mid]) {
                
                if (nums[0] <= target && target <= nums[mid])
                    h = mid;
                else
                    l = mid + 1;
            } 
       
            else {
                
                if (nums[mid] < target && target <= nums[nums.size() - 1])
                    l = mid + 1;
                else
                    h = mid;
            }
        }

    
        return nums[l] == target ? l : -1;
    }
};
