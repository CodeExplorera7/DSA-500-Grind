/*
*
**
***
****
*****
 */

#include<iostream>
using namespace std;

class Solution {
public:
    void pattern13(int n) {
        int k=1;
        for(int i = 1; i <= n; i++){
            for (int j = 1; j <= i ; j++){
                cout << k << " " ;
                k++;
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
    s.pattern13(n);
    return 0;
}