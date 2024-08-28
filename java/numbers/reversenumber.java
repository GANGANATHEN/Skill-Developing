//reverse a number
public class reversenumber {
    public static void main(String[] args){
        int n = 12345;
        int rev = 0;

        while(n!=0){
            int x = n%10;
            System.out.print(x);
            n = n/10;
        }
    }
}

//outbut --> 54321