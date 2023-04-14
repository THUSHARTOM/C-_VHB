#include<iostream>

using namespace std;

int main()
{
    float weight;
    int revenue, daily_price = 66;
    const float DISCOUNT  = 0.05;

    cout<<"Enter the weight of the Pig"<<endl;
    cin>>weight;
    revenue = (daily_price*weight);
    revenue = revenue*(1-DISCOUNT);
    cout<<"The revenue is - "<<revenue;

}