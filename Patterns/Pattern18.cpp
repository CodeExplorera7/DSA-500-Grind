/*
1
12
123
1234
12345
 */

#include<iostream>
using namespace std;

class Solution {
public:
    void pattern4(int n) {
        for(int i = 0; i < n; i++){
            char start = 'A' + (n-i-1);
            for (char ch = start; ch <= 'A' + (n-1); ch++){
                cout << ch;
            }
            cout << endl;
        }
    }
};

int main(){
    int n;
    cout << "Enter the size of the pattern: ";
    cin >> n;
    Solution s;
    s.pattern4(n);
    return 0;
}