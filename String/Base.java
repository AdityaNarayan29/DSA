// package String;

import java.util.*;

public class Base{
          public static void main(String[] args) {
                  int degree = 45;
                  double radian = Math.toRadians(degree);
                  double tanValue = 0,x,h = 1;

                  if(degree == 30){
                        tanValue  = Math.tan(radian);
                        x = h/tanValue;
                  }
                  if(degree == 45){
                        tanValue  = Math.tan(radian);
                        x = h/tanValue;
                  }
                  if(degree == 60){
                        tanValue  = Math.tan(radian);
                        x = h/tanValue;
                  }
                  
                  String add = ("sudhfu");
                  System.out.println(add);
                  // for (int i = 0; i < add.length(); i++) {
                        System.out.println(add.length());
                  // }

          }
}