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
int Search Inventory(BaseballInventory[], int, string);
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
*********************************************
*											
*		Creating Object Reference To		
*		BaseBallItems Header			
*											
*********************************************
*/

BaseBallItems Items;

/*
*********************************************************************************************
*																							
*											Main Class										
*																							
*********************************************************************************************
*/

void main()
{
	char Enter = ' ',
		ReturnMainMenu = ' ';


	cin.ignore();
	cin.get(Enter);
}