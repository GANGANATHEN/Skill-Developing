// print number of digits in the given sum
#include<stdio.h>
int main(){
    int a = 12345;
    int count = 0;
    while(a!=0){
        count++;
        a=a/10;
    }
    printf("%d",count);
}

// output ---> 5