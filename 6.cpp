#include <iostream>

class LeapYearChecker 
{
private:
    int year;

public:
    // Constructor to initialize the year
    LeapYearChecker(int y)
    {
        year=y;
        std::cout << "Object created for year " << year << std::endl;
    }

    // Destructor
    ~LeapYearChecker() 
    {
        std::cout << "Object destroyed for year " << year << std::endl;
    }

    // Member function to check if the year is a leap year
    void checkLeapYear() 
    {
        if(year%400==0)
        std::cout<<"It is a leap year"<<std::endl;
        else if(year%100==0)
        std::cout<<"It is not a leap year"<<std::endl;
        else if(year%4==0)
        std::cout<<"It is  a leap year"<<std::endl;
        else
        std::cout<<"It is not a leap year"<<std::endl;
        
    }
};

int main() {
    int inputYear;

    // Get the year from the user
    std::cout << "Enter a year: ";
    std::cin >> inputYear;

    // Create an object of LeapYearChecker with the specified year
    LeapYearChecker yearChecker(inputYear);

    // Use the member function to check if it's a leap year
    yearChecker.checkLeapYear();

    // Destructor will be called automatically when the object goes out of scope

    return 0;
}
