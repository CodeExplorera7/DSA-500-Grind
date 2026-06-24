/*
12345
1234
123
12
1
 */

#include<iostream>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for(int i = n; i > 0; i--){
            for (int j = 0; j < i ; j++){
                cout << j+1 ;
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
    s.pattern6(n);
    return 0;
}