#include <stdio.h>
int findPrime(int singleNum);
int main(){
    int number = 3837;
    int sum = 0;
    while (number!=0){
        int singleNum = number%10;
        int primeNum = findPrime(singleNum);
        if(primeNum==0){
            sum += singleNum;
        }
        number=number/10;
    }
    printf("%d",sum);
}

int findPrime(int singleNum){
    int alert = 0;
    for (int i = 2; i < singleNum; i++){
        int checkNum = singleNum % i;
        if(checkNum==0){
            alert++;
            break;
        }
    }
    return alert;
}