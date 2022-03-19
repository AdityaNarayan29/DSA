// import java.util.*;

public class infy {
  // public static void main(String[] args) {
  //   Scanner sc = new Scanner(System.in);
  //   int dif = sc.nextInt();
  //   String add = sc.next();
  //   String badd = sc.next();
  //   sc.close();
  //   int max = 0;
  //   if(add.length()> badd.length()){
  //     max = add.length();
  //   }else{
  //     max = badd.length();
  //   }
  //   for (int i = 0; i < max; i++) {
  //     for (int j = 0; j < dif; j++) {
  //       if(i+j<add.length())
  //       System.out.print(add.charAt(i+j));
  //     }
  //     for (int j = 0; j < dif; j++) {
  //       if(i+j<badd.length())
  //       System.out.print(badd.charAt(i+j));
  //     }
  //     i++;
  //   }
  // }


  // public static String sortString(String inpuString){
    
  //   char TempArr[] = inpuString.toCharArray();
  //   Arrays.sort(TempArr);
  //   return new String(TempArr);
  // }
  // public static void main(String[] args) {
  //   Scanner sc = new Scanner(System.in);
  //   String str = sc.next();
  //   String vow = ""; 
  //   String con = ""; 
  //   sc.close();
  //   int v = 0, c = 0;

  //   for (int i = 0; i < str.length(); i++) {
  //     if(
  //       str.charAt(i) == 'a' ||
  //       str.charAt(i) == 'e' ||
  //       str.charAt(i) == 'i' ||
  //       str.charAt(i) == 'o' ||
  //       str.charAt(i) == 'u'
  //       ){
  //         vow = vow+str.charAt(i);
  //         v++; 
  //       }else{
  //         con = con+str.charAt(i);
  //         c++;
  //       }
  //     }
  //     int maxC = 0,maxV=0;
  //     for (int i = 0; i < con.length(); i++) {
  //       int cur = (int)con.charAt(i);
  //       if(cur > maxC){
  //         maxC = i;
  //       }
  //     }
  //     for (int i = 0; i < vow.length(); i++) {
  //       int cur = (int)vow.charAt(i);
  //       if(cur < maxV){
  //         maxV = i;
  //       }
  //     }
  //     String conso = sortString(con);
  //     String vowel = sortString(vow);
    
  //   if(v==0){
  //     maxV = -1;
  //     vowel = "NA";
  //   }
  //   if(c==0){
  //     maxC = -1;
  //     conso = "NA";
  //   }
  //   maxV++;maxC++;
  //   System.out.println(vowel+maxV+conso+maxC);
  // }
}
