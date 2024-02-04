class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c[m + n];
        int i = 0, j = 0, k = 0;
        while (i < m && j < n) {
            if (nums1[i] < nums2[j])
                c[k++] = nums1[i++];
            else
                c[k++] = nums2[j++];
        }
        for (; i < m; i++) {
            c[k++] = nums1[i];
        }
        for (; j < n; j++) {
            c[k++] = nums2[j];
        }
        for (i = 0; i < m + n; i++) {
            nums1[i] = c[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};