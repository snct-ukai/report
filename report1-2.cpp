#include<iostream>
using namespace std;

int gcd(int m,int n){
    while(m*n){
       ((m>n)?m:n)=((m>n)?m:n)%((m<n)?m:n);
    }
    return ((m>n)?m:n);
}

int lcm(int m,int n){
    return m*n/gcd(m,n);
}

int main(void){
    int l,m,n;
    cin>>l>>m>>n;
    cout<<gcd(gcd(l,m),n)<<endl;
    cout<<lcm(n,lcm(l,m))<<endl;
}
