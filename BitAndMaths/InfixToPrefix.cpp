/*


F**ked up code panicing code


  if operand
      print
  if '('
      push to stack
  if ')'
      pop to stack and print until '(' is found
  if operator
      pop from stack and until an operator with less precedence is found

  (a-b/c)*(a/k-l) gives abc/-ak/l-*
*/

// #include <iostream>
// #include <stack>
// #include <math.h>
// using namespace std;
// int prec(char c)
// {
//   if (c == '^')
//   {
//     return 3;
//   }
//   else if (c == '*' || c == '/')
//   {
//     return 2;
//   }
//   else if (c == '+' || c == '-')
//   {
//     return 1;
//   }
//   else
//   {
//     return -1;
//   }
// }

// string infixtoPrefix(string s)
// {
//   stack<char> st;
//   string res;

//   for (int i = 0; i < s.length(); i++)
//   {
//     if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'a' && s[i] <= 'z'))
//     {
//       res += s[i];
//     }
//     else if (s[i] == '(')
//     {
//       st.push(s[i]);
//     }
//     else if (s[i] == ')')
//     {
//       while (!st.empty() && st.top() != '(')
//       {
//         res = st.top() + res;
//         st.pop();
//       }
//       if (!st.empty())
//       {
//         st.pop();
//       }
//     }
//     else
//     {
//       while (!st.empty() && prec(st.top()) > prec(s[i]))
//       {
//         res = st.top() + res;
//         st.pop();
//       }
//       st.push(s[i]);
//     }
//   }
//   while (!st.empty())
//   {
//     res = st.top() + res;
//     st.pop();
//   }
//   return res;
// }

// int main()
// {
//   string str;
//   cin >> str;
//   cout << infixtoPrefix(str);
//   return 0;
// }