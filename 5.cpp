#include<iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    // Default constructor
    Complex() {
        real = 0;
        imaginary = 0;
    }

    // Constructor with one argument
    Complex(int r) {
        real = r;
        imaginary = 0;
    }

    // Constructor with two arguments
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    // Member function to display the complex number
    void show() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }

    // Member function to find the sum of two complex numbers
    Complex sum(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
};

int main() {
    // Using different constructors
    Complex c1;         // Default constructor
    Complex c2(5);      // Constructor with one argument
    Complex c3(2, 3);   // Constructor with two arguments

    // Displaying complex numbers
    c1.show();
    c2.show();
    c3.show();

    // Finding the sum of two complex numbers
    Complex sumResult = c2.sum(c3);
    
    // Displaying the result
    cout << "\nSum of c2 and c3: ";
    sumResult.show();

    return 0;
}
