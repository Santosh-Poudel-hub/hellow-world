#include<iostream>
using namespace std;
int main(){
    cout<<"Multiplication table:\n";
    for(int i=1;i<=10;i++){
        cout<<"Table of: "<<i<<"\n";
        for(int j=1;j<=10;j++){
            cout<<i<<"*"<<j<<"="<<i*j;
            cout<<"\n";
        }
        
    }
    return 0;
}