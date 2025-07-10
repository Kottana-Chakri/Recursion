#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     int Pow(int num,int n){
        if(n==0){
            return 1;
        }
        else{
            return num*Pow(num,n-1);
        }
     }

};
int main(){
    int n,num;
    cout << "enter n value :";
    cin >> n;
     cout << "enter num value :";
     cin>> num;
    Solution sol;
    int ans = sol.Pow(num,n);
    cout << ans << endl;
    return 0;
}