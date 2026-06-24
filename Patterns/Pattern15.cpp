
#include<iostream>
using namespace std;

class Solution {
public:
    void pattern15(int n) {
        for(int i = n; i > 0; i--){
            for (int j = 0; j < i ; j++){
                cout << char(65+j) ;
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
    s.pattern15(n);
    return 0;
}