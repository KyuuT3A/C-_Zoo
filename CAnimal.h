// --------------------------------------------------------------------------------
// Name: CAnimal
// Abstract: This class is a simple example of classes and encapsulation
// file type: CAnimal.h
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Pre-compiler Directives
// --------------------------------------------------------------------------------
#pragma once		// Include this file only once even if referenced multiple times

// --------------------------------------------------------------------------------
// Includes
// --------------------------------------------------------------------------------
#include <stdlib.h>
#include <iostream>
using namespace std;

class CAnimal
{
	// --------------------------------------------------------------------------------
	// Properties
	// --------------------------------------------------------------------------------
public:			// Never make public properties.  
				// Make protected or private with public get/set methods

protected:

	char m_strName[50];
	char m_strType[50];


private:

	// --------------------------------------------------------------------------------
	// Methods
	// --------------------------------------------------------------------------------
public:

	// Name
	void SetName(const char* pstrNewName);
	char* GetName();

	// Type
	void SetType(const char* pstrNewType);
	char* GetType();

	virtual void MakeNoise();


protected:

private:

};
