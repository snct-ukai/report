#include<iostream>
using namespace std;

int gcd(int m,int n){
    if(n>m){
        //2つの数n,mの大小を比較、mを大きい数にする
        int tmp=m;
        m=n;
        n=tmp;
    }
    //nが0じゃない間実行する
    while(n){
        //int tにm/nのあまりを入れる
        int t=m%n;
        m=n;
        //nにtを代入
        n=t; 
    }
    //while文が終わったときn=0なのでそれの一つ前の値が格納されているmを返す
    return m;
}

int lcm(int m,int n){
    //最小公倍数の求め方、n*m/2数の最大公倍数
    return m*n/gcd(m,n);
}

int main(void){
    int l,m,n;
    cin>>l>>m>>n;
    //2数の最大公約数を先に求める
    int k=gcd(l,m);
    //先に出した最大公約数と残り一つの数の最大公約数を出す
    cout<<gcd(k,n)<<endl;
    //最大公約数を出したときと同じ要領で最小公倍数を求める
    int o=lcm(l,m);
    cout<<lcm(n,o)<<endl;
}
