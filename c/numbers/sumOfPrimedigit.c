// sum the given prime numbers
#include <stdio.h>
int findPrimenum(int singleNum);
int main(){
    int number = 781;
    int sum = 0;
    while(number!=0){
        int singleNum = number%10;
        int primeNum = findPrimenum(singleNum);
        if(primeNum==0){
            sum+=singleNum;
        }
        number = number/10;
    }
    printf("%d",sum);
}

int findPrimenum(int singleNum){
    int prime = 0;
    for(int i=2;i<singleNum;i++){
        int checkPrime = singleNum%i;
        if (checkPrime==0){
            prime++;
            break;
        }
    }
    return prime;
}
// output ---> 8