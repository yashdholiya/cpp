// #include <iostream>
// #include <string>
// using namespace std;
 
// class BankAccount {
// private:
//    string accountNumber;
//    string accountHolderName;
//     double balance;

// public:
//     BankAccount(const string& number, const string& name, double initialBalance)
//         : accountNumber(number), accountHolderName(name), balance(initialBalance) {}

//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//            cout << "Deposit successful. New balance: " << balance <<endl;
//         } else {
//            cout << "Invalid deposit amount." <<endl;
//         }
//     }

//     void withdraw(double amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//            cout << "Withdrawal successful. New balance: " << balance <<endl;
//         } else {
//            cout << "Invalid withdrawal amount." <<endl;
//         }
//     }

//     double getBalance() const {
//         return balance;
//     }

//     void displayAccountInfo() const {
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Account Holder: " << accountHolderName << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main() {
//     BankAccount account("14*********", " XYZ******", 1000.0);

//     int choice;
//     double amount;

//     do {
//         cout << "1. Deposit" << endl;
//         cout << "2. Withdraw" << endl;
//         cout << "3. Check Balance" << endl;
//         cout << "4. Display Account Info" << endl;
//         cout << "5. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter deposit amount: ";
//                 cin >> amount;
//                 account.deposit(amount);
//                 break;

//             case 2:
//                 cout << "Enter withdrawal amount: ";
                
//             cin >> amount;

//                 account.withdraw(amount);
//                 break;

//             case 3:
                
//             cout << "Account balance: " << account.getBalance() << 
//             endl;


//                 break;

//             case 4:
//                 account.displayAccountInfo();
//                 break;

//             case 5:
                
//             cout << "Exiting program." << 
//             endl;


//                 break;

//             default:
                
//             cout << "Invalid choice. Please try again." << 
//             endl;


//         }

//     } while (choice != 5);
//      return  0;
// }






#include<iostream>
using namespace std;
class bank
{
    public:
    int balance=1000,deposite,withdrow;
    void deposit()
    {
        cout<<"enter your deposi amount :";
        cin>>deposite;
        balance=balance+deposite;
        cout<<"your depsoited amount is:"<<deposite<<endl;
    }

    void withdraw()
    {
        cout<<"enter amount you want to withdraw:";
        cin>>withdrow;
        if(balance<withdrow)
        {
            cout<<"sorry..not enough balance"<<endl;
        }
        else
        {
            balance=balance-withdrow;
            cout<<"your withdrawal balance is:"<<withdrow<<endl;
        }
    }

    void showbalance()
    {
        cout<<"total balance is:"<<balance<<endl;;
    }
};

int main()
{
    bank b;
    int choice;
    cout<<"1. deposit"<<endl;
    cout<<"2. withdraw"<<endl;
    cout<<"3. show balance"<<endl;
    cout<<"4. end"<<endl;

    do
    {
        cout<<"enter choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
        b.deposit();
        break;

        case 2:
        b.withdraw();
        break;

        case 3:
        b.showbalance();

        case 4:
        break;

        default:
        cout<<"wrong choice"<<endl;
        }

    }while(choice!=4);
}