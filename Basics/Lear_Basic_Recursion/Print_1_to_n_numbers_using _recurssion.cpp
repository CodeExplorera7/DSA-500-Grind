#include<iostream>
using namespace std;

class Solution {
  public:
    void printNumbers(int n) {
         if(n == 0)return;
         printNumbers(n-1);
         cout << n << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;    
    Solution s;
    s.printNumbers(n);
    
    return 0;
}
