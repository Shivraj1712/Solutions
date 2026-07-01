class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n+1,1) , s(n+1,1);
        for(auto i = 1 ; i <= n ; ++i){
            p[i] = p[i-1] * nums[i-1];
        }
        for(auto i = n - 2; i >= 0 ; --i){
            s[i] = s[i+1] * nums[i+1];
        }
        vector<int> ans(n,1);
        for(auto i = 0 ; i < n ; ++i) {
            ans[i] = p[i] * s[i];
        }
        return ans;
    }
};