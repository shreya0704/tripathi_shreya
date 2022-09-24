#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
using namespace std;
class account
{
    int acno;
    char name[50];
    int deposit;
    char type;
    public:
    void create_account();
    void show_account();
    void modify();
    void dep(int);
    void draw(int);
    vpoid report() const;
    int retacno() const;
    int retdeposit() const;
    int rettype() const;
};
void account::create_account()
{
    cout<<"\nEnter the account no. : ";
    cin>>acno;
    cout<<"\nEnter the name of account holder: ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"\nEnter Type of account(C/S) : ";
    cin>>type;
    type = toupper(type);
    cout<<"\nEnter initial amount(>=500 for saving and >=1000 for current) : ";
    cin>>deposit;
    cout<<"\nAccount created";
}
void account::show_account() const
{
    cout<<"\nAccount no. : "<<acno;
    cout<<"\nAccount Holder Name : "<<name;
    cout<<"\nType of account : "<<type;
    cout<<"\nBalance Amount : "<<deposit;
}
void account::modify()
{
    cout<<"\nAccount no.: "<<acno;
    cout<<"\nModify Account Holder Name : ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"\nModify Type of Account: ";
    cin>>type;
    type = toupper(type);
    cout<<"\nModify Balance Amount: ";
    cin>>deposit;
}
void account::dep(int x)
{
    deposit+=x;
}
void account::draw(int x)
{
    deposit-=x;
}
void account::report() const
{
    cout<<acno<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<deposit<<endl;
}
int account::retacno() const
{
    return acno;
}
int account::retdeposit() const
{
    return type;
}
void write_account();
void display_sp(int);
void modify_account(int);
void display_all();
void deposit_withdraw(int, int);
void intro();
int main(0
{
    char ch;
    int num;
    intro();
    do{
        cout<<"\n\tMAIN MENU";
        cout<<"\n1) NEW ACCOUNT";
        cout<<"\n2) DEPOSIT AMOUNT";
        cout<<"\n3) WITHDRAW AMOUNT";
        cout<<"\n4) BALANCE ENQUIRY";
        cout<<"\n5) ALL ACCOUNT HOLDER LIST";
        cout<<"\n6) CLOSE AN ACCOUNT";
        cout<<"\n7) MODIFY AN ACCOUNT";
        cout<<"\n8) EXIT";
        cout<<"\nSELECT AN OPTION(1-8)";
        cin>>ch;
        switch(ch)
        {
            case '1':
            write_account();
            break;
            case '2':
            cout<<"\n\tEnter Account Number: ";
            cin>>num;
            deposit_withdraw(num,1);
            break;
            case '3':
            cout<<"\n\tEnter Account Number: ";
            cin>>num;
            deposit_withdraw(num,2);
            break;
            case '4':
            cout<<"\n\tEnter Account Number: ";
            cin>>num;
            display_sp(num);
            break;
            case '5':
            display_all();
            break;
            case '6':
            cout<<"\n\tEnter Account Number: ";
            cin>>num;
            delete_account(num);
            break;
            case '7':
            cout<<"\n\tEnter Account Number: ";
            cin>>num;
            modify_account(num);
            break;
            case '8':
            cout<<"\n\n\tThanks for using bank management system.";
            break;
            default :cout<<"\a";
        }
        cin.ignore();
        cin.get();
    }
    while(ch!='8');
    return 0;
}
void write_account()
{
    account ac;
    ofstream outFile;
    outFile.open("account.dat",ios::binary|ios::app);
    ac.create_account();
    outFile.write(reinterpret_cast<char *>(&ac), sizeof(account));
    outFile.close();
}
void display_sp(int n)
{
    account ac;
    bool flag = false;
    ifstream inFile;
    inFile.open("account.dat",ios::binary);
    if(!inFile)
    {
        cout<<"Account not found.";
    }
}
cout<<"\nBalance Details";
