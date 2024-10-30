// find the factorial of given number
#include <stdio.h>
int main(){
    int number=5;
    int sum = 1;
    for(int i=1;i<=number;i++){
        sum*=i;
    }
    printf("%d",sum);
}
// output ---> 120