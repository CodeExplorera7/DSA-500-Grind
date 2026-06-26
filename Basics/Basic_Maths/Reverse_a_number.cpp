#include<iostream>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int i = 0;
        int sum = 0;
        while(n!=0){
        i = n%10;
        n = n/10;
        sum = (sum * 10) + i;
        }
    return sum;
    }
};
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Solution s;
    cout << "The reversed number is: " << s.reverseNumber(n) << endl;
    return 0;
}