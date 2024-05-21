//https://codeforces.com/problemset/problem/155/A
//imtiaz Deepto
#include <bits/stdc++.h>
using namespace std;
void solution(int n){
int arr[n];
int a=0,b=0;
for(int i=0;i<n;i++ ){
    cin>>arr[i];
}
int mx=arr[0],mn=arr[0];
for(int i=1;i<n;i++){

    if(mx<arr[i]){
            mx=arr[i];
            a++;
    }
    if(mn>arr[i]){
        mn=arr[i];
        b++;
    }
}
cout<<a+b<<endl;
}
int main(){
   int n;
   cin>>n;
   solution(n);
     return 0;
}