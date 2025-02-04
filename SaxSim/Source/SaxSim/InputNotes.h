#pragma once
UENUM(BlueprintType)

/*
Enum to represent musical notes
 */
enum class InputNotes : uint8 {
    Bis         UMETA(DisplayName = "Bis"),
    High_F		UMETA(DisplayName = "High F"),
	High_F_Sharp	UMETA(DisplayName = "High F Sharp"),
	Index_L		UMETA(DisplayName = "Index L"),
	Index_R	UMETA(DisplayName = "Index R"),
	Low_C		UMETA(DisplayName = "Low C"),
	Low_D_Sharp UMETA(DisplayName = "Low D Sharp"),
	Middle_L UMETA(DisplayName = "Middle L"),
	Middle_R UMETA(DisplayName = "Middle R"),
	OCTAVE UMETA(DisplayName = "Octave"),
	Palm_D	UMETA(DisplayName = "Palm D"),
	Palm_D_Sharp UMETA(DisplayName = "Palm D Sharp"),
	Palm_F UMETA(DisplayName = "Palm F"),
	Ring_L UMETA(DisplayName = "Ring L"),
	Ring_R UMETA(DisplayName = "Ring R"),
	Side_B_Flat UMETA(DisplayName = "Side B Flat"),
	Side_C UMETA(DisplayName = "Side C"),
	Side_F UMETA(DisplayName = "Side F"),
	Side_E UMETA(DisplayName = "Side E"),
	Sp_B UMETA(DisplayName = "Sp B"),
	Sp_B_Flat UMETA(DisplayName = "Sp B Flat"),
	Sp_C_Sharp UMETA(DisplayName = "Sp C Sharp"),
	Sp_G_Sharp UMETA(DisplayName = "Sp G Sharp"),
	default UMETA(DisplayName = "DEFAULT"),
};
