#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int whileLoop(int d) {
        int n = 0;
        int sum = 0;
        while( n < 50){
            sum  = sum + ((10*n)+d);
            n++;
        }
    return sum;
    }
};

int main(){
    int d;
    cout << "Enter the digit: ";
    cin >> d;
    Solution sol;
    cout << "The sum of numbers from 0 to 49 with digit " << d << " is: " << sol.whileLoop(d);
    return 0;
}