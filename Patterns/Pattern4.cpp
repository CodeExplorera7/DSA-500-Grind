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
            for (int j = 0 ; j <= i ; j++){
                cout << i+1 ;
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