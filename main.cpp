
#include <iostream>
using namespace std;
#include<string>

int main()
{
    int choice;
    float amount[100];
string category[100];
string description[100];
int count=0;

    do
    {
        cout<<"\n===== PERSONAL EXPENSE TRACKER =====\n";
        cout<<"1. Add Expense\n";
        cout<<"2. View All Expenses\n";
        cout<<"3. Calculate Total Expenses\n";
        cout<<"4. Exit\n";

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
    if(count<100)
    {
        cout<<"Enter amount: ";
        cin>>amount[count];

        cout<<"Enter category: ";
        cin>>category[count];

        cout<<"Enter description: ";
        cin.ignore();
        getline(cin,description[count]);

        count++;

        cout<<"Expense added successfully!\n";
    }
    else
    {
        cout<<"Expense limit reached!\n";
    }
    break;

            case 2:
                cout<<"View Expenses selected\n";
                break;

            case 3:
                cout<<"Calculate Total selected\n";
                break;

            case 4:
                cout<<"Exiting...\n";
                break;

            default:
                cout<<"Invalid choice!\n";
        }

    }while(choice!=4);

    return 0;
}
