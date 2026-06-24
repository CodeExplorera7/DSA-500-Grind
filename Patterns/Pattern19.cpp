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
            for (int j = 0; j < n-i-1 ; j++){
                cout << "*" ;
            }
            for(int k = 0; k < 2*i+1; k++){
                cout << " " ;
                }
            for(int z=0; z < n-i-1 ; z++){
                cout << "*" ;
            }
        cout << endl;
        }

        for(int i = n; i > 0; i--){
            for (int j = 0 ; j < n-i; j++){
                cout << "*" ;
            }
            for(int k = 0; k < 2*i-1; k++){
                cout << " " ;
                }
            for(int z=0; z < n-i ; z++){
                cout << "*" ;
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