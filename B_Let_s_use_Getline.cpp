#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    getline(cin, name);
    for(int i = 0; i <name.length()-1; i++){
        if(name[i] == 92){
            break;
    }else{
        printf("%c", name[i]);
    }
}
}