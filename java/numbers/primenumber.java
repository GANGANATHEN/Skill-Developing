public class primenumber {
    public static void main(String[] args){
        int n =7;
        int checkprime =0;

        for(int i=2;i<n;i++){
            int x = n%i;
            if(x==0){
                checkprime++;
                break;
            }
        }
        if(checkprime==0){
            System.out.println("The given number is a prime number");
        }else {
            System.out.println("The given number is not a prime number");
        }
    }
}
//Outout --> The given number is a prime number