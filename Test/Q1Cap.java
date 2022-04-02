import java.util.*;
import java.io.*;

public class Q1Cap {
  public static void main(String args[]) {
    StringBuilder firstName = new StringBuilder("Julie");
    StringBuilder lastName = new StringBuilder("Joseph");
    StringBuilder pin = new StringBuilder("54321");
    int N = 1;

    StringBuilder smallName = new StringBuilder();
    StringBuilder longerName = new StringBuilder();
    if (firstName.length() > lastName.length()) {
      longerName.append(firstName);
      smallName.append(lastName);
    } else if (firstName.length() < lastName.length()) {
      longerName.append(lastName);
      smallName.append(firstName);
    } else {
      if (firstName.charAt(0) > lastName.charAt(0)) {
        longerName.append(firstName);
        smallName.append(lastName);
      } else {
        longerName.append(lastName);
        smallName.append(firstName);
      }
    }
    char left = pin.charAt(N - 1);
    char right = pin.charAt(pin.length() - N);

    int l = smallName.length();
    StringBuilder result = new StringBuilder();
    result.append(smallName.charAt(l - 1));
    result.append(longerName);
    result.append(left);
    result.append(right);
    System.out.println(result);
  }}

  Object Bus = new Object();Bus.sourcePlace=sourcePlace;Bus.destinationPlace=destinationPlace;Bus.charge=charge;Arraylist.add(Bus);

  HahSet<String> set = new HashSet<String>();
  Iterator i = arrList.iterator();while(i.hasNext())
  {
    set.add(i.destinationPlace);
    set.add(i.sourcePlace);
  }
  Iterator itr = set.iterator();while(itr.hasNext())
  {
    System.out.println(itr.next());
  }

  class SampleException {
    public static void bokk() {
      try {
        throw new UserException(400);
      } catch (UserException e) {
        System.out.println(e);
      }
    }
  }

  class UserException extends Exception{
    int num1;
    UserException(int num2) {
    num1=num2;
    }
    public String toString(){
    return ("Status code = "+num1) ;
    }
    }