#pragma once
UENUM(BlueprintType)

/*
Enum to represent musical notes
 */
enum class ENotes : uint8 {
    A         UMETA(DisplayName = "A"),
    BFlat     UMETA(DisplayName = "BFlat"),
    B         UMETA(DisplayName = "B"),
    CSharp    UMETA(DisplayName = "CSharp"),
    C         UMETA(DisplayName = "C"),
    DFlat     UMETA(DisplayName = "DFlat"),
    D         UMETA(DisplayName = "D"),
    E         UMETA(DisplayName = "E"),
    FSharp    UMETA(DisplayName = "FSharp"),
    F         UMETA(DisplayName = "F"),
    G         UMETA(DisplayName = "G"),
    GSharp    UMETA(DisplayName = "GSharp"),
	default UMETA(DisplayName = "DEFAULT"),
};
