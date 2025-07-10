#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int fib(int n){
        if(n==0 || n==1){
            return n;
        }
        else{
            return fib(n-1)+fib(n-2);
        }
    }
};
int main(){
    cout << "enter a n value :";
    int n;
    cin >> n;
    Solution sol;
    int res = sol.fib(n);
    cout << res << endl;
    return 0;
}