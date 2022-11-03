// Binary operator as freind function
#include <iostream>
using namespace std;
class Complex
{
    int real, imag;

public:
    void get_value()
    {
        cout << "Enter Real and Imaginary Part" << endl;
        cin >> real >> imag;
    }
    void display()
    {
        cout << real << "+i" << imag << endl;
    }
    friend Complex operator+(Complex &, Complex &);
};
Complex operator+(Complex &c1, Complex &c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}
int main()
{
    Complex c1, c2, c3;
    c1.get_value();
    c2.get_value();
    c3 = c1 + c2;
    c3.display();
}
