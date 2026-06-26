#include<iostream>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        while(n!= 0){
            n = n / 10;
            count++;
        }
    return count;
    }
};

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Solution s;
    cout << "The number of digits in " << n << " is: " << s.countDigit(n) << endl;
    return 0;
}