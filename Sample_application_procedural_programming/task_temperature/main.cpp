#include<iostream>

using namespace std;


float month_temperature[12], sorted_temperature[12];
string month[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"}; 

void check_temp()
{
    string month_inp;
    cout<<"\n Enter the number or name of the month to find out temperature of that month \n";
    cout<<"//  "<< "1. January"<<endl;   
    cout<<"//  "<< "2. February"<<endl;
    cout<<"//  "<< "3. March"<<endl;
    cout<<"//  "<< "4. April"<<endl;
    cout<<"//  "<< "5. May"<<endl;
    cout<<"//  "<< "6. June"<<endl;
    cout<<"//  "<< "7. July"<<endl;
    cout<<"//  "<< "8. August"<<endl;
    cout<<"//  "<< "9. September"<<endl;
    cout<<"//  "<< "10. Ocotber"<<endl;
    cout<<"//  "<< "11. November"<<endl;
    cout<<"//  "<< "12. December"<<endl;
    cin>>month_inp;
    month_inp = string(month_inp);
    if(month_inp == "January" || month_inp == "1")
    {
        cout<<"Temperature - "<<month_temperature[0]<<endl;
    }
    else if(month_inp == "February" || month_inp == "2")
    {
        cout<<"Temperature - "<<month_temperature[1]<<endl;
    }
    else if(month_inp == "March" || month_inp == "3")
    {
        cout<<"Temperature - "<<month_temperature[2]<<endl;
    }
    else if(month_inp == "April" || month_inp == "4")
    {
        cout<<"Temperature - "<<month_temperature[3]<<endl;
    }
    else if(month_inp == "May" || month_inp == "5")
    {
        cout<<"Temperature - "<<month_temperature[4]<<endl;
    }
    else if(month_inp == "June" || month_inp == "6")
    {
        cout<<"Temperature - "<<month_temperature[5]<<endl;
    }
    else if(month_inp == "July" || month_inp == "7")
    {
        cout<<"Temperature - "<<month_temperature[6]<<endl;
    }
    else if(month_inp == "August" || month_inp == "8")
    {
        cout<<"Temperature - "<<month_temperature[7]<<endl;
    }
    else if(month_inp == "September" || month_inp == "9")
    {
        cout<<"Temperature - "<<month_temperature[8]<<endl;
    }
    else if(month_inp == "October" || month_inp == "10")
    {
        cout<<"Temperature - "<<month_temperature[9]<<endl;
    }
    else if(month_inp == "November" || month_inp == "11")
    {
        cout<<"Temperature - "<<month_temperature[10]<<endl;
    }
    else if(month_inp == "December" || month_inp == "12")
    {
        cout<<"Temperature - "<<month_temperature[11]<<endl;
    }
    else
    {
        cout<<"\n Invalid Input \n";
    }

}

void hotest_month()
{
    cout<<"\n "<< month[11] <<"\n";
}
// month index = [1,2,3,4,5,6,7,8,9,10,11,12]
// month temp = [21,22,23,24,25,26,27,28,29,20,21,22]
// month name = ["Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"]
void ascending()
{
    int temp;
    string month_name;
    for(int i=0; i<12; i++)
    {
        sorted_temperature[i] = month_temperature[i];
    }
    
    for(int i=0; i<11; i++)
    {
        for(int j = i+1; j<12; j++)
        {
            if (sorted_temperature[i]> sorted_temperature[j])
            {
                temp = sorted_temperature[i];
                month_name = month[i];
                sorted_temperature[i] = sorted_temperature[j];
                month[i] = month[j];
                sorted_temperature[j] = temp;
                month[j] = month_name;
            }
        }
    }
    
    
}

int main()
{   
    int i = 100;
    
    bool flag = true;

    cout<<"Input monthly month_temperature starting with January \n";
    for(int j =0; j<12; j++ )
    {
        cin>>month_temperature[j];
        cout<<endl;
    }

    cout<<"Thank you! \n";
    ascending();

    while(flag)
    {   
        cout<<"Please select from the menu below"<<endl;
        cout<<"//  "<< "1. Temp of the month"<<endl;
        cout<<"//  "<< "2. Hottest Month"<<endl;
        cout<<"//  "<< "3. Ascending order of month_temperature of months"<<endl;
        cout<<"//  "<< "0. Exit"<<endl;

        

        cin>>i;

        switch (i)
        {
        case 0:
            cout<<"Thank you for playing \n";
            flag = false;
            break;
        case 1:

            check_temp();
            break;
        case 2:
        
            cout<<"Hottest Month is - ";
            hotest_month();
            break; 

        case 3:
        
            // cout<<"Ascending \n";
            cout<< "Here is the ascending order months w.r.t temperature  \n";

            for(int i = 0; i<12; i++)
            {
                cout<<endl<<month[i]<<" - " <<sorted_temperature[i]<<endl;
            }
            break;
                   
        default:
            cout<<"Entered value does not exist in the menu";
            break;
        }
        
    }
}