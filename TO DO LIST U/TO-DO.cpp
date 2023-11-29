#include<iostream>
#include<string>
using namespace std;

void ADD_TASK();
void REMOVE_TASK();
void VIEW_LIST();

int i = 0;
string LIST[10];

int main()
{
	char main_choice;
	do
	{
		cout << "\n\nMENU";
		cout << "\n\nADD TASK (1)";
		cout << "\n\nREMOVE TASK (2)";
		cout << "\n\nVIEW LIST (3)";
		cout << "\n\nEXIT (4)";
		cout << "\n\nEnter Your Choice: ";
		cin >> main_choice;
		cin.ignore();
		if (main_choice == '1')
		{
			ADD_TASK();
		}
		else if (main_choice == '2')
		{
			REMOVE_TASK();
		}
		else if (main_choice == '3')
		{
			VIEW_LIST();
		}
		else if (main_choice == '4')
		{
			break;
		}
		else
		{
			cout << "\n\nINVALID CHOICE";
		}
	} while (main_choice != '4');

	cout << "\n\nGOOD-BYE!";
	cout << endl << endl;
	system("pause");
	return 0;
}
void ADD_TASK()
{

	cout << "\n\nEnter Your Task: ";
	getline(cin, LIST[i]);
	if (i > 9)
	{
		cout << "\nLIST IS FULL.\nPLEASE REMOVE A TASK FIRST.";
	}
	else
	{
		cout << "\n\nTASK ADDED TO THE LIST.";
	}
	i++;

}
void REMOVE_TASK()
{
	string remove = "";
	cout << "\nEnter Which Task You Want to Remove: ";
	getline(cin, remove);
	for (int i = 0; i < 10; i++)
	{
		if (remove == LIST[i])
		{
			for (int j = i; j < 9; j++)
			{
				LIST[j] = LIST[j + 1];
			}
			LIST[9] = "";
			cout << "\n\nTASK REMOVED FROM THE LIST";
			break;
		}
		else
		{
			continue;
		}
	}

}
void VIEW_LIST()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "\n" << i + 1 << "." << LIST[i];
	}

}