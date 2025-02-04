// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <vector>
#include <vector>

#include "CoreMinimal.h"
#include "ENotes.h"
#include "InputNotes.h"

using namespace std;

/*
The SaxophoneInputNote is a class for representing each possible input note.
NOTE: For those who don't know, the notes you play on a Saxophone are different to their counterpart in 
standard concert pitch (eg on an Alto Sax, a 'G' would actually be a 'Bflat', increased by 3 semitones).
*/
class SAXSIM_API SaxophoneInputNote
{
public:
	SaxophoneInputNote();
	~SaxophoneInputNote();

	//Store all possible fingering combinations of note
	vector<vector<InputNotes>> combinations;
	vector<vector<InputNotes>>* GetCombinations();

	//Note in Alto/Baritone Sax Pitch
	ENotes AltoBariPitch;
	ENotes GetAltoBariPitch();
	
	//Note in Soprano/Tenor Sax Pitch
	ENotes SopTenPitch;
	ENotes GetSopTenPitch();

	//Note in Concert Pitch
	ENotes ConcertPitch;
	ENotes GetConcertPitch();
	
};
