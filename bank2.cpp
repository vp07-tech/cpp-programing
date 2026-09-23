#include <iostream>
#include <string>
using namespace std;

// Base Class
class BankAccount
{
protected:
    int accNo;
    string name;
    float balance;

public:
    void getData()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void display()
    {
        cout << "\nAccount Number : " << accNo;
        cout << "\nAccount Holder : " << name;
        cout << "\nBalance        : " << balance << endl;
    }
};

// Derived Class 1
class SavingsAccount : public BankAccount
{
public:
    void calculateInterest()
    {
        float interest = balance * 0.05;
        cout << "Interest (5%) = " << interest << endl;
        cout << "Total Balance = " << balance + interest << endl;
    }
};

// Derived Class 2
class CurrentAccount : public BankAccount
{
public:
    void checkMinBalance()
    {
        if (balance < 5000)
            cout << "Minimum Balance Not Maintained!" << endl;
        else
            cout << "Minimum Balance Maintained." << endl;
    }
};

// Derived Class 3
class SalaryAccount : public BankAccount
{
public:
    void transactionCharge()
    {
        float charge = 50;
        cout << "Transaction Charge = " << charge << endl;
        cout << "Remaining Balance = " << balance - charge << endl;
    }
};

int main()
{
    SavingsAccount s;
    CurrentAccount c;
    SalaryAccount sa;

    cout << "\n--- Savings Account ---\n";
    s.getData();
    s.display();
    s.calculateInterest();

    cout << "\n--- Current Account ---\n";
    c.getData();
    c.display();
    c.checkMinBalance();

    cout << "\n--- Salary Account ---\n";
    sa.getData();
    sa.display();
    sa.transactionCharge();

    return 0;
}
