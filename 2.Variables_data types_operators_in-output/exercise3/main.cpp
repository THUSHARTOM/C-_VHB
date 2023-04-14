#include<iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius;
    const int STANDARD = 32;
    cout<<"Welcome to america."<<endl<<"We can convert all the metrics into american standards, danke"<<endl;
    cout<<"Please input the temperature in Fahrenheit"<<endl;
    cin>>fahrenheit;
    celsius = ((fahrenheit-STANDARD)*5)/9;

    cout<<"This is the temp in celsius = "<<celsius;


    return 0;
}