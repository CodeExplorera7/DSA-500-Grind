#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int forLoop(int low, int high) {
        int sum = 0;
        for(int i = low ; i <= high; i++){
            sum = sum + i;
        }
    return sum;
    }
};

int main(){
    int low, high;
    cin.ignore();
    cout << "Enter the low and high values: ";
    cin >> low >> high;
    Solution sol;
    cout << "The sum of numbers from " << low << " to " << high << " is: " << sol.forLoop(low, high);
    return 0;
}