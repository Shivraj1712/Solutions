class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0) return {1};
        else if(rowIndex == 1) return {1,1};
        vector<vector<int>> ans;
        ans.push_back({1});
        ans.push_back({1,1});
        int i = 3;
        while(i <= rowIndex + 1){
            vector<int> arr;
            arr.push_back(1);
            for(int j = 0 ; j < ans[i-2].size()-1 ; ++j){
                int temp = ans[i-2][j] + ans[i-2][j+1];
                arr.push_back(temp);
            }
            arr.push_back(1);
            ans.push_back(arr);
            i++;
        }
        return ans.back();
    }
};