// Security System: Password protected file


#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int option = 0;
	string p,o,p1,p2,pass;   // Password
	while(option!=3)
	{
		cout<<"1.Change the password\n2.Login to see the information\n3.Quit"<<endl;
		cout<<"Enter your choice:";
		cin>>option;
		switch(option)
		{
			case 1:
				{
					ifstream read("Security.txt");           // open the file: reading purpose     
					cout<<"Enter old password:";
					cin>>o;                                        
					while(read>>p)                                 
					{
						
						if(o==p)
						{
							read.close(); 
							ofstream write("Security.txt");    // open the file: writing purpose
							cout<<"Enter new password:";
							cin>>p1;
							cout<<"Confirm new password:";
							cin>>p2;
							if(p1==p2)
							{
								write<<p1;                                // password udpated
								cout<<"Password change successful"<<endl<<endl;
							}
							write.close();                               // close write operation
							break;
						}
						else
						{
							cout<<"Enter a valid password."<<endl<<endl;
						}
					}
					break;
				}
			case 2:
				{
					ifstream read("Security.txt");
					cout<<"Enter a password:";
					cin>>pass;
					while(read>>p)
					{
							
						if(pass==p)
						{
							cout<<"Access granted"<<endl<<endl;
							break;
						}
						else
						{
							cout<<"Password incorrect"<<endl;
						}
					}
					read.close();
					break;
				}
			case 3:
				{
					break;
				}
			default:
				cout<<"Enter a valid choice";
		}
	}
	return 0;
}