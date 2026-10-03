class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) {
            int num = abs(arr[i]);

            if (arr[num - 1] < 0) {
                ans.push_back(num);
            } else {
                arr[num - 1] = -arr[num - 1];
            }
        }

        return ans;
    }
};