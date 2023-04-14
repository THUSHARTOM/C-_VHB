#include<iostream>
#include<cstdlib>

using namespace std;

int weight, price, revenue;

void Data_query()
{
    cout<<"Input weight"<<endl;
    cin>> weight;
    cout<<"Input price"<<endl;
    cin>>price;

}

void Calculate_revenue()
{
    revenue = weight*price;
}

int main()
{
    cout<<"Calling Data query"<<endl;
    Data_query();
    Calculate_revenue();
    cout<<endl<<"The final revenue is -> "<<revenue<<endl;
    system("pause");
    return 0;
}

