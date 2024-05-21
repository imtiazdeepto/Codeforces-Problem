#include <bits/stdc++.h>
using namespace std;
void clculate(long long int x){
    if(x%2==0){
        cout<<x/2<<endl;
    }else{
        cout<<(-1)*(x+1)/2<<endl;
    }
}
int main(){
  long long int n;
    cin >> n;
    clculate(n);
}