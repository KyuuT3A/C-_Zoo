// --------------------------------------------------------------------------------
// Name: CDragon
// Abstract: This class is a simple example of classes and encapsulation
// file type: CDragon.h
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Pre-compiler Directives
// --------------------------------------------------------------------------------
#pragma once		// Include this file only once even if referenced multiple times

// --------------------------------------------------------------------------------
// Includes
// --------------------------------------------------------------------------------
#include "CAnimal.h"

class CDragon : public CAnimal
{
	// --------------------------------------------------------------------------------
	// Properties
	// --------------------------------------------------------------------------------
public:			// Never make public properties.  
				// Make protected or private with public get/set methods

protected:

	float m_sngAmountOfGold;

private:

	// --------------------------------------------------------------------------------
	// Methods
	// --------------------------------------------------------------------------------
public:

	// Amount of Gold
	void SetAmountOfGold(float sngNewAmountOfGold);
	float GetAmountOfGold();

	// MakeNoise
	void MakeNoise();

	// BreathFire
	void BreathFire();

protected:

private:

};

