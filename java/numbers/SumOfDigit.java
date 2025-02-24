public class SumOfDigit {

    int Digit(int a){
        int n = 0;
        while(a!=0){
            n+=a%10;
            a/=10;
        }
        return n;
    }

    public static void main(String[] args){
        SumOfDigit N = new SumOfDigit();
        int result = N.Digit(11111);
        System.out.println(result);
    }
}
