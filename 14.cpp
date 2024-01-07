#include <iostream>
using namespace std;
 
class base {
private:
    int a;
 
protected:
    int b;
 
public:
    base()
    {
        a = 10;
        b = 99;
    }
     
      // friend function declaration
     friend void swap(base& obj);
};
 
 
// friend function definition
void swap(base& obj)
{
    cout << "Private Variable: " << obj.a
         << endl;
    cout << "Protected Variable: " << obj.b;
   obj.a=obj.a+obj.b;
   obj.b=obj.a-obj.b;
   obj.a=obj.a-obj.b;
   cout << "After swapping " << obj.a
         << endl;
    cout << "After swapping " << obj.b;
}
 
// driver code
int main()
{
    base object1;
    swap(object1);
 
    return 0;
}
