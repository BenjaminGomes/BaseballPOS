/*
*********************************************
*
*		Prepocessor Directives
*
*********************************************
*/

#ifndef BaseballItems_h
#define BaseballItems_h

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

struct BaseballItems
{
	int NumberOfGloves,
		NumberOfBaseballs,
		NumberOfCatcher,
		NumberOfBattingHelmet,
		NumberOfBaseballBags,
		NumberOfBattingGlove,
		TotalCatcher,
		TotalBattingHelmet,
		TotalBaseballBags,
		TotalBattingGlove,
		TotalBaseballs,
		TotalGloves;
	
	double TotalCostGloves,
		   TotalCostBattingHelmet,
		   TotalCostCatcher,
		   TotalCostBaseballs,
		   TotalCostBaseballBags,
		   TotalCostBattingGlove;

	BaseballItems()
	{
		NumberOfGloves = 0,
		NumberOfBaseballs = 0,
		NumberOfCatcher = 0,
		NumberOfBattingHelmet = 0,
		NumberOfBaseballBags = 0,
		NumberOfBattingGlove = 0,
		TotalCatcher = 0,
		TotalBattingHelmet = 0,
		TotalBaseballBags = 0,
		TotalBattingGlove = 0,
		TotalBaseballs = 0,
		TotalGloves = 0;

		TotalCostGloves = 0.0,
		TotalCostBattingHelmet = 0.0,
		TotalCostCatcher = 0.0,
		TotalCostBaseballs = 0.0,
		TotalCostBaseballBags = 0.0,
		TotalCostBattingGlove = 0.0;
	}
};

#endif
