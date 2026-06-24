#include<iostream>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for(int i = 0; i < 2*n-1; i++){
            for (int j = 0 ; j < 2*n-1; j++){
                 int top = i;
                int bottom = (2*n-2) - i;
                int left = j;
                int right = (2*n-2) - j;
            
                // The value at position (i,j) is n - min(top, bottom, left, right)
                int min_dist = min(min(top, bottom), min(left, right));
                cout << n - min_dist << " ";
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