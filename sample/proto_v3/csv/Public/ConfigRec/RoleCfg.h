/**
 * This file is generated by xresloader 2.11.0-rc2, please don't edit it.
 * You can find more information about this xresloader on https://xresloader.atframe.work/ .
 * If there is any problem, please find or report issues on https://github.com/xresloader/xresloader/issues .
 */
#pragma once

#include "CoreMinimal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"
#include "ConfigRec/DepCfg.h"
#include "RoleCfg.generated.h"


USTRUCT(BlueprintType)
struct FRoleCfg : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    // Start of fields
    /** Field Type: STRING, Name: Name, Index: 5 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FName Name;

    /** Field Type: INT, Name: Id, Index: 1 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 Id;

    /** Field Type: INT, Name: UnlockLevel, Index: 2 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 UnlockLevel;

    /** Field Type: INT, Name: CostType, Index: 3 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 CostType;

    /** Field Type: INT, Name: CostValue, Index: 4 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 CostValue;

    /** Field Type: MESSAGE, Name: DepTest, Index: 10 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FDepCfg DepTest;

    /** Field Type: STRING, Name: TestArray, Index: 11 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    TArray< FString > TestArray;

    /** Field Type: STRING, Name: IntAsString, Index: 12 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FString IntAsString;

    /** Field Type: INT, Name: TestPlainEnumArray, Index: 13 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    TArray< int32 > TestPlainEnumArray;

};