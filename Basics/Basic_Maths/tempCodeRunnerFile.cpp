#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if(n <= 1) return false; // 0 and 1 are not prime
        for(int i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                return false; // found a divisor
            }
        }
        return true; // no divisors found
    }
};

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Solution s;
    cout << "Is the number prime? " << (s.isPrime(n) ? "Yes" : "No") << endl;
    return 0;
}