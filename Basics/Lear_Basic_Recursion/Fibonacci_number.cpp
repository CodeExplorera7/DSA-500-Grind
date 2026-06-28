#include<iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    }
};

int main(){
    
    int n;
    cout << "Enter the position of Fibonacci number: ";
    cin >> n;
    Solution s;
    cout << "Fibonacci number at position " << n << " is: " << s.fib(n) << endl;
    return 0;
}