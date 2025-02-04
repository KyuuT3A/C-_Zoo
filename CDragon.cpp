// --------------------------------------------------------------------------------
// Name: CDragon
// Abstract: Class method definitions
// File type: CDragon.cpp
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Includes
// --------------------------------------------------------------------------------
#include "CDragon.h"


// --------------------------------------------------------------------------------
// Name: SetAmountOfGold
// Abstract: Set the Gold
// --------------------------------------------------------------------------------
void CDragon::SetAmountOfGold(float sngNewAmountOfGold)
{
    if (sngNewAmountOfGold < 0.0f)
    {
        sngNewAmountOfGold = 0.0f;
    }
    m_sngAmountOfGold = sngNewAmountOfGold;
}


// --------------------------------------------------------------------------------
// Name: GetAmountOfGold
// Abstract: Get the Gold
// --------------------------------------------------------------------------------
float CDragon::GetAmountOfGold()
{
	return m_sngAmountOfGold;
}


// --------------------------------------------------------------------------------
// Name: MakeNoise
// Abstract: Make some noise
// --------------------------------------------------------------------------------
void CDragon::MakeNoise()
{
	cout << "Roar\n" << endl;
}


// --------------------------------------------------------------------------------
// Name: BreathFire
// Abstract: Breath Fire
// --------------------------------------------------------------------------------
void CDragon::BreathFire()
{
	cout << "Breath's Fire\n" << endl;
}

