// find the prime number between the number1 and number2
#include<stdio.h>
int findPrime(int i);
int main(){
    int number1 = 10;
    int number2 = 20;
    for (int i = number1; i <= number2; i++){
        int primeNumber = findPrime(i);
        if(primeNumber==0){
            printf("%d ",i);
        }
    }
}

int findPrime(int i){
    int alert = 0;
    for(int j=2;j<i;j++){
        int checki = i % j;
        if(checki==0){
            alert++;
            break;
        }
    }
    return alert;
}

// output --->  11 13 17 19