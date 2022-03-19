
// import java.io.*;
import java.util.*;
// import java.text.*;
// import java.math.*;
// import java.util.regex.*;

// Class name should be "Source",
// otherwise solution won't be accepted
public class SortAccordingCol1 {
// public class Source {
    // public static 
	public static void main(String args[] ) throws Exception {
		/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	    try{
	        String [][] productArray = new String[5][3];
    	    Scanner sc = new Scanner(System.in);
    	    int n = 5;
    	    int m = 3;
    	    for(int i = 0;i<n; i++){
                for(int j = 0;j<m; j++){
                    productArray[i][j]=sc.next();
                }
    	    }
    	    
    	    
    Arrays.sort(productArray, new Comparator<String[]>(){
    	        public int compare(String[] val1,String[] val2){
    	            return Integer.valueOf(val1[0]).compareTo(Integer.valueOf(val2[0]));
                  
                }
              });
              sc.close();

    	   for(int i = 0;i<n; i++){
                for(int j = 0;j<m; j++){
                    System.out.println(productArray[i][j]);
                }
    	   }
    	 }
    	 catch(Exception e){
    	        return;
    	    }
	}
}

/*

---------------Sample input-------------
  17000

S21

Samsung

20500

Iphone6

Apple

30600

MotorolaVZ

Motorola

10000

Nokia6.1

Nokia

120000

Galaxy-Z

Samsung */