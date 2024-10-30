#include<stdio.h>
// int findCount(int number);
int main(){
    int number = 545;
    int result = 0;
    while(number!=0){
        int singleNum = number %10;
        result = result + singleNum;
        number/=10;
    }
    printf("%d",result);
}
// output ---> 14