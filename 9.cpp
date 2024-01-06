#include <iostream>
using namespace std;
inline int square(int s) 
{ 
    return s * s ; 
    
}
int main()
{
    int n;
    cout<<"Enter the number to find the square"<<std::endl;
    cin>>n;
    cout << "The square of"<<n << "is: " << square(n) << "\n";
    return 0;
}
