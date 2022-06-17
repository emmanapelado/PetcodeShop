#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;
void login();
void regstr();
void forgot();
void shop();



int main()
{
int ch;
 
	cout<<"1.Login\n2.Register\n3.Forgot credential\n4.Shop\n Enter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			login();
			break;
		case 2:
			regstr();
			break;
		case 3:
			forgot();
			break;
		case 4:
			shop();
	
		default:
			cout<<"Select new Transaction."<<endl;
	}
	cout<<endl;
	int x;
	cout<<"Back to Main Menu:";
	cin>>x;
	if(x)
	{
		main();
	}
	else
	{
		return 0;
	}
}
void regstr()
{
	int t=0;
	string usr,pas,u,p;
	system("cls");
	cout<<"Enter username:";
	cin>>usr;
	ofstream write("username.txt",ios::app); // username file created which of append type 
	ifstream read("username.txt");
	while(read>>u>>p)
	{
		if(u==usr)
		{
			t=1;
			break;
		}
	}
	if(t==1)
	{
		cout<<"Username is already taken."<<endl;
	}
	else
	{
		cout<<"Enter password:";
		cin>>pas;
		write<<usr<<" "<<pas<<endl;
		cout<<"Registration is successfull."<<endl;
	}
	write.close();
}
void login()
{
	int t=0;
	string usr,pas,u,p;
	system ("cls");
	cout<<"Enter the username: ";
	cin>>usr;
	cout<<"Enter the password: ";
	cin>>pas;
	ifstream read("username.txt"); //ifstream uses here for reading the file
	while(read>>u>>p) // while loop uses here for reading the file till end and in each iteration registered username and password store in u and p respectively
	{
		if(u==usr && p==pas)
		{
			t=1;
			break;
		}
	}
	read.close();
	if(t==1)
	{
		cout<<"Login successfull"<<endl;
	}
	else
	{
		cout<<"Login error."<<endl;
	}

}
void forgot()
{
	int ch;
	system("cls");
	cout<<"1.Search your account by username\n2.Search Your account by password\n3.Mainmenu\n4.Enter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				int t=0;
				string su,u,p;
				cout<<"Enter your remembered username:";
				cin>>su;
				ifstream read("username.txt");
				while(read>>u>>p)
				{
					if(su==u)
					{
						t=1;
						break;
					}
				}
				read.close();
				if(t==1)
				{
					cout<<"Congrats! account found\nPassword is: "<<p<<endl;
				}
				else
				{
					cout<<"Sorry, account not found"<<endl;
				}
				break;
			}
		case 2:
			{
				int t=0;
				string sp,u,p;
				cout<<"Enter your remembered password:";
				cin>>sp;
				ifstream read("username.txt");
				while(read>>u>>p)
				{
					if(sp==p)
					{
						t=1;
						break;
					}
				}
				read.close();
				if(t==1)
				{
					cout<<"Congrats! account found\nUsername is: "<<u<<endl;
				}
				else
				{
					cout<<"Sorry, account not found"<<endl;
				}
				break;
			}
	    case 3:
		    {
		    	cout<<endl;
		    	main();
		    	break;
			}
		default:
			{
				cout<<"Wrong choice selected.press a key to try again!"<<endl;
				forgot();
			}
			
	}
}
void shop()
{  
char name[30],choice;	
int trans=0,var=1,ans=1;
char password;
int bank;
 int discount;
 int bill;
 int age;
 
	float amount;
	float bankno;
	float num;
	float from;
char *kinds[34] = {" Mini Rex","  Holland Lop"," Mini Lop"," Lionhead Rabbit"," Lop Rabbit"," Shit-tzu"," Pug"," Pomeranian"," Siberian Husky"," Beagle"," Labradon Retriever"," Chihuahua"," Persian Cat"," Siamese Cat"," Himalayan Cat"," Exotic Shorthair"," Russian Blue", " American Curl"," American Shorthair"," Betta Fish"," Flowerhorn Cichlids"," Gold Fish"," Guppy"," Molly "," Small cage for Rabbit, Dog and Cat"," Big Cage for Rabbit, Dog and Cat"," Small Aquarium with Oxygen"," Big Aquarium with Oxygen"," Shampoo"," Foods for pets"," Grooming"," Bathing"," Dog and Cat Training"," Pet Massage Therapy"},pitz; 
int order1=0,order2=0,order3=0,order4=0,order5=0,order6=0,order7=0,order8=0,order9=0,order10=0,order11=0,order12=0,order13=0,order14=0,order15=0,order16=0,order17=0,order18=0,order19=0,order20=0,order21=0,order22=0,order23,order24,order25,order26,order27,order28,order29,order30,order31,order32,order33,order34,quantity,pets,minrex=450,holop=350,minlop=350,libit=500,lopbit=300,shizu=5000,pug=8000,pomrian=10000,sibky=15000,beagle=10000,labver=25000,chihua=15000,percat=5000,siacat=8000,himcat=7000,exhair=10000,ruslue=8000,amurl=4000,amair=6000,betish=500,floids=800,gosh=150,gupy=150,moly=150,scdcr=500,bcdcr=2500,sao=800,bao=1500,shpoo=500,ffp=500,groom=1000,bath=800,dct=1500,pmt=900;
float payable=0,cash,price,change,total1=0,total2=0,total3=0,total4=0,total5=0,total6=0,total7=0,total8=0,total9=0,total10=0,total11=0,total12=0,total13=0,total14=0,total15=0,total16=0,total17=0,total18=0,total19=0,total20=0,total21=0,total22=0,total23=0,total24=0,total25=0,total26=0,total27=0,total28=0,total29=0,total30=0,total31=0,total32=0,total33=0,total34=0,sum = 0,n; 

system ("color F5");


system ("cls");
 trans++;
 cout<<"============================================================"<<endl;
 cout<<"*     ! ! ! P E T S C O D E S H O P ! ! !     *"<<endl;
 cout<<"============================================================"<<endl;
 cout<<"\nEnter your username: ";
 cin>>name;
 cout<<"\nEnter Password: ";
 cin>>password;
  do
  {
  	
   system("cls");
   cout<<"\n CASHIER : Nicole "<<endl;
   
   cout<<"Proceed to the list of pets? ";
   cout<<" \n Press [Y] for Yes, and [N] for No.\n\n\tEnter Choice : ";
   cin >> choice;
  } while ((choice !='Y')&&(choice !='N')&&(choice !='y')&&(choice !='n'));
  system("cls");
 


    cout<<"\a\t\t\t     -Welcome to Pets Code Shop-\n"<<endl;
    cout<<"\tPlease choose your order: "<<endl;
    
    cout<<"\t\tList of Pets\t\n\n";
    
    cout<<"\n\tRabbit\n";
    
    cout<<"\n\t\t 1)Mini Rex                           P450.00";
    cout<<"\n\t\t 2)Holland Lop                        P350.00";
    cout<<"\n\t\t 3)Mini Lop                           P350.00";
    cout<<"\n\t\t 4)Lionhead Rabbit                    P500.00";
    cout<<"\n\t\t 5)Lop Rabbit                         P300.00";
    
    cout<<" \n\tDog\n";
    
    cout<<"\n\t\t 6)Shit-tzu                           P5000.00";
    cout<<"\n\t\t 7)Pug                                P8000.00";
    cout<<"\n\t\t 8)Pomenarian                         P10000.00";
    cout<<"\n\t\t 9)Siberian Husky                     P15000.00";
    cout<<"\n\t\t 10)Beagle                            P10000.00";
    cout<<"\n\t\t 11)Labradon Retriever                P25000.00";
    cout<<"\n\t\t 12)Chihuahua                         P15000.00";
    
    cout<<" \n\tCat\n";
    
    cout<<"\n\t\t 13)Persian Cat                       P5000.00";
    cout<<"\n\t\t 14)Siamese Cat                       P8000.00";
    cout<<"\n\t\t 15)Himalayan Cat                     P7000.00";
    cout<<"\n\t\t 16)Exotic Shorthair                  P10000.00";
    cout<<"\n\t\t 17)Russian Blue                      P8000.00";
    cout<<"\n\t\t 18)American Curl                     P4000.00";
    cout<<"\n\t\t 19)American Shorthair                P6000.00";
    
    cout<<" \n\tFish\n";
    
    cout<<"\n\t\t 20)Betta Fish                        P500.00";
    cout<<"\n\t\t 21)Flowerhorn Cichlids               P800.00";
    cout<<"\n\t\t 22)Gold Fish                         P150.00";
    cout<<"\n\t\t 23)Guppy                             P150.00";
    cout<<"\n\t\t 24)Molly                             P150.00";
    
    cout<<"\n\tCages for Pets\n";
    
    cout<<"\n\t\t 25)Small cage for Rabbit, Dog and Cat          P500.00";
    cout<<"\n\t\t 26)Big cage for Rabbit, Dog and Cat            P2500.00";
    
    cout<<"\n\tAquarium\n";
    
    cout<<"\n\t\t 27)Small Aquarium with Oxygen                  P800.00";
    cout<<"\n\t\t 28)Big Aquarium with Oxygen                    P1500.00";
    
    cout<<"\n\tAccessories and Foods\n";
    
    cout<<"\n\t\t 29)Shampoo                                     P500.00";
    cout<<"\n\t\t 30)Foods for Pets                              P500.00";
    
    cout<<"\n\tServices (Dogs and Cats Only)\n";
    
    cout<<"\n\t\t 31)Grooming                                    P1000.00";
    cout<<"\n\t\t 32)Bathing                                     P800.00";
    cout<<"\n\t\t 33)Dog and Cat Training                        P1500.00";
    cout<<"\n\t\t 34)Pet Massage Therapy                         P900.00";
    
    cout<<endl;
  
              
  do {
      cout<<"\n\t\t Please choose your order from the list: ";
                cin>>pets;   
      payable=payable+total1;
  

      
switch (pets) {

        case 1:
                cout<<"\n\tYou ordered for:"<<kinds[0]<<endl;
                cout<<"\tPrice: P"<<minrex<<endl;
                cout<<"\tHow many: ";
                                cin>>order1;
                total1=minrex*order1;
                cout<<"\tTotal: P"<<total1<<endl;
                break;                      
        case 2:
                cout<<"\n\tYou ordered for:"<<kinds[1]<<endl;
                cout<<"\tPrice: P"<<holop<<endl;
                cout<<"\tHow many: ";
                                cin>>order2;
                total2=holop*order2;
                cout<<"\tTotal: P"<<total2<<endl;
                break;
        case 3:
                cout<<"\n\tYou ordered for:"<<kinds[2]<<endl;
                cout<<"\tPrice: P"<<minlop<<endl;
                cout<<"\tHow many: ";
                                cin>>order3;
                total3=minlop*order3;
                cout<<"\tTotal: P"<<total3<<endl;
                break;
        case 4:
                cout<<"\n\tYou ordered for:"<<kinds[3]<<endl;
                cout<<"\tPrice: P"<<libit<<endl;
                cout<<"\tHow many: ";
                                cin>>order4;
                total4=libit*order4;
                cout<<"\tTotal: P"<<total4<<endl;              
                break;
        case 5:
                cout<<"\n\tYou ordered for:"<<kinds[4]<<endl;
                cout<<"\tPrice: P"<<lopbit<<endl;
                cout<<"\tHow many: ";
                                cin>>order5;
                total5=lopbit*order5;
                cout<<"\tTotal: P"<<total5<<endl;
                break;
        case 6:
		        cout<<"\n\tYou ordered for:"<<kinds[5]<<endl;
                cout<<"\tPrice: P"<<shizu<<endl;
                cout<<"\tHow many: ";
                                cin>>order6;
                total6=shizu*order6;
                cout<<"\tTotal: P"<<total6<<endl;
                break;
        case 7:
		        cout<<"\n\tYou ordered for:"<<kinds[6]<<endl;
                cout<<"\tPrice: P"<<pug<<endl;
                cout<<"\tHow many: ";
                                cin>>order7;
                total7=pug*order7;
                cout<<"\tTotal: P"<<total7<<endl;
                break;
        case 8:
		        cout<<"\n\tYou ordered for:"<<kinds[7]<<endl;
                cout<<"\tPrice: P"<<pomrian<<endl;
                cout<<"\tHow many: ";
                                cin>>order8;
                total8=pomrian*order8;
                cout<<"\tTotal: P"<<total8<<endl;
                break;
        case 9:
        	    cout<<"\n\tYou ordered for:"<<kinds[8]<<endl;
                cout<<"\tPrice: P"<<sibky<<endl;
                cout<<"\tHow many: ";
                                cin>>order9;
                total9=sibky*order9;
                cout<<"\tTotal: P"<<total9<<endl;
                break;
        case 10:
        	    cout<<"\n\tYou ordered for:"<<kinds[9]<<endl;
                cout<<"\tPrice: P"<<beagle<<endl;
                cout<<"\tHow many: ";
                                cin>>order10;
                total10=beagle*order10;
                cout<<"\tTotal: P"<<total10<<endl;
                break;
        case 11:
        	    cout<<"\n\tYou ordered for:"<<kinds[10]<<endl;
                cout<<"\tPrice: P"<<labver<<endl;
                cout<<"\tHow many: ";
                                cin>>order11;
                total11=labver*order11;
                cout<<"\tTotal: P"<<total11<<endl;
                break;
        case 12:
        	    cout<<"\n\tYou ordered for:"<<kinds[11]<<endl;
                cout<<"\tPrice: P"<<chihua<<endl;
                cout<<"\tHow many: ";
                                cin>>order12;
                total12=chihua*order12;
                cout<<"\tTotal: P"<<total12<<endl;
                break;
        case 13:
        	    cout<<"\n\tYou ordered for:"<<kinds[12]<<endl;
                cout<<"\tPrice: P"<<percat<<endl;
                cout<<"\tHow many: ";
                                cin>>order13;
                total13=percat*order13;
                cout<<"\tTotal: P"<<total13<<endl;
                break;
        case 14:
        	    cout<<"\n\tYou ordered for:"<<kinds[13]<<endl;
                cout<<"\tPrice: P"<<siacat<<endl;
                cout<<"\tHow many: ";
                                cin>>order14;
                total14=siacat*order14;
                cout<<"\tTotal: P"<<total14<<endl;
                break;
        case 15:
        	    cout<<"\n\tYou ordered for:"<<kinds[14]<<endl;
                cout<<"\tPrice: P"<<himcat<<endl;
                cout<<"\tHow many: ";
                                cin>>order15;
                total15=himcat*order15;
                cout<<"\tTotal: P"<<total15<<endl;
                break;
        case 16:
        	    cout<<"\n\tYou ordered for:"<<kinds[15]<<endl;
                cout<<"\tPrice: P"<<exhair<<endl;
                cout<<"\tHow many: ";
                                cin>>order16;
                total16=exhair*order16;
                cout<<"\tTotal: P"<<total16<<endl;
                break;
        case 17:
        	    cout<<"\n\tYou ordered for:"<<kinds[16]<<endl;
                cout<<"\tPrice: P"<<ruslue<<endl;
                cout<<"\tHow many: ";
                                cin>>order17;
                total17=ruslue*order17;
                cout<<"\tTotal: P"<<total17<<endl;
                break;
        case 18:
        	    cout<<"\n\tYou ordered for:"<<kinds[17]<<endl;
                cout<<"\tPrice: P"<<amurl<<endl;
                cout<<"\tHow many: ";
                                cin>>order18;
                total18=amurl*order18;
                cout<<"\tTotal: P"<<total18<<endl;
                break;
        case 19:
        	    cout<<"\n\tYou ordered for:"<<kinds[18]<<endl;
                cout<<"\tPrice: P"<<amair<<endl;
                cout<<"\tHow many: ";
                                cin>>order19;
                total19=amair*order19;
                cout<<"\tTotal: P"<<total19<<endl;
                break;
        case 20:
        	    cout<<"\n\tYou ordered for:"<<kinds[19]<<endl;
                cout<<"\tPrice: P"<<betish<<endl;
                cout<<"\tHow many: ";
                                cin>>order20;
                total20=betish*order20;
                cout<<"\tTotal: P"<<total20<<endl;
                break;
        case 21:
        	    cout<<"\n\tYou ordered for:"<<kinds[20]<<endl;
                cout<<"\tPrice: P"<<floids<<endl;
                cout<<"\tHow many: ";
                                cin>>order21;
                total21=floids*order21;
                cout<<"\tTotal: P"<<total21<<endl;
                break;
        case 22:
        	    cout<<"\n\tYou ordered for:"<<kinds[21]<<endl;
                cout<<"\tPrice: P"<<gosh<<endl;
                cout<<"\tHow many: ";
                                cin>>order22;
                total22=gosh*order22;
                cout<<"\tTotal: P"<<total22<<endl;
                break;
        case 23:
        	    cout<<"\n\tYou ordered for:"<<kinds[22]<<endl;
                cout<<"\tPrice: P"<<gupy<<endl;
                cout<<"\tHow many: ";
                                cin>>order23;
                total23=gupy*order23;
                cout<<"\tTotal: P"<<total23<<endl;
                break;
        case 24:
        	    cout<<"\n\tYou ordered for:"<<kinds[23]<<endl;
                cout<<"\tPrice: P"<<moly<<endl;
                cout<<"\tHow many: ";
                                cin>>order24;
                total24=moly*order24;
                cout<<"\tTotal: P"<<total24<<endl;
                break;
        case 25:
        	    cout<<"\n\tYou ordered for:"<<kinds[24]<<endl;
                cout<<"\tPrice: P"<<scdcr<<endl;
                cout<<"\tHow many: ";
                                cin>>order25;
                total25=scdcr*order25;
                cout<<"\tTotal: P"<<total25<<endl;
                break;
        case 26:
        	    cout<<"\n\tYou ordered for:"<<kinds[25]<<endl;
                cout<<"\tPrice: P"<<bcdcr<<endl;
                cout<<"\tHow many: ";
                                cin>>order26;
                total26=bcdcr*order26;
                cout<<"\tTotal: P"<<total26<<endl;
                break;
        case 27:
        	    cout<<"\n\tYou ordered for:"<<kinds[26]<<endl;
                cout<<"\tPrice: P"<<sao<<endl;
                cout<<"\tHow many: ";
                                cin>>order27;
                total27=sao*order27;
                cout<<"\tTotal: P"<<total27<<endl;
                break;
        case 28:
        	    cout<<"\n\tYou ordered for:"<<kinds[27]<<endl;
                cout<<"\tPrice: P"<<bao<<endl;
                cout<<"\tHow many: ";
                                cin>>order28;
                total28=bao*order28;
                cout<<"\tTotal: P"<<total28<<endl;
                break;
        case 29:
        	     cout<<"\n\tYou ordered for:"<<kinds[28]<<endl;
                cout<<"\tPrice: P"<<shpoo<<endl;
                cout<<"\tHow many: ";
                                cin>>order29;
                total29=shpoo*order29;
                cout<<"\tTotal: P"<<total29<<endl;
                break;
        case 30:
        	    cout<<"\n\tYou ordered for:"<<kinds[29]<<endl;
                cout<<"\tPrice: P"<<ffp<<endl;
                cout<<"\tHow many: ";
                                cin>>order30;
                total30=ffp*order30;
                cout<<"\tTotal: P"<<total30<<endl;
                break;
        case 31:
        	    cout<<"\n\tYou ordered for:"<<kinds[30]<<endl;
                cout<<"\tPrice: P"<<groom<<endl;
                cout<<"\tHow many: ";
                                cin>>order31;
                total31=groom*order31;
                cout<<"\tTotal: P"<<total31<<endl;
                break;
        case 32:
        	    cout<<"\n\tYou ordered for:"<<kinds[31]<<endl;
                cout<<"\tPrice: P"<<bath<<endl;
                cout<<"\tHow many: ";
                                cin>>order32;
                total32=bath*order32;
                cout<<"\tTotal: P"<<total32<<endl;
                break;
        case 33:
        	    cout<<"\n\tYou ordered for:"<<kinds[32]<<endl;
                cout<<"\tPrice: P"<<dct<<endl;
                cout<<"\tHow many: ";
                                cin>>order33;
                total33=dct*order33;
                cout<<"\tTotal: P"<<total33<<endl;
                break;
        case 34:
        	    cout<<"\n\tYou ordered for:"<<kinds[33]<<endl;
                cout<<"\tPrice: P"<<pmt<<endl;
                cout<<"\tHow many: ";
                                cin>>order34;
                total34=pmt*order34;
                cout<<"\tTotal: P"<<total34<<endl;
                break;
        default:
                cout<<"\a\n\n\t\t\tSorry it is not available here."<<endl<<endl;
                char f;
                cout<<"\tWould you like to reset the program to choose order again? (Y or N): ";
                cin>>f;
                system("cls");
                if((f=='Y')||(f=='y'))  {
                WinExec("a-piece-of-cake.exe", SW_SHOW);
                exit(1);
                } else {
              
                }
                break;
                
                }
                cout << "\n\t\t\tDo you want to order another (y/n)? ";
                		                cin >> pitz;
				                }
                while ((pitz == 'y')||(pitz == 'Y'));

                payable=payable+total1+total2+total3+total4+total5+total6+total7+total8+total9+total10+total11+total12+total13+total14+total15+total16+total17+total18+total19+total20+total21+total22+total23+total24+total25+total26+total27+total28+total29+total30+total31+total32+total33+total34;
                cout<<"\n\tAmount to be paid: P"<<payable;
        
        do {
                cout<<"\n\tYour cash is: P";
                        cin>>cash;
        if (cash<payable){
                cout<<"\a\n\t\t\t     Your money is not enough. "<<endl;
                                }
           }
           
        while (cash<payable);
        
          do
  {
   system("cls");
   
   cout<<"Do you have senior I'D? ";
   cout<<" \n Press [Y] for Yes, and [N] for No.\n\n\tEnter Choice : ";
   cin >> choice;
  } while ((choice !='Y')&&(choice !='N')&&(choice !='y')&&(choice !='n'));
   
  system("cls");
  switch (choice)
  case 1== 'Y'|'y':
  	cout<<""<<endl;
  	
  	cout<<"Enter your Name:";
  	cin>>name;
  	cout<<"Enter your Age:";
  	cin>>age;
  	cout<<"Enter your Senior ID number:";
  	cin>>num;
  cout << "Enter bill amount:";
	std:: cin >>bill;

	std::cout << "Enter discount percentage:";
	std::cin >> discount;

	 int afterDiscount = bill - (bill * discount / 100);

	std:: cout << "After discount yourbilll is: " << afterDiscount;
	cin>>discount;
        
       
        
        cout<<"=Payment Option"<<endl;
        cout<<"Bank Transfer"<<endl;
	cout << "1. BDO" << endl;
	cout << "2. BPI" << endl;
	cout << "3. Gcash" << endl;
	cout << "4. Cash"<< endl;
	cout<<"Choose Your Transaction"<<endl;
	cin>> bank;
	
	if(bank==1){
		cout << "BDO" << endl;
		cout<<"Transfer amount"<<endl;
		cin>>amount;
	}
	 else if (bank==2){
	    cout << "BPI" << endl;
		cout<<" Transfer amount: " << endl;
		cin >> amount;		
	}
	{
	 if (bank==3)
	 cout<<"\n\tGcash Name: Petscodeshop\n\tGcash Number: 09182354904\n\n\t"<< endl;
	 
	 
	 cout<<"Please enter your bank account number or Gcash Number:"<<endl;
	cin>>bankno;
	
	cout<<"This payment will recieved by: Pet Code Shop"<<endl;
	}
	 if (bank==4){
	 while (cash<payable);
        
        change=cash-payable;
        cout<<"\n\tYour change is: P"<<change<<"\n\n"<<endl<<endl;	
	}
	
        
        cout<<"\t\t  For your receipt: ";
        system("pause");
        system("cls");
        system("color E0");
        
        
        
        
        
        
        
        cout<<"\t\t\t O F F I C I A L    R E C E I P T"<<endl;
        cout<<"\n\t\t\t         -Pets Code Shop-\n";
        
        
        cout<<"\n\tYou ordered for numbers: ";

        quantity=order1+order2+order3+order4+order5+order6+order7+order8+order9+order10+order11+order12+order13+order14+order15+order16+order17+order18+order19+order20+order21+order22+order23+order24;
        cout<<"\n\tTotal quantity: "<<quantity;
        cout<<"\t\t\t\t    Cash: P"<<cash;
        cout<<"\n\tTotal: P"<<payable;
        cout<<"\t\t\t\t\t    Change: P"<<change;
        cout<<"\a\n\t\t\t    Thank you,please come again!"<<endl;
        cout<<"\n\tAlso try our other Services "<<endl;
        cout<<"\n\t\t 1)Grooming                           P1000.00";
        cout<<"\n\t\t 2)Bathing                            P800.00";
        cout<<"\n\t\t 3)Dogs and Cats Training             P1500.00";
        cout<<"\n\t\t 4)Pets Massage Therapy               P900.00"<<endl;
        cout<<"\n\n\t*We accept all kinds of occasions"<<endl;
        cout<<"\tFor *orders *comments or *suggestions please contact: 09169475449"<<endl;
        cout<<"\tEmail @: petscodeshop@yahoo.com"<<endl;
        cout <<"\n\tTime: "<<__TIME__;
        cout<<"\t\t\t\tCreated by: Ronaldo A. Manzanilla";
        cout<<"\n\tDate: "<<__DATE__<<endl;
        
        
	
 
getchar();
cin.get();



}


