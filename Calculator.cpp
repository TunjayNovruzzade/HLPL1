 // # HLPL1
 // High Level Programming LAnguage 1 (Calculator code in cpp)

# include <iostream>
using namespace std;

int main() {
  char op;
  float num1, num2;

  cout << "Please enter an operator: +  -  *  /: ";
  cin >> op;

  cout << "Please enter two digits: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+': cout << num1 << " + " << num2 << " = " << num1 + num2; break;
    case '-': cout << num1 << " - " << num2 << " = " << num1 - num2; break;
    case '*': cout << num1 << " * " << num2 << " = " << num1 * num2; break;
    case '/': cout << num1 << " / " << num2 << " = " << num1 / num2; break;
    default: cout << " Operator you entered is not correct"; break;
    }
    
	return 0;
}
