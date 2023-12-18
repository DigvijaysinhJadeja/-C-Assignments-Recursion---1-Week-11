#include<iostream>
using namespace std;
int add(int a, int b){
    if(a>b){return 0;}
    int c;
    if(a%2==0){
        return add(a+1,b);
    }
    int z = a + add(a+2,b);
    return z;
}

int main (){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
}