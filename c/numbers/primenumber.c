// given number is prime number or not

#include <stdio.h>
int main(){
    int n = 29;
    int chekprime = 0;

    for(int i=2;i<n;i++){
        int x = n%i;
        if(x==0){
            chekprime++;
            break;
        }
    }
    if(chekprime==0){
        printf("The given number is a prime number");
    }else{
        printf("it's not a prime number");
    }
}

// output --> The given number is a prime number