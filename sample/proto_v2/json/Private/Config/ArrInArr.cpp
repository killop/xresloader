// This file is generated by xresloader, please don't edit it.

#include "Config/ArrInArr.h"



UArrInArrHelper::UArrInArrHelper() : Super()
{
    UArrInArrHelper::ClearRow(this->Empty);
}

void UArrInArrHelper::ClearRow(FArrInArr& TableRow)
{
    TableRow.Name = TEXT("");
    TableRow.IntArr.Reset(0);
    TableRow.StrArr.Reset(0);
}

void UArrInArrHelper::ClearDataRow(FArrInArr& TableRow) const
{
    UArrInArrHelper::ClearRow(TableRow);
}

