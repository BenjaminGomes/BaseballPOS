/*
*********************************************************************************************
*																							
*		Programmer:					Ben Gomes												
*		Instructor:					David Wilke												
*		Programming Assignment:		Jonny Mack's Sporting Goods								
*		Program .cpp:				Baseball.cpp											
*		Date:						15 November 2013										
*																							
*		This program will propmt the user with a menu which they can select one of six		
*		sale items. The program will error check and make sure the user entered in a		
*		corect number for the menu options (Ranging from 1-6), if not it prompts the user	
*		to re-enter in a valid option. After the user has selected which product they		
*		would like, the user is prompted for the quantity they would like to purchase of	
*		that specific item. The program then alculates the cost for the product(s) and		
*		displays the total. The user is then prompted if they would like to purchase		
*		another item, if 'Yes' the user is taken back to the main menu where they can add	
*		other purchases. If the user chooses 'No', they are created a receipt (in the		
*		form of a *.txt file) that is written by the program. THe receipt displays the		
*		total quantities the user is wanted of each item and the total costs per each		
*		sales item. THere is also an error check for the input asking the user if they		
*		would like to return to the main menu.												
*																							
*********************************************************************************************

*/

/*
*********************************************
*											
*		Prepocessor Directives			
*											
*********************************************
*/

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

#include "BaseballInventory.h"
#include"BaseBallItems.h"

/*
*********************************************
*											
*		Namespace					
*											
*********************************************
*/

using namespace std;

/*
*********************************************
*											
*		Function Prototypes				
*											
*********************************************
*/

void DisplayMenu();
void InputMenuChoice(int&);
void ErrorCheckingChoice(int&);
int SearchInventory(BaseballInventory[], int, string);
void PrintItemData(const BaseBallItems &);
void ExitScreen();

/*
*********************************************
*											
*		Constant Variable		
*											
*********************************************
*/

const int SIZE = 6;

/*
*********************************************************************************************
*																							
*				Main Class										
*																							
*********************************************************************************************
*/

void main()
{
	/*
	*********************************************
	*
	*		Declaring Variables
	*
	*********************************************
	*/

	char Enter = ' ',
		ReturnMainMenu = ' ';

	int MenuChoice = 0,
		Pos = 0;

	string DesiredCode = " ";

	/*
	*********************************************
	*
	*		Setting Decimal Point Precision
	*
	*********************************************
	*/

	cout << setprecision(2) << fixed << showpoint;

	BaseBallItems Items;

	/*
	*********************************************
	*
	*		Creating an Array With the Items
	*		of the BaseBallInventory Header
	*
	*********************************************
	*/
	
	BaseballInventory Baseball[SIZE] = {BaseballInventory("RBG", "Rawlings Baseball Glove", 87.56),
										BaseballInventory("RBB", "Rawlings Baseball (1Doz)", 38.99),
										BaseballInventory("WCS", "Wilson Limited Edition Cathcher Set", 239.74),
										BaseballInventory("CBH", "CoolFlo High Impact ABS Batting Helmet", 79.99),
										BaseballInventory("ABB", "All American Wheeled Baseball Bag", 137.48),
										BaseballInventory("PBG", "Pro Mesh Series Batting Glove", 21.95)};
	/*
	*********************************************
	*
	*		Do-While loop calculates the 
	*		Quantity Needed and the Total Cost
	*
	*********************************************
	*/

	do
	{
		DisplayMenu();
		InputMenuChoice(MenuChoice);
		ErrorCheckingChoice(MenuChoice);

		switch (MenuChoice)
		{
			case 1:
				DesiredCode = "RBG";
				Pos = SearchInventory(Baseball, SIZE, DesiredCode);
				system("CLS");
				cout << "\n\n";
				cout << setw(5) << " " << "Thank you for selecting the " << Baseball[Pos].getDescriptionBaseballInvetory() << "\n";
				cout << setw(5) << " " << "At a cost of $" << Baseball[Pos].getPriceBaseballInventory() << "\n\n\n";
				cout << setw(5) << " " << "How many " << Baseball[Pos].getDescriptionBaseballInventory() << " would you like to purchase\n";
				cout << setw(5) << " " << "Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> ";
				cin >> Items.NumberOfGloves;
				cout << "\\n\n";
			
				Items.TotalCostGloves =+ Baseball[Pos].getPriceBaseballInventory() * Items.NumberOfGloves;
				Items.TotalGloves =+ Items.NumberOfGloves;

				cout << setw(5) << " " << "This " << Baseball[Pos].getDescriptionBaseballInventory() << " costs $" << Baseball[Pos].getPriceBaseballInventory() << "\n";
				cout << setw(5) << " " << "Total cost ==> $" << Items.TotalCostGloves << "      Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> " << Items.NumberOfGloves;

			break;

			case 2:
				DesiredCode = "RBB";
				Pos = SearchInventory(Baseball, SIZE, DesiredCode);
				system("CLS");
				cout << "\n\n";
				cout << setw(5) << " " << "Thank you for selecting the " << Baseball[Pos].getDescriptionBaseballInvetory() << "\n";
				cout << setw(5) << " " << "At a cost of $" << Baseball[Pos].getPriceBaseballInventory() << "\n\n\n";
				cout << setw(5) << " " << "How many " << Baseball[Pos].getDescriptionBaseballInventory() << " would you like to purchase\n";
				cout << setw(5) << " " << "Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> ";
				cin >> Items.NumberOfBaseballs;
				cout << "\\n\n";

				Items.TotalCostBaseballs =+ Baseball[Pos].getPriceBaseballInventory() * Items.NumberOfBaseballs;
				Items.TotalBaseballs =+ Items.NumberOfBaseballs;

				cout << setw(5) << " " << "This " << Baseball[Pos].getDescriptionBaseballInventory() << " costs $" << Baseball[Pos].getPriceBaseballInventory() << "\n";
				cout << setw(5) << " " << "Total cost ==> $" << Items.TotalCostBaseBaseballs << "      Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> " << Items.NumberOfBaseballs;
			break;

			case 3:
				DesiredCode = "WCS";
				Pos = SearchInventory(Baseball, SIZE, DesiredCode);
				system("CLS");
				cout << "\n\n";
				cout << setw(5) << " " << "Thank you for selecting the " << Baseball[Pos].getDescriptionBaseballInvetory() << "\n";
				cout << setw(5) << " " << "At a cost of $" << Baseball[Pos].getPriceBaseballInventory() << "\n\n\n";
				cout << setw(5) << " " << "How many " << Baseball[Pos].getDescriptionBaseballInventory() << " would you like to purchase\n";
				cout << setw(5) << " " << "Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> ";
				cin >> Items.NumberOfCatcher;
				cout << "\\n\n";

				Items.TotalCostCatcher =+ Baseball[Pos].getPriceBaseballInventory() * Items.NumberOfCatcher;
				Items.TotalCatcher =+ Items.NumberOfCatcher;

				cout << setw(5) << " " << "This " << Baseball[Pos].getDescriptionBaseballInventory() << " costs $" << Baseball[Pos].getPriceBaseballInventory() << "\n";
				cout << setw(5) << " " << "Total cost ==> $" << Items.TotalCostCatcher << "      Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> " << Items.NumberOfCatcher;
			break;

			case 4:
				DesiredCode = "CBH";
				Pos = SearchInventory(Baseball, SIZE, DesiredCode);
				system("CLS");
				cout << "\n\n";
				cout << setw(5) << " " << "Thank you for selecting the " << Baseball[Pos].getDescriptionBaseballInvetory() << "\n";
				cout << setw(5) << " " << "At a cost of $" << Baseball[Pos].getPriceBaseballInventory() << "\n\n\n";
				cout << setw(5) << " " << "How many " << Baseball[Pos].getDescriptionBaseballInventory() << " would you like to purchase\n";
				cout << setw(5) << " " << "Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> ";
				cin >> Items.NumberOfBattingHelmet;
				cout << "\\n\n";

				Items.TotalCostBattingHelmet =+ Baseball[Pos].getPriceBaseballInventory() * Items.NumberOfBattingHelmet;
				Items.TotalBattingHelmet =+ Items.NumberOfBattingHelmet;

				cout << setw(5) << " " << "This " << Baseball[Pos].getDescriptionBaseballInventory() << " costs $" << Baseball[Pos].getPriceBaseballInventory() << "\n";
				cout << setw(5) << " " << "Total cost ==> $" << Items.TotalCostBattingHelmet << "      Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> " << Items.NumberOfBattingHelmet;
			break;

			case 5:
				DesiredCode = "ABB";
				Pos = SearchInventory(Baseball, SIZE, DesiredCode);
				system("CLS");
				cout << "\n\n";
				cout << setw(5) << " " << "Thank you for selecting the " << Baseball[Pos].getDescriptionBaseballInvetory() << "\n";
				cout << setw(5) << " " << "At a cost of $" << Baseball[Pos].getPriceBaseballInventory() << "\n\n\n";
				cout << setw(5) << " " << "How many " << Baseball[Pos].getDescriptionBaseballInventory() << " would you like to purchase\n";
				cout << setw(5) << " " << "Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> ";
				cin >> Items.NumberOfBaseballBags;
				cout << "\\n\n";

				Items.TotalCostBaseballBags =+ Baseball[Pos].getPriceBaseballInventory() * Items.NumberOfBaseballBags;
				Items.TotalBaseballBags =+ Items.NumberOfBaseballBags;

				cout << setw(5) << " " << "This " << Baseball[Pos].getDescriptionBaseballInventory() << " costs $" << Baseball[Pos].getPriceBaseballInventory() << "\n";
				cout << setw(5) << " " << "Total cost ==> $" << Items.TotalCostBaseballBags << "      Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> " << Items.NumberOfBaseballBags;
			break;

			case 6:
				DesiredCode = "PBG";
				Pos = SearchInventory(Baseball, SIZE, DesiredCode);
				system("CLS");
				cout << "\n\n";
				cout << setw(5) << " " << "Thank you for selecting the " << Baseball[Pos].getDescriptionBaseballInvetory() << "\n";
				cout << setw(5) << " " << "At a cost of $" << Baseball[Pos].getPriceBaseballInventory() << "\n\n\n";
				cout << setw(5) << " " << "How many " << Baseball[Pos].getDescriptionBaseballInventory() << " would you like to purchase\n";
				cout << setw(5) << " " << "Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> ";
				cin >> Items.NumberOfBattingGlove;
				cout << "\\n\n";

				Items.TotalCostBattingGlove =+ Baseball[Pos].getPriceBaseballInventory() * Items.NumberOfBattingGlove;
				Items.TotalBattingGlove =+ Items.NumberOfBattingGlove;

				cout << setw(5) << " " << "This " << Baseball[Pos].getDescriptionBaseballInventory() << " costs $" << Baseball[Pos].getPriceBaseballInventory() << "\n";
				cout << setw(5) << " " << "Total cost ==> $" << Items.TotalCostBattingGlove << "      Number of " << Baseball[Pos].getDescriptionBaseballInventory() << " ==> " << Items.NumberOfBattingGlove;
			break;
		}

		cout << "\n\n\n";
		cout << setw(5) << " " << "Your purchase(s) was added to the Shopping Cart\n";
		cout << setw(5) << " " << "Would you like to make another purchase?\n";
		cout << setw(5) << " " << "Enter 'Y' for Yes or 'N' for No ==> ";
		cin >> ReturnMainMenu;
		ReturnMainMenu = toupper(ReturnMainMenu);
		system("CLS");

		/*
		*********************************************
		*
		*		While Loop Error Checks the
		*		Return Menu Selection
		*
		*********************************************
		*/

		while (ReturnMainMenu != 'Y' && ReturnMainMenu != 'N')
		{
			cout << "\n\n";
			cout << setw(5) << " " << "You have entered in the wrong letter.\n";
			cout << setw(5) << " " << "Select the letter Y to continue shopping\n";
			cout << setw(5) << " " << "Select the letter N if you are done shopping and wish to print your receipt\n\n\n";
			cout << setw(5) << " " << "Enter in 'Y' for Yes or 'N' for No ==> ";
			cin >> ReturnMainMenu;
			ReturnMainMenu = toupper(ReturnMainMenu);
			system("CLS");
		}
	}
	
	while (ReturnMainMenu == 'Y')
	
	PrintItemData(Items);
	ExitScreen();
	
	cin.ignore();
	cin.get(Enter);
}