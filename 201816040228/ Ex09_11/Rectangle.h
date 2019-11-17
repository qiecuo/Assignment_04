#include <string> // program uses C++ standard string class
using namespace std;

// Rectangle class definition
class Rectangle
{
public:

   Rectangle(float=1, float=1); // constructor initializes 长，宽

   void setLength( float );
   float getLength();

   void setWidth( float );
   float getWidth();

   float Perimeter();

   float Area();

private:
    float Length;
    float Width;
}; // end class Invoice
