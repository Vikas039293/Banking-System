#include<iostream>        // Password to run this program is Hello_User 
using namespace std;

class bank{
    private:
    
    string name[50];
    int age[50];
    long long int acc_no[50];
    long long int balance[50];
    
    public:
    int total=1;
    
    void zerobalance(){
        for (int i = 0; i < 50; i++)
        {
            balance[i]=0;
            acc_no[i]=0;
        }
        
    }
    void main_menu();
    void newaccount();
    void display();
    void transactions();
    void deletion();
    void newaccountnumber();
    void viewall();

};

void bank::viewall(){
    int temp=1;
    bool flag=false;
    for(int i=0;i<50;i++){
        if(acc_no[i]!=0){
            cout<<"Person "<<temp<<endl;
            cout<<"Name = "<<name[i]<<" "<<"Age = "<<age[i]<<" "<<"Account No. = "<<acc_no[i]<<" "<<"Balance = "<<balance[i]<<endl;
            temp=temp+1;
            flag=true;
        }
    }
    if(flag==false){
        cout<<endl<<"No account is added to the bank till now"<<endl;
    }
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"        1. Main Menu"<<endl;
    cout<<"        2. Exit"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        main_menu();
        break;
    case 2:
        return;
    default:
        break;
    }
}

void bank:: newaccountnumber(){
    cout<<"Enter account number ->";
    long long int acc;
    cin>>acc;
    int temp;
    for(int i=0;i<50;i++){
        if(acc==acc_no[i]){
            cout<<"The account number you have entered is already existing"<<endl;
            temp=i;
            newaccountnumber();
            return;
        }
    }
    acc_no[total]=acc;
}
void bank::newaccount(){
    cout<<"Enter your name ->";
    cin.ignore();
    //cin>>name[total];
    getline(cin,name[total]);
    cout<<endl;
    cout<<"Enter your age ->";
    cin>>age[total];
    cout<<endl;
    
    newaccountnumber();
    cout<<endl;
    cout<<"Enter account opening amount ->";
    long long int opening_balance;
    cin>>opening_balance;
    balance[total]=opening_balance;
    cout<<endl<<endl<<"Your account is successfully created"<<endl;
    total++;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"        1. Main Menu"<<endl;
    cout<<"        2. Exit"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        main_menu();
        break;
    case 2:
        return;
    default:
        break;
    }
    
}
void bank::transactions(){
    cout<<"enter the account no->";
    long long int acc;
    bool b=false;
    cin>>acc;
    int temp=0;
    for(int i=0;i<50;i++){
        if(acc==acc_no[i]){
            temp=i;
            b=true;
        }
        
    }
    if(b==false){
        cout<<"You have entered the wrong account number"<<endl;
        transactions();
        return;
    }
    cout<<"1. Deposit"<<endl;
    cout<<"2. Withdrawal"<<endl;
    int choice;long long int depo,withd;
    cin>>choice;
    if(choice==1){
        cout<<"Enter the amount->";
        cin>>depo;
        balance[temp]=balance[temp]+depo;
        cout<<endl<<"Your amount is successfully deposited"<<endl;
        cout<<endl<<endl<<"Your current Balance is "<<balance[temp]<<endl;
    }
    if(choice==2){
        cout<<"Enter the amount->";
        cin>>withd;
        balance[temp]=balance[temp]-withd;
        cout<<endl<<"Your amount is successfully withdrawal"<<endl;
        cout<<endl<<endl<<"Your current balance is "<<balance[temp]<<endl;
    }
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"        1. Main Menu"<<endl;
    cout<<"        2. Exit"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    int choice1;
    cin>>choice1;
    switch (choice1)
    {
    case 1:
        main_menu();
        break;
    case 2:
        return;
    default:
        break;
    }
}
void bank::display(){
    cout<<"enter your account number->";
    long long int acc;
    bool b=false;
    cin>>acc;
    int temp=0;
    for(int i=0;i<50;i++){
        if(acc==acc_no[i]){
            temp=i;
            b=true;
        }
        
    }
    if(b==false){
        cout<<"You have entered the wrong account number"<<endl;
        display();
        return;
    }
    cout<<"Name->"<<name[temp]<<endl;
    cout<<"age->"<<age[temp]<<endl;
    cout<<"balance="<<balance[temp]<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"        1. Main Menu"<<endl;
    cout<<"        2. Exit"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        main_menu();
        break;
    case 2:
        return;
    default:
        break;
    }
    //cout<<name<<endl;
}
void bank::deletion(){
    cout<<"Enter the account number of the account you want to close ->";
    //cout<<"enter the account no->";
    long long int acc;
    bool b=false;
    cin>>acc;
    int temp=0;
    for(int i=0;i<50;i++){
        if(acc==acc_no[i]){
            temp=i;
            b=true;
        }
        
    }
    if(b==false){
        cout<<"You have entered the wrong account number"<<endl;
        deletion();
        return;
    }
    acc_no[temp]=0;
    age[temp]=0;
    balance[temp]=0;
    name[temp]="";
    cout<<"Your account is succesfully closed"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"        1. Main Menu"<<endl;
    cout<<"        2. Exit"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        main_menu();
        break;
    case 2:
        return;
    default:
        break;
    }
}
void bank::main_menu(){
    cout<<endl<<endl<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"        1. Create a new account "<<endl;
    cout<<"        2. View existing account "<<endl;
    cout<<"        3. Do transactions "<<endl;
    cout<<"        4. Close an existing account"<<endl;
    cout<<"        5. View all accounts"<<endl;
    cout<<"        6. Exit"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"     Enter no. of one of the above->";
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        newaccount();
        break;
    case 2:
        display();
        break;
    case 3:
        transactions();
        break;
    case 4:
        deletion();
        break;
    case 5:
        viewall();
    case 6:
        return;
    default:
        break;
    }
}
void Password(){
    bank b;
    string s;
    cout<<endl<<endl;
    cout<<"Please enter the Password to login to bank ->";
    cin>>s;
    if(s=="Hello_User"){
        cout<<"Password is successfully matched "<<endl<<endl;
        b.zerobalance();
        b.main_menu();
    }
    else{
        cout<<"Wrong Password"<<endl<<endl;
        int choice;
        cout<<"1. Re-enter the Password"<<endl;
        cout<<"2. exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            Password();
            break;
        case 2:
            return;
            break;
        default:
            break;
        }
    }
}
int main(){

    Password();  // password is Hello_User
    
    return 0;
}
