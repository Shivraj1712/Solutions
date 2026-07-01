class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        int count = 0 , sum = 0;
        unordered_map<int,int> freq;
        freq[0] = 1;
        for(auto i =0 ; i < arr.size() ; ++i){
            sum += arr[i];
            int target = ((sum % k) + k) % k ;
            if(freq.find(target) != freq.end()){
                count += freq[target];
            }
            freq[target]++;
        }
        return count ;
    }
};