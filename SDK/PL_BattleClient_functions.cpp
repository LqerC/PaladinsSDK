// Paladins (3.05) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_BattleClient_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleClient.BattleHUD.BattleHUDFunction
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, HasOptionalParms, Const)

void ABattleHUD::BattleHUDFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleClient.BattleHUD.BattleHUDFunction");

	ABattleHUD_BattleHUDFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
