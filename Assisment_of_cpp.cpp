
					//=================ATM Banking Application=================

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
class ATM
{
	public :
		char ch;
		double Balance=100000,ac_no,option;
		char name[30],add[20],location[30];
		
	//Display Date and Time....		
	
	void Get_details()
	{
	
		cout<<"\n=================Welcome to ATM=================\n";
		cout<<"\n\t\t-----------------\n\n";
		
		cout<<"\t";
		cout<<"Current date : ";
		cout<<__DATE__;
		cout<<" ";
		cout<<__TIME__<<endl;
		cout<<"\n\t\t-----------------\n";
		cout<<"\n=================================================\n";
		
		cout<<"\nPress 1 and Then Press Enter to Access Your Account Via Pin Number\n";
		cout<<"\t\tor\t\t";
		cout<<"\nPress 0 and Press Enter to get Help\n";
	}
	
	//ATM Password Entering option.....
	
	char Passward_Details()
	{
		int i;
		
		cout<<"\n\nEnter your choice number :";
		cin>>i;
		
		switch(i)
		{
			case 1 :
				Acc_access_Pinnum();
				break;
				
				case 0 :
					Acc_get_Help();
					break;
					
					default:
						cout<<"Please Enter Correct Choice Number";
		}
				
	}
	
	//Passward entering process.....
	
	char Acc_access_Pinnum()
	{
		int Pin,c=270495,i;		
	
		cout<<"\n==========ATM ACCOUNT ACCESS==========\n\n";
		cout<<"Enter Your Acc Pin Access Number![Only one attempt is allowed]\n";
		cout<<"\n============================================\n";
		cin>>Pin;
	do
	{
		//Cash related process and balance enquiry option using switch case.....
		
		if(c==Pin)
		{
			cout<<"\n============ATM Main Menu Screen============\n\n";
			cout<<"\nEnter [1] To Deposit  Cash";
			cout<<"\nEnter [2] To Withdraw Cash";
			cout<<"\nEnter [3] To Balance  Inquiry";
			cout<<"\nEnter [4] To Exit ATM\n";	
			
			cout<<"\nEnter Your Choice Number : ";
			cin>>i;
									
			switch(i)
			{
				case 1 :
					Deposit_Cash();
					break;
					
					case 2 :
						Withdraw_Cash();
						break;
						
						case 3 :
							Balance_Inquiry();
							break;
							
							case 4 :
								cout<<"Exit ATM";
								break;
								
								default:
									cout<<"\nPlease Enter Correct Number";
									break;
									
			}
			
		
		}
	
	//Only one attempt allowed of ATM access
	
	else
	{		
			cout<<"\n============THANK YOU============\n";
			cout<<"\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n";
			cout<<"\n=========================================\n";
		if(c!=Pin)	
		{
			cout<<"\n==========ATM ACCOUNT ACCESS==========\n\n";
			cout<<"Enter Your correct Acc Pin Access Number![Only one attempt is allowed]\n";
			cout<<"\n============================================\n";
			cin>>Pin;
		}
		else
		{
			cout<<"Thanks";
		}
		
	}
	cout<<"\n\nDo you want to continue prees (y & n) : ";
	cin>>ch;
    	
	}
	while(ch == 'y' || ch == 'Y');
}

	//If passward incorrect then go for get help section for help.......

	int Acc_get_Help()
	{
			cout<<"\n==========ATM ACCOUNT ACCESS==========\n\n";
			cout<<"You must have the correct pin number to access this account.";
			cout<<"\nSee your bank representative for assistance during bank opening hours";
			cout<<"\nThanks for,your choice today!!\n";
	}
	
	//deposit section......
	
	char Deposit_Cash()
	{		
	
		char name[30],add[20],location[30];
		int Deposit=0;
		
		cout<<"\n=============ATM ACCOUNT DEPOSIT SYSTEM===========\n";
		cout<<"\nThe name of the account holder are : ";
		cin>>name;
		
		cout<<"The Account Holder's address is : ";
		cin>>add;
		
		cout<<"The Branch location is : ";
		cin>>location;
		
		cout<<"Present available balance is :"<<Balance;
		
		cout<<"\nEnter the amount to be deposited Rs : ";
		cin>>Deposit;
		
		Balance=Balance+Deposit;
		
		cout<<"Your new available Balanced Amount is Rs. : "<<Balance;
		
		cout<<"\t\t\nThank You!";
	}
	
	//Withdraw section......
		
	char Withdraw_Cash()
	{
		char name[30],add[20],location[30];
		double ac_num,Withdraw=0;
		
		cout<<"\n=============ATM ACCOUNT WITHDRAW SYSTEM===========\n";
		
		cout<<"\nThe name of the account holder are : ";
		cin>>name;
		
		cout<<"The Account Holder's address is : ";
		cin>>add;
		
		cout<<"The Branch location is : ";
		cin>>location;
		
		cout<<"Enter Your Account Number : ";
		cin>>ac_num;
		
		cout<<"Enter the amount to be withdraw Rs : ";
		cin>>Withdraw;
		
		if(Balance>=Withdraw)
		{
			Balance=Balance-Withdraw;
			cout<<"Available balance is after withdraw : "<<Balance;
		}
		else
		{
			cout<<"Insufficient Available Balance in your account.";
			cout<<"\t\t\t\nSorry!!";
		}
	}
	
	//Balance inquiry section......
	
	int Balance_Inquiry()
	{
		cout<<"Account Holder Available Balance is : "<<Balance;
	}
};

//Function calling creating object........

main()
{
	ATM SBI;
	SBI.Get_details();
	SBI.Passward_Details();	
}
