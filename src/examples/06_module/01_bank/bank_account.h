//bank_account.h
class BankAccount
{
public://access specifier
    int get_balance()const {return balance;} //const protects get_balance()
private:
    int balance{0};

};