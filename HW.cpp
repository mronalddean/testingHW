#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string username="";
	string password="";
	bool LSuccess=false;
	do {
			cout<<"Enter username: ";
			cin>>username;
			cout<<"Enter password: ";
			cin>>password;
			if (username=="Dean" && password=="CcS51423")
			{
				cout<<"Thank You LogIn Success \n";
				LSuccess == true;
			}
			else 
			{
				cout<<"Try again! \n";
			}
		
	}while (LSuccess);
	
	system("pause");
    return 0;
}
