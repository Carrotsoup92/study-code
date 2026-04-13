

#include <iostream>
#include <string>

class account
{
private:
    std::string owner;
    double balance;
public:
    void setOwner(std::string);
    std::string getOwner();
    void deposid(double);
    void withdraw(double);
    double getBalnce();
    void prinAccountInfo();

    account()
    {
        balance = 0;
    }
};

void account::setOwner(std::string newOwner)
{
    account::owner = newOwner;
}

std::string account::getOwner()
{
    return owner;
}

void account::deposid(double money)
{
    if (money < 0)
    {
        std::cout << "You can not deposit negative money!\n";
    }
    else
    {
        balance = balance + money;
    }
}

void account::withdraw(double money)
{
    if (money > balance && money < 0)
    {
        std::cout << "not enogh money to withdraw!\n";
    }
    else
    {
        balance = balance - money;
    } 
}

double account::getBalnce()
{
    return balance;
}

void account::prinAccountInfo()
{
    std::cout << "Accont owner: " << owner << std::endl;
    std::cout << "Balance     : " << balance << std::endl;
}

int main()
{
    std::string AccountHolder;
    double AccountBalance = 0;

    account acc;
    acc.setOwner("Ich");
    AccountHolder = acc.getOwner();
    std::cout << AccountHolder <<"\n";
    
    acc.deposid(200);
    acc.withdraw(15.12);
    AccountBalance = acc.getBalnce();
    std::cout << AccountBalance << "\n";

    acc.prinAccountInfo();

    return 0;
}