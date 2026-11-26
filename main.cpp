
#include <iostream>
using namespace std;

int main()
{
    int choice;

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
                cout<<"Add Expense selected\n";
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
