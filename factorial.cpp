#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int fact(int N){
        int a=1;
        if(N==1){
            return N;
        }
        else{
            return N*fact(N-1);
        }
    }
};
int main(){
    int n;
    cout<<"enter a number to get its factorial : ";
    cin >> n;
    Solution sol;
    int res=sol.fact(n);
    cout<<res<<endl;
    
}