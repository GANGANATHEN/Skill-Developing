// find the power of given number
#include<stdio.h>
int main(){
    int number1 = 3;
    int number2 = 3;
    int ans = 1;
    for(int i = 1;i<=number2;i++){
        ans *= number1;
    }
    printf("%d",ans);
}
// output ---> 27