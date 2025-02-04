#pragma once

#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
/*
The SaxophoneInputHandler is responsible for detecting 
the input from the IRL Digital Saxophone, interpreting it 
and passing it onto whatever needs it, whether for storage or display.
It is NOT for processing the manually pressed the keys on the UI displayed.
*/
class SAXSIM_API SaxophoneInputHandler
{
public:
	SaxophoneInputHandler();
	~SaxophoneInputHandler();

	//retrive the input
	//process what note it is
	//will need to transpose it
	//output that note

	int RetrieveSaxInput(int inputNoteVal);
	
    
};
