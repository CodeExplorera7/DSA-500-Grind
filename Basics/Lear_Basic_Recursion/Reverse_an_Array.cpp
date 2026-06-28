#include<iostream>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int n){
        if(n < 0) return;
        cout << arr[n] << ",";
        reverse(arr, n-1);
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution sol;
    sol.reverse(arr, n-1);
    cout << endl;
    return 0;
}
