#include "std_lib_facilities.h"

using namespace std;

class Complex {
public:

    double re = 0;
    double im = 0;

     
     void setvalue()

    {

        cin>>re;
        cin>>im;

    }


    void display()

    {
        cout<<re<<"+"<<im<<"i"<<endl;
    }

    void sum(Complex c1, Complex c2)

    {

        re=c1.re+c2.re;
        im=c1.im+c2.im;

    }

    };

int main()

    {

        Complex c1,c2,c3;
        cout<<"Please enter real and imaginary complex number"<<endl;
        c1.setvalue();
        cout<<"Please enter real and imaginary part of second complex number"<<endl;
        c2.setvalue();
        cout<<"Sum is "<<endl;
        c3.sum(c1,c2);
        c3.display();

    return 0;

    }
