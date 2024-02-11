class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int sz=nums.size();
        int div=sz/2;
        int i;
        vector<int>nums1;
        vector<int>nums2;
        for(i=0;i<div;i++)
        {
            nums1.push_back(nums[i]);
        }
        for(;i<sz;i++)
        {
            nums2.push_back(nums[i]);
        }
       vector<int>res;
       auto it1 = nums1.begin();
    auto it2 = nums2.begin();

    while (it1 != nums1.end() && it2 != nums2.end()) {
        res.push_back(*it1);
        res.push_back(*it2);
        ++it1;
        ++it2;
    }
    //    for (size_t i = 0; i < sz; ++i) 
    //    {
    //     res.push_back(nums1[i]);
    //     res.push_back(nums2[i]);
    //    }
    //     for (size_t i = sz; i < nums1.size(); ++i) {
    //     res.push_back(nums1[i]);
    // }

    // for (size_t i = sz; i < nums2.size(); ++i) {
    //     res.push_back(nums2[i]);
    // }
    return res;
    }
};