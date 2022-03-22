 // # HLPL1
 // High Level Programming Language 1 (Calculator code in cpp(2)

#include <iostream>
using namespace std;

int main() {
	
	int lval = 0, rval = 0;
	char op = 0;
	
	cout << "Please enter an expression!\n" << endl;
	
	cin >> lval >> op >> rval;
	
	if (op == '+')
	    lval += rval;
	
	else if (op == '-')
	    lval -= rval;
	
	else if (op == '*')
	    lval *= rval;
	
	else if (op == '/')
	    lval /= rval;	   
	    cout << "Result: " << lval << endl;
	    
	    return 0;
}
