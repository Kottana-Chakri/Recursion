#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int SumNnum(int n){
        if(n==0){
            return n;
        }
        else{
            return n+SumNnum(n-1);
        }
    }
};
int main(){
    int n;
    cout << "enter a number : ";
    cin>>n;
    Solution sol;
    int res=sol.SumNnum(n);
    cout << res;
    return 0;
}