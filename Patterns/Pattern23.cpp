/*
   1
  2 2
 3 3 3
4 4 4 4
 3 3 3
  2 2
   1
 */

#include<iostream>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for(int i = 0; i < n; i++){
            for (int j = 0 ; j <= n-i-1 ; j++){
                cout << " " ;
                }
            for (int k = 0 ; k < 2*i+1 ; k++){
                cout << i+1 ;
                }
        cout << endl;
        }

        for(int i = n-2; i >= 0; i--){
            for (int j = 0 ; j <= n-i-1 ; j++){
                cout << " " ;
                }
            for (int k = 0 ; k < 2*i+1 ; k++){
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
    s.pattern1(n);
    return 0;
}