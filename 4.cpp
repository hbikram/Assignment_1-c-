#include <iostream>

class InvertedTriangle {
private:
    int height;

public:
    // Constructor to initialize the height
    InvertedTriangle(int h)
    {
        height=h;
    }

    // Member function to print the inverted triangle
    void printInvertedTriangle() {
        for (int i = height; i >= 1; --i) {
            // Print spaces before each row
            for (int j = 0; j < height - i; ++j) {
                std::cout << " ";
            }

            // Print '*' for each column in the row
            for (int k = 0; k < 2 * i - 1; ++k) {
                std::cout << "*";
            }

            // Move to the next line after each row
            std::cout << std::endl;
        }
    }
};

int main() {
    int triangleHeight;

    // Get the height of the inverted triangle from the user
    std::cout << "Enter the height of the inverted triangle: ";
    std::cin >> triangleHeight;

    // Create an InvertedTriangle object with the specified height
    InvertedTriangle invertedTriangle(triangleHeight);

    // Use the member function to print the inverted triangle
    invertedTriangle.printInvertedTriangle();

    return 0;
}
