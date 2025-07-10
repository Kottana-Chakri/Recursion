#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
     int Nsteps(int n){
        if(n==1 or n==2){
            return n;

        }
        else{
            return Nsteps(n-1)+Nsteps(n-2);
        }
     }
};
int main(){
    int n;
    cout << "enter a value : ";
    cin >> n;
    Solution sol;
    int res = sol.Nsteps(n);
    cout << res << endl;
    return 0;
}