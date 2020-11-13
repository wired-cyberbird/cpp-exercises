

class Account
{
    public:
    explicit Account(int);
    void setAccountInitialBalance(int);
    void credit(int);
    void debit(int);
    int getAccountBalance() const;
    void displayBalance() const;
    private:
    int accountBalance;
};