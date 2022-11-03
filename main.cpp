#include <iostream>
#include <sstream>
using namespace std;

class MyClass{
  public:
   
   string to_string() const;
   MyClass operator+(const MyClass& c) const;
     
   
  private:
   int x;
};


string MyClass::to_string() const {
  stringstream ss;
  ss << "MyClass: " << x << endl;
  return ss.str(); 
}

MyClass MyClass::operator+(const MyClass& c) const {
  return MyClass(x+c.x);
}

ostream& operator<<(ostream& os, const MyClass& mc) {
  os << mc.to_string();
  return os;
}


