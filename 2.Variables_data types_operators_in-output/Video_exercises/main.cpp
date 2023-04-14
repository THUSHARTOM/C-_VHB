#include <iostream>

using namespace std;

int main()
{
    int number = 10;                 // Whole number
    float decimal(2.5);             // Floating point - 32 bit
    double decimal_1 = number/decimal, decimal_2;    // Floating point -54 bit
    bool alive = false;                     // Boolean tyoe: 1 = TRUE, 0 = FALSE
    char letter = 'A';              // Character
    string sentence = "Hello world"; // String
    const float DISCOUNT = 0.05;       // Keep this type format.
                                // Value doesnot change

    //int 123number, number?, if;     //not allowed

    /*
    cout<<"Int: " <<number<<endl;
    cout<<"FLoat: "<<decimal<<endl;
    cout<<"Double: "<<decimal_1<<" Double_2: "<<decimal_2<<endl;
    cout<<"Bool: "<<alive<<endl;
    cout<<"Letter: "<<letter<<endl;
    cout<<"String: "<<sentence<<endl;
    cout<<"Constant: "<<DISCOUNT<<endl;
    */

    
    string s = "set discount", name;

    float total, product;

    cout<< s <<endl << "Product name: ";
    cin>> name;
    cout<<"product price = ";
    cin>>product;
    total = product*(1-DISCOUNT);

    cout << "The product  " << name << " costs - "<< total <<endl;
    

    // Block Scope. Everything outside is available inside.
    // But nothing from inside is available outside
/*
    {
        float total;
        int number1 = 5, number2 = 2;
        total = (float)number1/number2;
        cout<<"Result: "<<total<<endl;

    }
*/

    return 0;
}
