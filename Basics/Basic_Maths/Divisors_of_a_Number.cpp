#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> divisors;
        for(int i = 1 ; i <= n; i++){
            if(n%i == 0){
                divisors.push_back(i);
            }
        }
    return divisors;
    }
};

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Solution s;
    cout << "The divisors of " << n << " are: ";
    vector<int> result = s.divisors(n);
    for(int d : result){
        cout << d << " ";
    }
    cout << endl;
    return 0;
}