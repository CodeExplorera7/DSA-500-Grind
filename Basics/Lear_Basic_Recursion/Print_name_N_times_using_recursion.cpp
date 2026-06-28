#include<iostream>
using namespace std;

class Solution {
public:
    void printNameNTimes(int n, string name) {
        if(n <= 0) return; // base case
        cout << name << endl; // print the name
        printNameNTimes(n - 1, name); // recursive call with decremented n
    }
};

int main() {
    int n;
    string name;
    cout << "Enter the number of times to print the name: ";
    cin >> n;
    cout << "Enter the name: ";
    cin >> name;
    
    Solution s;
    s.printNameNTimes(n, name);
    
    return 0;
}
