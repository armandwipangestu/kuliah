// Infix To Postfix Calculator (Calculator Scientific)
// or Infix Expression to Postfix Expression

#include <bits/stdc++.h>
using namespace std;

// Function to return precendence or operators
int prec(char c) {
  if ( c == '^' ) {
    return 3;
  } else if ( c == '/' || c == '*' ) {
    return 2;
  } else if ( c == '+' || c == '-' ) {
    return 1;
  } else {
    return -1;
  }
}

// The main function to convert Infix Expression to Postfix Expression
void infixToPostfix(string s) {
  stack<char> st; // For Stack Operations, we are using C++ built in stack
  string result;

  for ( int i = 0; i < s.length(); i++ ) {
    char c = s[i];

    // If the scanned character is
    // an operand, add it to output string.
    if ( ( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z' ) || (c >= '0' && c <= '9') ) {
      result += c;
    } else if ( c == '(' ) { // If the scanned character is an `(`, push it to the stack.
      st.push('(');
    } else if ( c == ')' ) { // If the scanned character is an `)`, pop and to output string from the stack until an `(` is encountered.
      while ( st.top() != '(' ) {
        result += st.top();
        st.pop();
      }
      st.pop();
    } else { // If an operator is scanned
      while ( !st.empty() && prec(s[i]) <= prec(st.top()) ) {
        if ( c == '^' && st.top() == '^' ) {
          break;
        } else {
          result += st.top();
          st.pop();
        }
      }
      st.push(c);
    }
  }

  // Pop all the remaining elements from the stack
  while ( !st.empty() ) {
    result += st.top();
    st.pop();
  }

  cout << "Postfix: " << result << endl;
}

// Driver program to test above functions
int main() {
  string exp1 = "a+b*(c^d-e)^(f+g*h)-i",
         exp2 = "3+2*5",
         exp3 = "a+b*c-d";

  cout << "Infix: " << exp3 << endl;
  infixToPostfix(exp3);
  return 0;
}
