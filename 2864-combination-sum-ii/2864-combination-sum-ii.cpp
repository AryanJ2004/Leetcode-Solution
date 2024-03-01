class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        int n = num.size();
        vector<vector<int> > ret;
        if (n <= 0 || target <= 0) return ret;
        vector<int> res;
        combinationSum2(num, n, 0, target, res, ret);
    }
    
    void combinationSum2(const vector<int> &num, int n, int i, int target, vector<int> &res, vector<vector<int> > &ret)
    {
        if (target == 0) {
            ret.push_back(res);
            return;
        }
        if (i >= n || num[i] > target) return;
        res.push_back(num[i]);
        combinationSum2(num, n, i+1, target - num[i], res, ret);
        res.pop_back();
        while (++i < n && num[i] <= target) {
            if (num[i] != num[i-1]) {
                res.push_back(num[i]);
                combinationSum2(num, n, i+1, target - num[i], res, ret);
                res.pop_back();
            }
        }
    }
};