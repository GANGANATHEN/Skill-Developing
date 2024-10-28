// interview question
#include <stdio.h>
int main(){
    int a=10;
    int b=20;
    int c=30;
    c=b;
    b=a;
    a=c;
    printf("%d %d %d",a,b,c);
}

// output ---> 20 10 20