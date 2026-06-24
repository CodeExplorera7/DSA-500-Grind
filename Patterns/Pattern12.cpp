#include<iostream>
using namespace std;

class Solution {
public:
    void pattern12(int n) {
        for(int i = 1; i <= n; i++) {
            // Left side numbers
            for(int j = 1; j <= i; j++) {
                cout << j;
            }
            // Spaces
            for(int j = 1; j <= 2*(n-i); j++) {
                cout << " ";
            }
            // Right side numbers
            for(int j = i; j >= 1; j--) {
                cout << j;
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
    s.pattern12(n);
    return 0;
}
