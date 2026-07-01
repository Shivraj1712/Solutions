class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0 , count = 0;
        unordered_map<int,int> freq;
        freq[0] = 1;
        for(auto i = 0 ; i < nums.size() ; ++i){
            sum += nums[i];
            if(freq.find(sum - k) != freq.end()){
                count += freq[sum - k];
            }
            freq[sum]++;
        }
        return count;
    }
};