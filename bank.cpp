#include <iostream>
#include <iomanip>
using namespace std;

// Base Class
class BankAccount
{
protected:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNo, double bal)
    {
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: Rs." << amount << endl;
    }

    virtual void withdraw(double amount) = 0;

    virtual void generateStatement()
    {
        cout << "\n----- Account Statement -----\n";
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : Rs." << fixed << setprecision(2)
             << balance << endl;
    }

    virtual ~BankAccount() {}
};

// Saving Account Class
class SavingAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingAccount(string name, int accNo, double bal, double rate)
        : BankAccount(name, accNo, bal)
    {
        interestRate = rate;
    }

    void calculateInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Added: Rs." << interest << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: Rs." << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }
};

// Checking Account Class
class CheckingAccount : public BankAccount
{
private:
    double transactionFee;

public:
    CheckingAccount(string name, int accNo, double bal, double fee)
        : BankAccount(name, accNo, bal)
    {
        transactionFee = fee;
    }

    void withdraw(double amount)
    {
        double total = amount + transactionFee;

        if (total <= balance)
        {
            balance -= total;
            cout << "Withdrawn: Rs." << amount << endl;
            cout << "Transaction Fee: Rs." << transactionFee << endl;
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }
};

int main()
{
    // Saving Account
    SavingAccount sa("Venkatesh", 1001, 10000, 5);

    cout << "\n=== Saving Account ===\n";
    sa.deposit(2000);
    sa.withdraw(1500);
    sa.calculateInterest();
    sa.generateStatement();

    // Checking Account
    CheckingAccount ca("Patil", 2001, 15000, 50);

    cout << "\n=== Checking Account ===\n";
    ca.deposit(3000);
    ca.withdraw(2000);
    ca.generateStatement();

    return 0;
}