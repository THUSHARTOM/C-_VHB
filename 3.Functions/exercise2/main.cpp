#include<iostream>

using namespace std;

float decimal, square, radius, circ_area;
const float constant_pi = 3.14;

void Square(int rad)
{
    square = rad*rad;
}

int main()
{
    
    cout<<"Welcome to the program"<<endl;
    cout<<"Enter a decimal number ";
    cin>>decimal;
    Square(decimal);
    cout<<"Square = "<<square<<endl;

    cout<<"Enter the readius ";

    cin>>radius;
    Square(radius);
    circ_area = radius * radius * constant_pi;
    cout<<"The area is = "<<circ_area;

    return 0;
} // namespace std

