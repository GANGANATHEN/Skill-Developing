public class digitcount {

    static int countDigit(int n){
        int a = 0;
        while(n!=0){
            a++;
            n = n/10;
        }
        return a;
    }

    public static void main(String[] args){
        int result = countDigit(143);
        System.out.println("no of count = "+result);
    }
}
