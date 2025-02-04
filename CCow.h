// --------------------------------------------------------------------------------
// Name: CCows
// Abstract: This class is a simple example of inheritance
// file type: CCows.h
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Pre-compiler Directives
// --------------------------------------------------------------------------------
#pragma once		// Include this file only once even if referenced multiple times

// --------------------------------------------------------------------------------
// Includes
// --------------------------------------------------------------------------------
#include "CAnimal.h"

class CCow : public CAnimal
{
	// --------------------------------------------------------------------------------
	// Properties
	// --------------------------------------------------------------------------------
public:			// Never make public properties.  
				// Make protected or private with public get/set methods

protected:

	char m_strColor[50];

private:

	// --------------------------------------------------------------------------------
	// Methods
	// --------------------------------------------------------------------------------
public:

	// Value
	void SetColor(const char* pstrNewColor);
	char* GetColor();

	// MakeNoise
	void MakeNoise();

	// Graze
	void Graze();

protected:

private:

};
