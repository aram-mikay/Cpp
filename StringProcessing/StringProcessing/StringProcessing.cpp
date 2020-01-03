/*Aram Mikayelian
CSIS - 135 - Spring 2017 Wed Night
HW #5*/


#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

using namespace std;

//function prototypes
string strReverse(string);
string invString(string);
string strUpper(string);
int countWord(string);
int countConsonants(string);

int main()
{
	string userString = "";
	int i = 0;
	char choice;


	cout << "Please enter a word, a sentence, or a string of numbers." << endl;
	getline(cin, userString);

	do
	{

		cout << "\nUSE THIS MENU TO MANIPULATE YOUR STRING\n"
			 << "---------------------------------------" << endl;
		cout << "1) Inverse String\n" 
			 << "2) Reverse String\n" 
			 << "3) To Uppercase\n"
			 << "4) Count Number Words\n" 
			 << "5) Count Consonants\n" 
			 << "6) Enter a Different String\n"
			 << "7) Print the string\n" 
			 << "Q) Quit\n";

		cin >> choice;
		cin.ignore();

		while (choice < '1' || choice > '7' && choice != 'q' && choice != 'Q')
		{
			cout << "\nInvalid selection. Please try again." << endl;
			cout << "\nUSE THIS MENU TO MANIPULATE YOUR STRING\n"
				<< "---------------------------------------" << endl;
			cout << "1) Inverse String\n"
				<< "2) Reverse String\n"
				<< "3) To Uppercase\n"
				<< "4) Count Number Words\n"
				<< "5) Count Consonants\n"
				<< "6) Enter a Different String\n"
				<< "7) Print the string\n"
				<< "Q) Quit\n";
			cin >> choice;
		}
		
		if (choice == '1')
		{			
			userString = invString(userString);							
		}

		else if (choice == '2')
		{			
			userString = strReverse(userString);				
		}

		else if (choice == '3')
		{
			userString = strUpper(userString);
		}

		else if (choice == '4')
		{
			countWord(userString);
			
		}

		else if (choice == '5')
		{
			userString = countConsonants(userString);			
		}
		else if (choice == '6')
		{
			cout << "\nEnter a different string : " << endl;
			getline(cin, userString);
		}

		else if (choice == '7')
		{
			cout << "\nThe current string is: " << userString << endl;			
		}

		else if (choice == 'q' || choice == 'Q')
		{
			cout << "\nYou have chosen to quit the program. Thank you!" << endl;
		}
						
	} while (choice >= '1' && choice <= '7' && choice != 'q' && choice != 'Q');


	//system("PAUSE");
	return 0;
}


string invString(string userString) // Inverse String function
{
	string tempString = "";

	for (int i = 0; i < userString.length(); i++)
	{
		if (isupper(userString[i]))
		{
			userString[i] = (tolower(userString[i]));
			tempString += userString[i];
		}
		else if (islower(userString[i]))
		{
			userString[i] = (toupper(userString[i]));
			tempString += userString[i];
		}
		else
		{
			tempString += userString[i];
		}
	}

	return tempString;
}

string strReverse(string str) // Reverse String Function
{
	string tempString = "";
	
	for (int i = str.length() - 1; i >= 0; i--)
	{
		
		tempString += str[i];

	}

	return tempString;
}

string strUpper(string strToUpper) // Uppercase Function
{
	string tempString = "";
	

	for (int i = 0; i < strToUpper.length(); i++)
	{		
			strToUpper[i] = (toupper(strToUpper[i]));
			tempString += strToUpper[i];	
	}

	return tempString;
}

int countWord(string countString)
{
	string printSentence = countString;
	countString = ' ' + countString;
	int wordCount = 0;

	for (int i = 1; i <= countString.length(); i++)
	{
		if ((countString[i - 1] == ' ' || countString[i - 1] == '\t' || countString[i - 1] == '\n' || countString[i - 1] == '\v') &&
			!(countString[i] == ' ' || countString[i] == '\t' || countString[i] == '\n' || countString[i] == '\v'))
		{
			++wordCount;
		}
	}			
	 
		
	cout << "\nThe string " << '\"' << printSentence  << '\"' << " has " << wordCount << " word(s)" << endl;

	return wordCount;
}

int countConsonants(string stringConst)
{
	/*anything EXCEPT a, e, i, o, u*/

	int countConsts = 0;

	for (int i = 0; i <= stringConst[i]; i++)
	{
		if (stringConst[i] != 'a' && stringConst[i] != 'e' && stringConst[i] != 'i' 
			&& stringConst[i] != 'o' && stringConst[i] != 'u' 
			&& stringConst[i] != ' ' && stringConst[i] != '\t' 
			&& stringConst[i] != '\n' && stringConst[i] != '\v' 
			&& stringConst[i] != '!' && stringConst[i] != '.')
		{
			++countConsts;
		}
	}

	cout << "\nThe number of consonants in the string is " << countConsts << "." << endl;

	return countConsts;
}