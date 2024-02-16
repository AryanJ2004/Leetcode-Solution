class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n;
       // vector<int>::iterator it;
        int max1=*max_element(nums.begin(),nums.end());
        auto it = find(nums.begin(), nums.end(),max1);
        if (it != nums.end()) 
        {
        nums.erase(it);
        }
        int max2=*max_element(nums.begin(),nums.end());
        return (max1-1)*(max2-1);
    }
};