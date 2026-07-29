#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

       
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        vector<pair<int, int>> arr;

        for (auto& p : freq) {
            arr.push_back({p.second, p.first});
        }

    
        sort(arr.begin(), arr.end(), greater<pair<int, int>>());

      
        vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].second);
        }

        return result;
    }
};