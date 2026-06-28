#include<iostream>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        if( n == 0 )return 1;
        return n*factorial(n-1);
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Solution sol;
    cout << "Factorial of " << n << " is " << sol.factorial(n) << endl;
    return 0;
}
