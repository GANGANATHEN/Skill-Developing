public class PowerOfGivenNum {

    static int GivenNum(int a,int b){
        int pow = 1;
        for(int i = 0; i < b; i++){
            pow = pow * a;
        }
        return pow;
    }

    public static void main(String[] args){
        int result = GivenNum(2,4);
        System.out.println(result);
    }
}
