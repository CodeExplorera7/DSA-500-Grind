#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int org = n;
        int i = 0;
        int sum = 0;
        while(n!=0){
        i = n%10;
        n = n/10;
        sum = sum + pow(i,3);
        }
    return sum == org;
    }
};

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Solution s;
    cout << "Is the number an Armstrong number? " << s.isArmstrong(n) << endl;
    return 0;
}