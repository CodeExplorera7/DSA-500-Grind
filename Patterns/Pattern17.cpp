/*
  *
 ***
*****
 */

#include<iostream>
using namespace std;

class Solution {
public:
    void pattern5(int n) {
        for(int i = 0; i < n; i++){
            for (int j = 0 ; j < n-i; j++){
                cout << " " ;
            }
            for(int k = 0; k < i; k++){
                cout << char(65+k) ;
                }
                for(int k = i; k >= 0; k--){
                cout << char(65+k) ;
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
    s.pattern5(n);
    return 0;
}