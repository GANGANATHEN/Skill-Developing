//print fibonaccie series
public class fibonacciseries {
    public static void main(String[] args) {
        int n =10;
        int a = 0;
        int b =1;
        System.out.print(a+" "+b+" ");

        for(int i=0;i<n;i++){
            int add = a+b;
            System.out.print(add+" ");
            a=b;
            b=add;
        }
    }
}

//output 0 1 1 2 3 5 8 13 21 34 55 89