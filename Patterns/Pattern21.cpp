#include<iostream>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for(int i = 0; i < n; i++){
            for (int j = 0 ; j < n; j++){
                if(i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << "*" ;
                else
                cout << " ";
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