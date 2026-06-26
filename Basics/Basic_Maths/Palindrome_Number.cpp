#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        int org = n;
        int i = 0;
        int sum = 0;
        while(n!=0){
        i = n%10;
        n = n/10;
        sum = (sum * 10) + i;
        }
    return (sum == org)? true : false;

    }
};
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Solution s;
    cout << "Is the number a palindrome? " << s.isPalindrome(n) << endl;
    return 0;
}