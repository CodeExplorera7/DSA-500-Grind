#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(vector<int>& arr){
        int n = arr.size();
        for(int i = 0 ; i < n/2; i++ ){
            swap(arr[i] , arr[n- i -1]);
        }
    }
};

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    Solution sol;
    sol.reverse(arr);
    cout << "The reversed array is: ";
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}