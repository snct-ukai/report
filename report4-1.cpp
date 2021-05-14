#include<iostream>
using namespace std;

unsigned strcharcount(char *str,char c){
    unsigned count = 0;
    int i = 0;
    while(str[i]!='\0'){
        if(str[i] == c){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    char str[20]="ABCDBEFGGIJB";
    cout << strcharcount(str,'A') << endl;
    cout << strcharcount(str,'B') << endl;
    cout << strcharcount(str+4,'B') << endl;
    cout << strcharcount(str,'G') << endl;

    return 0;
}