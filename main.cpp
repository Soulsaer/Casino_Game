#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<math.h>

using namespace std;
void casino(){
cout << "\n\t\t\t==============================================================================================";
	cout << "\n\t\t\t\t   CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
	cout << "\n\t\t\t\t CC          A  A      SS             III     NN N   NN   OO      OO    ";
	cout << "\n\t\t\t\tCC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO    ";
	cout << "\n\t\t\t\tCC         AAAAAAAA           SS      III     NN   N NN   OO      OO    ";
	cout << "\n\t\t\t\t   CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
	cout << "\n\t\t\t=============================================================================================\n";
}

void gamerule(){
system("cls");
	cout << "\n===============================================================================================\n";
	cout << "\t\t\tGame Rules";
	cout << "\n===============================================================================================";
	cout << "\n1. Choose Number Between 1 To 10";
	cout << "\n2. Winning Amount Will Be 10 Times Of Bid Amount";
	cout << "\n3. Loose Amount Will Be Biding Amount";
	cout << "\n4. You Can Leave A Game Any Time";
	cout << "\n===============================================================================================\n";
}


int main()
{
    string name ;
    int amount;
    int betamount;
    int val;
    char choice;
    casino();
    cout<<"Enter your name : ";
    getline(cin,name);

    cout<<"Deposit Your Amount : ";
    cin>>amount;

do{
    system("cls");
    
    gamerule();
    
    cout<<"Welcome "<<name<<" Are you Ready to Play ?"<<endl;

    do{
        cout<<"Enter the bet Amount : $ ";
        cin>>betamount;
        if(betamount>amount)
        {
            cout<<"\n Insufficient Balance "<<endl;
        }
        else
        {
            break;
        }
    }
    while(betamount>amount);
      
      
      do{
            cout<<"Guess the number : ";
            cin>>val;
            if(val<=0||val>10)
            {
                cout<<"\n number should be between 1 to 10 ";
            }
        }while(val<=0||val>10);

        int dice = rand()%10+1;
        if(dice==val)
        {
            cout<<"\n Hurray You Won !!"<<betamount*10<<"$";
            amount = amount +betamount*10;
        }
        else
        {
            cout<<"\n Sorry You Lose "<<betamount<<"$";
            amount = amount - betamount;
        }

        cout<<"\n The Winning number is :"<<dice<<"\n";
        cout<<"\n Your remaining Amount is :"<<amount<<"$\n"<<endl;
        
        if(amount<=0)
        {
            cout<<"You don't have enough money to Play"<<endl<<endl;
            char ch='n' ;
            cout<<"Add Balance (Press Y)  "<<endl;
            cout<<"Exit (press N)"<<endl;
            cin>>ch;
            if(ch=='y'||ch=='Y')
            {
                cout<<"Enter deposit amount : ";
                cin>>amount;
            }
            else
            {
                break;
            }

        }

        cout << "\nYou Want To Play Again Press (y/n)? ";
        cin>>choice;
        if(choice!='y'||choice!='Y')
        {
            break;
        }
    }while(choice!='y'|| choice !='Y');
    
            cout << "\n===============================================================================================\n";
	        cout << "Thanks For Playing Game Your Current Balance Is " << amount << "$";
	        cout << "\n===============================================================================================\n";
        
        

    return 0;
}