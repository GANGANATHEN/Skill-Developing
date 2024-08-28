// print 10 fibonacie series
#include <stdio.h>
int main(){
    int n =10;
    int a = 0;
    int b = 1;
    printf("%d %d",a,b);

    for(int i=0;i<n;i++){
        int c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    } 
}
// output --> 0 1 1 2 3 5 8 13 21 34 55 89