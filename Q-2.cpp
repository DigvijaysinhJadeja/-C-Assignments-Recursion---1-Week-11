#include<iostream>
using namespace std;
int noofways(int n){
    if(n<0)return 0;
    if(n==0){return 1;}
    int z = noofways(n-1) + noofways(n-2) + noofways(n-3);
    return z;
}
int main(){
    int n;
    cin>>n;
    cout<<noofways(n);    
}