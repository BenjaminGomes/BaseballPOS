/*
*********************************************
*
*		Prepocessor Directives
*
*********************************************
*/

#ifndef BaseballInventory_h
#define BaseballInventory_h

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

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
*		Baseball Inventory Class
*
*********************************************
*/

class BaseballInventory
{
	/*
	*********************************************
	*
	*		Private Subheading
	*
	*********************************************
	*/

	private:
		double Price;
		string ItemCode,
			   Description;
	
	/*
	*********************************************
	*
	*		Public Subheading
	*
	*********************************************
	*/

	public:
		
		/*
		*********************************************
		*
		*		Constructor
		*
		*********************************************
		*/

		BaseballInventory()
		{
			ItemCode = "XXX";
			Description = " ";
			Price = 0.0;
		}

		BaseballInventory(string c, string d, double p)
		{
			ItemCode = c;
			Description = d;
			Price = p;
		}

		/*
		*********************************************
		*
		*		Accessors
		*
		*********************************************
		*/

		string getCodeBaseballInventory()
		{
			return ItemCode;
		}
		
		string getDescriptionBaseballInventory()
		{
			return Description;
		}

		double getPriceBaseballInventory()
		{
			return Price;
		}
};

#endif