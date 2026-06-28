#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool palindromeCheck(string& s) {
        int start = 0;
        int end = s.length() - 1;
        
        while(start < end) {
            if(s[start] != s[end]) {
                return false;   // mismatch found
            }
            start++;
            end--;
        }
        return true;            // no mismatches
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    Solution sol;
    if(sol.palindromeCheck(s))
        cout << s << " is a palindrome" << endl;
    else
        cout << s << " is not a palindrome" << endl;
    return 0;
}
