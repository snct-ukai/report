#include<iostream>
using namespace std;

int gcd(int m,int n){
    while(m*n){
       int t=((m>n)?m:n)%((m<n)?m:n);
       ((m>n)?m:n)=t; 
    }
    return ((m>n)?m:n);
}

int lcm(int m,int n){
    return m*n/gcd(m,n);
}

int main(void){
    int l,m,n;
    cin>>l>>m>>n;
    int k=gcd(l,m);
    cout<<gcd(k,n)<<endl;
    int o=lcm(l,m);
    cout<<lcm(n,o)<<endl;
}