import java.io.BufferedReader;
import java.io.InputStreamReader;


public class Buffer {
        public static void main(String[] args) throws Exception {
                InputStreamReader is = new InputStreamReader(System.in);
                BufferedReader br = new BufferedReader(is);
                System.out.println("Fuck you");
                int n = Integer.parseInt(br.readLine());
                System.out.println(n);
                
                
                
                //
                
                // BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                System.out.println("Fuck you");
                int m = Integer.parseInt(br.readLine());
                System.out.println(m);
        }
}
