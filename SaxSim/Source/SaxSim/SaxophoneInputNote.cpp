using namespace std;
#include "SaxophoneInputNote.h"
#include "ENotes.h"
#include "InputNotes.h"

SaxophoneInputNote::SaxophoneInputNote()
{
	AltoBariPitch = ENotes::default;
	SopTenPitch = ENotes::default;
	ConcertPitch = ENotes::default;
}

SaxophoneInputNote::~SaxophoneInputNote()
{
}

vector<vector<InputNotes>>* SaxophoneInputNote::GetCombinations()
{
	return &combinations;
}

::ENotes SaxophoneInputNote::GetAltoBariPitch()
{
	return AltoBariPitch;
}

::ENotes SaxophoneInputNote::GetSopTenPitch()
{
	return SopTenPitch;
}

::ENotes SaxophoneInputNote::GetConcertPitch()
{
	return ConcertPitch;
}
