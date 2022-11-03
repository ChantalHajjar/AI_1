#include <iostream>

using namespace std;

class MyClass{
  public:
   
   MyClass(int x = 0)
   :x(x){}
   
   MyClass operator+(const MyClass& c) const;
     
   
  private:
   int x;
};
ostream& operator<<(ostream& os, const MyClass& mc);


