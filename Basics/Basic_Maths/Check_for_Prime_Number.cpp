#include<iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
    return n%2 == 0;
    }
};

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Solution s;
    cout << "Is the number prime? " << s.isPrime(n) << endl;
    return 0;
}