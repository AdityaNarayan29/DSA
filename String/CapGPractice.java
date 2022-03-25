import java.util.ArrayList;
import java.util.*;

class StringMethods {
  public ArrayList<Character> getMissing(ArrayList<Character> missing, ArrayList<Character> str) {
    ArrayList<Character> sm = new ArrayList<Character>();
    for (int i = 1; i < str.size(); i++) {
      if (str.get(i) == str.get(i - 1) + 1) {
        sm.add(str.get(i - 1));
      } else {
        sm.add(str.get(i - 1));
        int diff = str.get(i) - str.get(i - 1);
        for (int j = 1; j < diff; j++) {
          char temp = (char) (str.get(i - 1) + j);
          sm.add(temp);
        }
      }
    }
    return (sm);
  }

  public int checkSubstring(int substring, String s1, String s2) {
    if (s2.contains(s1)) {
      int val = s2.indexOf(s1);
      return val;
    } else {
      return -1;
    }
  }

  public List<String> CheckMatch(List<String> match, List<String> str) {
    match.add(str.get(0));
    for (int i = 1; i < str.size(); i++) {
      String s1 = str.get(i-1);
      String s2 = str.get(i);
      if(s1.charAt(s1.length()-1) == s2.charAt(0)){
        match.add(str.get(i));
      }
    }
    return (match);
    
    
    ArrayList<String> uniqueCompany(){
      for (int i = 0; i < num.size(); i++) {
        if(uniqueCompany.contains(carlist.get(i).company)){

        }else{
          uniqueCompany.add();
        }
      }
    }


  }
}
