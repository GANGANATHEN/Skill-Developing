public class FactOfGivenNum {

    static int GivenNum(int n){
        int fact = 1;
        for(int i=1;i<=n;i++){
            fact = fact * i;
        }
        return fact;
    }

    public static void main(String[] args){
        int result = GivenNum(5);
        System.out.println(result);
    }
}
