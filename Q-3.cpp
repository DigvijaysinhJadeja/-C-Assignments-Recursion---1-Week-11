#include<iostream>
using namespace std;
bool power2(int n){
    if(n==1){return true;}
    if(n%2!=0){return false;}
    return power2(n/2);
}
int main (){
    int n;
    cin>>n;
    cout<<power2(n);
}