class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int length = 0 , curr = 0 ;
        for(auto i = 0 ; i < nums.size(); ++i) if(nums[i] == 0) nums[i] = -1;
        int sum = 0 ;
        unordered_map<int,int> freq;
        freq[0] = -1;
        for(int i = 0 ; i < nums.size(); ++i){
            sum += nums[i];
            if(freq.find(sum) != freq.end()){
                length = max(length,i - freq[sum]);
            }else{
                freq[sum] = i ;
            }
        }
        return length ;
    }
};