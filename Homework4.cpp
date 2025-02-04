// --------------------------------------------------------------------------------
// Name: Nicolas Le
// Class: C++
// Abstract: Homework 4
// Filename: Homework4.cpp
// --------------------------------------------------------------------------------


// --------------------------------------------------------------------------------
// Includes
// --------------------------------------------------------------------------------
#include <iostream>
#include "CDog.h"
#include "CCow.h"
#include "CDragon.h"
#include <string.h>
using namespace std;

// --------------------------------------------------------------------------------
// Constraint
// --------------------------------------------------------------------------------


// --------------------------------------------------------------------------------
// User Defined Types
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Function Prototypes
// --------------------------------------------------------------------------------


// --------------------------------------------------------------------------------
// Name: main
// Abstract: This is where the action starts
// --------------------------------------------------------------------------------
int main()
{
	//step 2 - create a child class instances and populate

	CDog clsBuster;
	clsBuster.SetName("Buster");
	clsBuster.SetType("Dog");
	clsBuster.SetWeight(40.0);

	CCow clsDaisy;
	clsDaisy.SetName("Daisy");
	clsDaisy.SetType("Cow");

	CDragon clsSmaug;
	clsSmaug.SetName("Smaug");
	clsSmaug.SetType("Dragon");

	//step 3 - populate zoo using explicit cast
	CAnimal* paclsZoo[5];
	paclsZoo[0] = (CAnimal*)&clsBuster;
	paclsZoo[1] = 0;
	paclsZoo[2] = (CAnimal*)&clsDaisy;
	paclsZoo[3] = 0;
	paclsZoo[4] = (CAnimal*)&clsSmaug;

	//step 4 - demonstrate polymorphism by calling parent/base class methods
	int intIndex = 0;

	for (intIndex = 0; intIndex < 5; intIndex += 1)
	{
		if (paclsZoo[intIndex] != 0)
		{
			cout << "Name:  " << paclsZoo[intIndex]->GetName() << endl;
			cout << "Type:  " << paclsZoo[intIndex]->GetType() << endl;
			paclsZoo[intIndex]->MakeNoise();
			cout << endl;
		}
	}

	// step 5 - demonstrate polymorphism by calling child class methods
	for (intIndex = 0; intIndex < 5; intIndex += 1)
	{
		if (paclsZoo[intIndex] != 0)
		{
			// Dog
			if (strcmp(paclsZoo[intIndex]->GetType(), "Dog") == 0)
			{
				((CDog*)paclsZoo[intIndex])->Fetch();
			}
			// Cow
			if (strcmp(paclsZoo[intIndex]->GetType(), "Cow") == 0)
			{
				((CCow*)paclsZoo[intIndex])->Graze();
			}
			// Dragon
			if (strcmp(paclsZoo[intIndex]->GetType(), "Dragon") == 0)
			{
				((CDragon*)paclsZoo[intIndex])->BreathFire();
			}
		}
	}
}