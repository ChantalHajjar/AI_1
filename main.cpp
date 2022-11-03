#include <iostream>

using namespace std;

class MyClass{
  public:
   
   
   MyClass operator+(const MyClass& c) const;
     
   
  private:
   int x;
};
ostream& operator<<(ostream& os, const MyClass& mc);


