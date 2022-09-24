#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;
    class library{
        int rgno;
        int libno;
        char student_name[50];
        char book_name[50];
        char author_name[50];
        char department[20];
     
     public:
        
        void student_details();
        void issue();
        void return_book();
        void reissue();
    
};
void library::student_details()
{
    cout<<"\nEnter the registration no. : ";
    cin>>rgno;
    cout<<"\nEnter the name of student : ";
    cin>>student_name;
    cout<<"\nEnter the library card no : ";
    cin>>libno;
    cout<<"\nEnter your department name : ";
    cin>>department;
    cout<<"\nStudent Details entered successfully\n";
}
void library::issue() const
{
    cout<<"\nRegistration no. : ";
    cin<<rgno;
    cout<<"\nStudent Name : ";
    cin<<student_name;
    cout<<"\nLibrary id : ";
    cin<<libno;
    cout<<"\nBook you wanna issue : ";
    cin<<book_name;
    cout<<"\nName of author of the book : ";
    cin<<author_name;
    cout<<"\n Book is issued successfully !!";
}
void library::return_book()
{
    cout<<"\nRegistration no. : ";
    cin<<rgno;
    cout<<"\nStudent Name : ";
    cin<<student_name;
    cout<<"\nLibrary id : ";
    cin<<libno;
    cout<<"\nBook you wanna return : ";
    cin<<book_name;
    cout<<"\nName of author of the book : ";
    cin<<author_name;
    cout<<"\n Book is returned successfully !!";
}
void library::reissue()
{
    cout<<"\nRegistration no. : ";
    cin<<rgno;
    cout<<"\nStudent Name : ";
    cin<<student_name;
    cout<<"\nLibrary id : ";
    cin<<libno;
    cout<<"\nBook you wanna reissue : ";
    cin<<book_name;
    cout<<"\nName of author of the book : ";
    cin<<author_name;
    cout<<"\n Book is reissued successfully !!";
}

  
int main()
{
    char ch;
    char name;
    intro();
    do{
        cout<<"\n\tMAIN MENU";
        cout<<"\n1) Student details";
        cout<<"\n2) Issue";
        cout<<"\n3) Reissue";
        cout<<"\n4) Return";
        cout<<"\n5) EXIT";
        cout<<"\nSELECT AN OPTION(1-5)";
        cin>>ch;
        switch(ch)
        {
            case '1':
            student_details();
            break;
            case '2':
            cout<<"\n\tEnter book name you wanna issue: ";
            cin>>name;
            issue(name,1);
            break;
            case '3':
            cout<<"\n\tEnter book name you want to reissue: ";
            cin>>name;
            reissue(num,2);
            break;
            case '4':
            cout<<"\n\tEnter book you want to return: ";
            cin>>name;
            return(name);
            break;
            case '5':
            cout<<"\n\tLog out :";
            break;
            case '6':
            cout<<"\n\n\tThanks for using library management system.";
            break;
            default :cout<<"\a";
        }
        cin.ignore();
        cin.get();
    }
    while(ch!='6');
    return 0;
}