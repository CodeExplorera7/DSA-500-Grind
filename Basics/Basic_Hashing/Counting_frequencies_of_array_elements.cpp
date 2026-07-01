#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        map<int,int> mp;
        
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> result;
        for(auto& pair : mp) {
            result.push_back({pair.first, pair.second});
        }
        return result;
    }
};

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    Solution s;
    vector<vector<int>> frequencies = s.countFrequencies(nums);
    
    cout << "Element and its frequency:\n";
    for(const auto& pair : frequencies) {
        cout << "Element: " << pair[0] << ", Frequency: " << pair[1] << endl;
    }
    
    return 0;

}
