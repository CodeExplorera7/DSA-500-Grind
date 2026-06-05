#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void max_consecutively(string s){
        int count = 1;
        int max_count = 1;
        for(int i = 1; i < s.length(); i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                max_count = max(max_count, count);
                count = 1;
            }
        }
        max_count = max(max_count, count);
        cout << max_count;
    }
};  

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    Solution sol;
    sol.max_consecutively(s);
    return 0;
}