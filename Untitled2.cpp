#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class contact
{
	friend char add();
	friend void display();
	friend char searchname();
	friend char searchnumber();
	friend void delet();
	friend char edit();

	private:
		
	string name;
	int number;
	char mail;
	
	public :
	
};
char add()
{
	contact obj1;
	cout << "enter name" << endl;
	cin >> obj1.name;
	cout << "name: " << obj1.name << endl;
	cout << "enter number" << endl;
	cin >> obj1.number;
	cout << "number: " << obj1.number << endl;
	cout << "enter mail" << endl;
	cin >> obj1.mail;
	cout << "mail: " << obj1.mail << endl;
} 


char searchname()
{
	contact obj3;
	cout << "enter name" << endl;
	string name2;
	cin >> name2;
	if(name2 == obj3.name)
	{
	cout << "number: " << obj3.number << endl;
	cout << "mail: " << obj3.mail << endl;
	}
	else 
	cout << "there isnt this contact" << endl;
}

char searchnumber()
{
	contact obj4;
	cout << "enter number" << endl;
	int number2;
	cin >> number2;
	if(number2 == obj4.number)
	{
	cout << "name: " << obj4.name << endl;
	cout << "number: " << obj4.number << endl;
	}
	else 
	cout << "there isnt this contact" << endl;
}


char edit()
{
	contact obj6;
	int choice;
	cout << "1.edite name " << "2.edit number " << "3.edit mail" << endl; 
	cin >> choice;
	switch(choice)
	{
		case 1 :
			{
			cout << "enter old name" << endl;
			string name4;
			cin >> name4;
			if (name4== obj6.name)
			{
			cout << "enter new name" << endl;
			string name5;
			cin >> name5;
			obj6.name = name5;
			break;
			}
			else 
			cout << "there isnt this contact" << endl;
			}
 	
 		case 2 :
 			{
 			cout << "enter old number" << endl;
 			int number3;
 			cin >> number3;
 				if (number3 == obj6.number)
 				{
 				cout << "enter new number" << endl;
 				int number4;
 				cin >> number4;
 				obj6.number = number4;
 				break;
 				}
 				else 
 				cout << "there isnt this contact" << endl;
 			}
 		case 3 :
		 {
		 	
		 	cout << "enter old mail" << endl;
		 	char mail2;
		 	cin >> mail2;
		 		if (mail2 == obj6.mail)
		 		{
		 		cout << "enter new mail" << endl;
		 		char mail3;
		 		cin >> mail3;
		 		obj6.mail = mail3;
		 		break;
		 		}
		 		else
		 		cout << "there isnt this contact" << endl;
		 }	
	}
}
int main()
{
	int select;

	do
	{
		cout << "========================" << endl;
		cout << "          MENU          " << endl;
		cout << "========================" << endl;
		cout << "enter your choice" << endl;
		cout << "1.add number" << endl;
		cout << "2.search with name" << endl;
		cout << "3.search with number" << endl;
		cout << "4.edit/update" << endl;
		cout << "5.exit" << endl;
		int choice;
		cin >> choice;
		switch(choice)
		{
			case 1 :
				{
					add();
					break;
				}
			case 2 :
				{
					searchname();
					break;
				}	
			case 3 :
				{
					searchnumber();
					break;
				}
			case 4 :
				{
					edit();
					break;		
				}
			case 5 :
				{
					exit(0);
					break;
				}			
				default : 
				{
					cout << "invalid" << endl;
					break;

				}
		}
			cin >> select;
	}while(select >=1 || select <=5);
	system("puase");
	return 0;
}










