#include <iostream>
using namespace std;

int main() {

    class BankAccount {

    public:
        BankAccount(string newName, double chBalance, double sBalance);
        void SetName(string newName);
        string GetName();
        void SetChecking(double balance);
        double GetChecking();
        void SetSavings(double balance);
        double GetSavings();
        void DepositChecking(double amt);
        void DepositSavings(double amt);
        void WithdrawChecking(double amt);
        void WithdrawSavings(double amt);
        void TransferToSavings(double amt);
        
    private:
        string customer;
        double saveActBalance;
        double checkActBalance;
    };

    return 0;
}