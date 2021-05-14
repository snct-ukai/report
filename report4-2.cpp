#include<iostream>
using namespace std;

char* strncopy(char *dest, char *src, unsigned count){
    int i;
    for(i = 0; i < count; i++){
        dest[i] = src[i];
    }
    dest[++i] = '\0';
    return dest;
}

int main(){
    char str1[10]="ABCDEFGIJ";
    cout << str1 << endl;

    char str2[10];
    strncopy(str2,str1,5);
    cout << str2 << endl;

    char str3[10];
    strncopy(str3,str1,8);
    cout << str3 << endl;

    char str4[5];
    strncopy(str4,str1,1);
    cout << str4 << endl;

    return 0;
}