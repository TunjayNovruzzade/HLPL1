 // # HLPL1
 // High Level Programming Language 1 (Calculator code in cpp with function(3)


#include <iostream>
using namespace std;


void enterNumbers(int& a, int& b)

{
     cout << "Enter two numbers: ";
     cin >> a >> b;
}

 
int sumNumbers(int a, int b, int& sum)

{
     sum = a + b;
     cout << sum << endl;
     return sum;
}

 
int divisionNumbers(int a, int b, int& sum)
{
     sum = a / b;
     cout << sum << endl;
     return sum;
}


int subtractionNumbers(int a, int b, int& sum)
{
     sum = a - b;
     cout << sum << endl;
      return sum;
}


int multiplyingNumbers(int a, int b, int& sum)
{
      sum = a * b;
      cout << sum << endl;
      return sum;
}

 
int main ()

{
     int a;
     int b;
     int Result;
     
     enterNumbers(a, b);
     sumNumbers(a, b, Result);
     divisionNumbers(a, b, Result);
     subtractionNumbers(a, b, Result);
     multiplyingNumbers(a, b, Result);
  
}
