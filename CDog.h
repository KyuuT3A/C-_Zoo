// --------------------------------------------------------------------------------
// Name: CDog
// Abstract: This class is a simple example of classes and encapsulation
// file type: CDog.h
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Pre-compiler Directives
// --------------------------------------------------------------------------------
#pragma once		// Include this file only once even if referenced multiple times

// --------------------------------------------------------------------------------
// Includes
// --------------------------------------------------------------------------------
#include "CAnimal.h"

class CDog : public CAnimal
{
	// --------------------------------------------------------------------------------
	// Properties
	// --------------------------------------------------------------------------------
public:			// Never make public properties.  
				// Make protected or private with public get/set methods

protected:
		
	float m_sngWeight;

private:

	// --------------------------------------------------------------------------------
	// Methods
	// --------------------------------------------------------------------------------
public:

	// Weight
	void SetWeight(float sngNewWeight);
	float GetWeight();

	// MakeNoise
	void MakeNoise();

	// scratch
	void Fetch();

protected:

private:

};
