
#include <string> // program uses C++ standard  class
using namespace std;


class Rectangle
{
public:
         Rectangle(float = 1, float = 1);         

         void  setLength(float);               //set length
         float  getLength();                  //get length
 
         void  setWidth(float);                 //set width
         float getWidth();                    //get width

         float  perimeter(float,float);          //Circumference calculation

        float area( float ,float);                //Calculated area


private:
        float length1;
        float width1;
        float area1;
        float perimeter1;

};
