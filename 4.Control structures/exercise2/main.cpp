#include<iostream>

using namespace std;

float fahrenheit, step_size, max_val, celsius;

void fahren_celsius()
{
    for(; fahrenheit<=max_val ; fahrenheit+=step_size)
    {
        celsius = (fahrenheit-32)*5/9;
        cout<<"\t"<<"Fahrenheit: "<<fahrenheit<<"   |  celsius: "<<celsius<<endl;
    }
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

    cout<<"Output:"<<endl;
    fahren_celsius();
    





}