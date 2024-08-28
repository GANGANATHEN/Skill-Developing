// reverse a given number
#include <stdio.h>
int main(){
    int n = 123456;
    int reverse = 0;
    while (n!=0){
        int x = n%10;
        reverse = (reverse*10)+x;
        n = n/10;
    }
    printf("%d",reverse);
}

// output --> 654321