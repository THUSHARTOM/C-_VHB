#include<iostream>

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
    cout<<"The total revenue is = "<<revenue<<endl;
}

int main()
{   
    int x;
    do
    {
        cout<<"Enter "<<endl;
        cout<<"\t"<<"[0] - Exit"<<endl;
        cout<<"\t"<<"[1] - Data query"<<endl;
        cout<<"\t"<<"[2] - Calculate_revenue"<<endl;
        cin>>x;
        switch (x)
        {
        case 1:
            {
            Data_query();
            system("pause");
            break;
        }
        
        case 2:
        {
            Calculate_revenue();
            system("pause");
            break;
        }

        case 0:
        {
            break;
        }
        
        default:
        {
            cout<<"Wrong input"<<endl;
            system("pause");
            break;
        }
        
        }
        
    } while (x!=0);
    
    cout<<"Good bye"<<endl;
} // namespace std;


