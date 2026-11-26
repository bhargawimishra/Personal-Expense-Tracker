
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

            if(count==0)
            {
            cout<<"No expenses recorded!\n";
            }
            else
            {
            for(int i=0;i<count;i++)
            {
            cout<<"\nExpense "<<i+1<<endl;
            cout<<"Amount: "<<amount[i]<<endl;
            cout<<"Category: "<<category[i]<<endl;
            cout<<"Description: "<<description[i]<<endl;
            }
            }
            break;

            case 3:
            {
            float total=0;

            for(int i=0;i<count;i++)
            {
            total=total+amount[i];
            }

            cout<<"Total Expenses: Rs. "<<total<<endl;
            }
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
