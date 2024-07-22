import java.util.Scanner;

class bank{
  int getBalance(){
    return 0;
  }
}

class bank1 extends bank{
  int getBalance(int b1){
    return 1000+b1;
  }
}

class bank2 extends bank{
  int getBalance(int b2){
    return 1000+b2;
  }
}

class bank3 extends bank{
  int getBalance(int b3){
    return 1000+b3;
  }
}

public class Main{
  public static void main(String[] args){
    Scanner scan = new Scanner(System.in);
    int b1 = scan.nextInt();
    if(b1<0){
      System.out.println("invalid");
      System.exit(0);
    }
    int b2 = scan.nextInt();
    if(b2<0){
      System.out.println("invalid");
      System.exit(0);
    }
    int b3 = scan.nextInt();
    if(b3<0){
      System.out.println("invalid");
      System.exit(0);
    }

    bank1 a = new bank1();
    bank2 b = new bank2();
    bank3 c = new bank3();

    System.out.println(a.getBalance());
    System.out.println(b.getBalance());
    System.out.println(c.getBalance());
  }
}