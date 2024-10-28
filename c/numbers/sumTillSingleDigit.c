// sum the given number untill the number is single digit
#include<stdio.h>
int digitCount(int number);
int main(){
    int number = 880;
    int sum =0;
    int numCount = digitCount(number);
    while(numCount!=1){
        while(number!=0){
            int a = number%10;
            sum = sum+a;
            number = number/10;
        }
        // printf("%d",sum);
        numCount = digitCount(sum);
        number = sum;
        sum = 0;
    }
    printf("%d",number);
    return 0;
}

int digitCount(int number){
    int count = 0;
    while(number!=0){
        count++;
        number=number/10;
    }
    return count;
}

// output ---> 7