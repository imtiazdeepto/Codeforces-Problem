#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x--){
        int a,b,c,st=1;
        cin >>a>>b>>c;
        if(c==1){
            cout << "YES" << endl;
            continue;    
        }
        while (a%2==0)
        {
            st*=2;
            a/=2;
        }
        while(b%2==0){
            st*=2;
            b/=2;
        }
        if(st>=c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    
}
}