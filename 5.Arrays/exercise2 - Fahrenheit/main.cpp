#include<iostream>
#include <chrono> // Libraries for sleep
#include <thread>

using namespace std;

float fahrenheit, step_size, max_val, celsius, celsius_array[10];

int convert_celsius()
{
    for(int i = 0; fahrenheit<=max_val ; fahrenheit+=step_size, i++)
    {
        celsius = (fahrenheit-32)*5/9;
        celsius_array[i] = celsius;
    }
    return 0;
}


int fahren_celsius()
{
    int i = 0;
    fahrenheit = fahrenheit - (10*step_size);
    cout<<endl<<fahrenheit<<endl;
    while (i<10)
    {
        cout<<"\t"<<"Fahrenheit: "<<fahrenheit<<"   |  celsius: "<<celsius_array[i]<<endl;
        i++; fahrenheit+=step_size;
    }
    
    return 0;
}
int main()
{
    

    cout<<"Input: "<<endl;
    cout<<"\t"<<"Fahrenheit = ";
    cin>>fahrenheit;

    cout<<"\t"<<"Step size = ";
    cin>>step_size;

    cout<<"\t"<<"Maximum value = ";
    cin>>max_val;
    cout<<endl<<endl;

    
    cout<<"Converting to fahrenheit";
    std::this_thread::sleep_for(chrono::milliseconds(1000));
    convert_celsius();

    cout<<endl<<"Output:"<<endl;
    fahren_celsius();
    

}