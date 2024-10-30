// half reverse the given number
#include <stdio.h>
int findCount(int number);
int main(){
    int number = 123456;
    int count = findCount(number);
    int divideCount = count/2;
    int halfCount = count - divideCount;
    int copyHalf = halfCount;
    count = count - halfCount;

    int reverse = 0;
    while(halfCount!=0){
        int singleNum = number%10;
        reverse = (reverse * 10) + singleNum;
        number/=10;
        halfCount--;
    }
    while (copyHalf!=0){
        number*=10;
        copyHalf--;
    }
    int result = number +reverse;
    
    printf("%d",result);
}

int findCount(int number){
    int count =0;
    while(number!=0){
        int singleNum = number%10;
        count++;
        number/=10;
    }
    return count;
}
// output ---> 123654