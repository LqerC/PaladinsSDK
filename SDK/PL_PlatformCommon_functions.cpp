// Paladins (4.1.3942.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PL_PlatformCommon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlatformCommon.PComBrowserManager.OpenURL
// (Latent, Net, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           bShowNavButtons                (OptionalParm, Parm)
// bool                           bSetFocus                      (OptionalParm, Parm)

void UPComBrowserManager::STATIC_OpenURL(const struct FString& URL, bool bShowNavButtons, bool bSetFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComBrowserManager.OpenURL");

	UPComBrowserManager_OpenURL_Params params;
	params.URL = URL;
	params.bShowNavButtons = bShowNavButtons;
	params.bSetFocus = bSetFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendGameRequest
// (Defined, Iterator, Latent, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 fsRequest                      (Parm, NeedCtorLink)

void UPComGameEngine::STATIC_SendGameRequest(const struct FString& fsRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SendGameRequest");

	UPComGameEngine_SendGameRequest_Params params;
	params.fsRequest = fsRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendCtrlRequest
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 fsRequest                      (Parm, NeedCtorLink)

void UPComGameEngine::STATIC_SendCtrlRequest(const struct FString& fsRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SendCtrlRequest");

	UPComGameEngine_SendCtrlRequest_Params params;
	params.fsRequest = fsRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendMarshalAll
// (PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// bool                           bLowPriority                   (Parm)

void UPComGameEngine::STATIC_SendMarshalAll(bool bLowPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SendMarshalAll");

	UPComGameEngine_SendMarshalAll_Params params;
	params.bLowPriority = bLowPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendMarshal
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FUniqueNetId            qwPlayerId                     (Parm)
// bool                           bLowPriority                   (Parm)

void UPComGameEngine::STATIC_SendMarshal(const struct FUniqueNetId& qwPlayerId, bool bLowPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SendMarshal");

	UPComGameEngine_SendMarshal_Params params;
	params.qwPlayerId = qwPlayerId;
	params.bLowPriority = bLowPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.ClearMarshal
// (Final, Defined, Iterator, PreOperator, Native, Operator, Static)

void UPComGameEngine::STATIC_ClearMarshal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.ClearMarshal");

	UPComGameEngine_ClearMarshal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SetFieldString
// (Final, Defined, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            nToken                         (Parm)
// struct FString                 StrValue                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::STATIC_SetFieldString(int nToken, const struct FString& StrValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SetFieldString");

	UPComGameEngine_SetFieldString_Params params;
	params.nToken = nToken;
	params.StrValue = StrValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameEngine.SetFieldFloat
// (Final, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            nToken                         (Parm)
// float                          FloatValue                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::STATIC_SetFieldFloat(int nToken, float FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SetFieldFloat");

	UPComGameEngine_SetFieldFloat_Params params;
	params.nToken = nToken;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameEngine.SetFieldInt
// (Defined, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            nToken                         (Parm)
// int                            IntValue                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::STATIC_SetFieldInt(int nToken, int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SetFieldInt");

	UPComGameEngine_SetFieldInt_Params params;
	params.nToken = nToken;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameEngine.SetFunction
// (Final, Latent, Event, Static)
// Parameters:
// int                            nFunction                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::STATIC_SetFunction(int nFunction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SetFunction");

	UPComGameEngine_SetFunction_Params params;
	params.nFunction = nFunction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameViewportClient.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// struct FString                 OutError                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameViewportClient::Init(struct FString* OutError)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.Init");

	UPComGameViewportClient_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutError != nullptr)
		*OutError = params.OutError;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameViewportClient.StartFacebookStreaming
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Operator, Static)

void UPComGameViewportClient::STATIC_StartFacebookStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.StartFacebookStreaming");

	UPComGameViewportClient_StartFacebookStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.StopRTMPStreaming
// (Final, Defined, Latent, Exec, Native, Operator, Static)

void UPComGameViewportClient::STATIC_StopRTMPStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.StopRTMPStreaming");

	UPComGameViewportClient_StopRTMPStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.StartRTMPStreaming
// (Iterator, Singular, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 InServer                       (Parm, NeedCtorLink)
// struct FString                 InKey                          (Parm, NeedCtorLink)

void UPComGameViewportClient::STATIC_StartRTMPStreaming(const struct FString& InServer, const struct FString& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.StartRTMPStreaming");

	UPComGameViewportClient_StartRTMPStreaming_Params params;
	params.InServer = InServer;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.SetRTMPSettings
// (Final, Defined, Latent, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// bool                           bAllowWebcam                   (Parm)
// bool                           bAllowMicrophone               (Parm)
// bool                           bAllowDesktopAudio             (Parm)

void UPComGameViewportClient::STATIC_SetRTMPSettings(bool bAllowWebcam, bool bAllowMicrophone, bool bAllowDesktopAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.SetRTMPSettings");

	UPComGameViewportClient_SetRTMPSettings_Params params;
	params.bAllowWebcam = bAllowWebcam;
	params.bAllowMicrophone = bAllowMicrophone;
	params.bAllowDesktopAudio = bAllowDesktopAudio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.CheckGameSettingsVersion
// (Iterator, PreOperator, Native, Operator, Static)

void UPComGameViewportClient::STATIC_CheckGameSettingsVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.CheckGameSettingsVersion");

	UPComGameViewportClient_CheckGameSettingsVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.HandleGameSettingsMigration
// (Iterator, PreOperator, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// int                            OldGameSettingsVersion         (Parm)

void UPComGameViewportClient::STATIC_HandleGameSettingsMigration(int OldGameSettingsVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.HandleGameSettingsMigration");

	UPComGameViewportClient_HandleGameSettingsMigration_Params params;
	params.OldGameSettingsVersion = OldGameSettingsVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.GetCurrentGameSettingsVersion
// (Latent, PreOperator, NetReliable, Native, Operator, Static)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPComGameViewportClient::STATIC_GetCurrentGameSettingsVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.GetCurrentGameSettingsVersion");

	UPComGameViewportClient_GetCurrentGameSettingsVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameViewportClient.InitDynamicResolutionScaler
// (Iterator, Latent, PreOperator, Singular, NetReliable, Native, Operator, Static)

void UPComGameViewportClient::STATIC_InitDynamicResolutionScaler()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.InitDynamicResolutionScaler");

	UPComGameViewportClient_InitDynamicResolutionScaler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComImageDownloader.SetPComImageDownloadedDelegate
// (Defined, Latent, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FScriptDelegate         PComImageDownloadedDelegate    (Parm, NeedCtorLink)

void UPComImageDownloader::STATIC_SetPComImageDownloadedDelegate(const struct FScriptDelegate& PComImageDownloadedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComImageDownloader.SetPComImageDownloadedDelegate");

	UPComImageDownloader_SetPComImageDownloadedDelegate_Params params;
	params.PComImageDownloadedDelegate = PComImageDownloadedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComImageDownloader.OnPComImageDownloaded
// (Defined, Iterator, Latent, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FPComImageDownload      CachedEntry                    (Parm, NeedCtorLink)

void UPComImageDownloader::OnPComImageDownloaded(const struct FPComImageDownload& CachedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComImageDownloader.OnPComImageDownloaded");

	UPComImageDownloader_OnPComImageDownloaded_Params params;
	params.CachedEntry = CachedEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.IsLogitechSdkVersionValid
// (Defined, PreOperator, Net, NetReliable, Native, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComInputLightingEffect::STATIC_IsLogitechSdkVersionValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.IsLogitechSdkVersionValid");

	UPComInputLightingEffect_IsLogitechSdkVersionValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComInputLightingEffect.SetCurrentTime
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// float                          CurrentTime                    (Parm)

void UPComInputLightingEffect::STATIC_SetCurrentTime(const struct FName& InPresetName, float CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.SetCurrentTime");

	UPComInputLightingEffect_SetCurrentTime_Params params;
	params.InPresetName = InPresetName;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.StopPreset
// (Defined, Latent, Exec, Native, Operator, Static)
// Parameters:
// struct FName                   InPresetName                   (Parm)

void UPComInputLightingEffect::STATIC_StopPreset(const struct FName& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.StopPreset");

	UPComInputLightingEffect_StopPreset_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.PlayPreset
// (Defined, Iterator, Singular, Net, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// bool                           bUseOverrideStartTime          (OptionalParm, Parm)
// float                          OverrideStartTime              (OptionalParm, Parm)

void UPComInputLightingEffect::STATIC_PlayPreset(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.PlayPreset");

	UPComInputLightingEffect_PlayPreset_Params params;
	params.InPresetName = InPresetName;
	params.bUseOverrideStartTime = bUseOverrideStartTime;
	params.OverrideStartTime = OverrideStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.DisableSystem
// (Iterator, PreOperator, Singular, Native, Operator, Static)

void UPComInputLightingEffect::STATIC_DisableSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.DisableSystem");

	UPComInputLightingEffect_DisableSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.TryEnableSystem
// (Final, Latent, Singular, Exec, Native, Operator, Static)

void UPComInputLightingEffect::STATIC_TryEnableSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.TryEnableSystem");

	UPComInputLightingEffect_TryEnableSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComJsonHandler.OnImageDownloaded
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Native, Operator, Static)
// Parameters:
// struct FPComImageDownload      CachedEntry                    (Parm, NeedCtorLink)

void UPComJsonHandler::STATIC_OnImageDownloaded(const struct FPComImageDownload& CachedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComJsonHandler.OnImageDownloaded");

	UPComJsonHandler_OnImageDownloaded_Params params;
	params.CachedEntry = CachedEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.DecodeFacebookRTMPUrl
// (Defined, Iterator, Latent, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FString                 InRequest                      (Parm, NeedCtorLink)
// class UWebRequest*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UWebRequest* UPComOpenBroadcaster::DecodeFacebookRTMPUrl(const struct FString& InRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.DecodeFacebookRTMPUrl");

	UPComOpenBroadcaster_DecodeFacebookRTMPUrl_Params params;
	params.InRequest = InRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComOpenBroadcaster.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)

void UPComOpenBroadcaster::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.Tick");

	UPComOpenBroadcaster_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.ForceStopStreaming
// (Final, Latent, PreOperator, Net, Native, Operator, Static)

void UPComOpenBroadcaster::STATIC_ForceStopStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.ForceStopStreaming");

	UPComOpenBroadcaster_ForceStopStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.StopStreaming
// (Iterator, Latent, Exec, Native, Operator, Static)

void UPComOpenBroadcaster::STATIC_StopStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.StopStreaming");

	UPComOpenBroadcaster_StopStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.StartRTMPStreaming
// (Iterator, Singular, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 InServer                       (Parm, NeedCtorLink)
// struct FString                 InKey                          (Parm, NeedCtorLink)

void UPComOpenBroadcaster::STATIC_StartRTMPStreaming(const struct FString& InServer, const struct FString& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.StartRTMPStreaming");

	UPComOpenBroadcaster_StartRTMPStreaming_Params params;
	params.InServer = InServer;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.StartFacebookStreaming
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Operator, Static)

void UPComOpenBroadcaster::STATIC_StartFacebookStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.StartFacebookStreaming");

	UPComOpenBroadcaster_StartFacebookStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.QueueFacebookStreaming
// (Final, Latent, NetReliable, Simulated, Native, Operator, Static)

void UPComOpenBroadcaster::STATIC_QueueFacebookStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.QueueFacebookStreaming");

	UPComOpenBroadcaster_QueueFacebookStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.SetStreamSettings
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FPComOpenBroadcasterSettings InSettings                     (Const, Parm, OutParm)

void UPComOpenBroadcaster::STATIC_SetStreamSettings(struct FPComOpenBroadcasterSettings* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.SetStreamSettings");

	UPComOpenBroadcaster_SetStreamSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSettings != nullptr)
		*InSettings = params.InSettings;
}


// Function PlatformCommon.PComOpenBroadcaster.IsStreaming
// (Final, Iterator, PreOperator, Net, NetReliable, Native, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComOpenBroadcaster::STATIC_IsStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.IsStreaming");

	UPComOpenBroadcaster_IsStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComOpenBroadcaster.CloseWebBrowser
// (Final, Defined, Latent, Simulated, Native, HasOptionalParms)

void UPComOpenBroadcaster::CloseWebBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.CloseWebBrowser");

	UPComOpenBroadcaster_CloseWebBrowser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.OpenWebBrowser
// (Final, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void UPComOpenBroadcaster::OpenWebBrowser(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.OpenWebBrowser");

	UPComOpenBroadcaster_OpenWebBrowser_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.IsWebBrowserLoaded
// (Defined, Latent, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComOpenBroadcaster::IsWebBrowserLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.IsWebBrowserLoaded");

	UPComOpenBroadcaster_IsWebBrowserLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComOpenBroadcaster.PreloadWebBrowser
// (Iterator, Singular, Simulated, Native, HasOptionalParms)

void UPComOpenBroadcaster::PreloadWebBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.PreloadWebBrowser");

	UPComOpenBroadcaster_PreloadWebBrowser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.CreateFileAndExit
// (Defined, Iterator, Singular, Native, Operator, Static)
// Parameters:
// struct FString                 FileNameWithExtension          (Parm, NeedCtorLink)
// struct FString                 FileContents                   (Parm, NeedCtorLink)
// struct FString                 SubfolderName                  (Parm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_CreateFileAndExit(const struct FString& FileNameWithExtension, const struct FString& FileContents, const struct FString& SubfolderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.CreateFileAndExit");

	UPComPerformanceCaptureBase_CreateFileAndExit_Params params;
	params.FileNameWithExtension = FileNameWithExtension;
	params.FileContents = FileContents;
	params.SubfolderName = SubfolderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetPerfStats
// (Final, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// TArray<struct FPComPerformanceCaptureStat> PerfStats                      (Const, Parm, NeedCtorLink)
// struct FString                 FileContents                   (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_GetPerfStats(TArray<struct FPComPerformanceCaptureStat> PerfStats, struct FString* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.GetPerfStats");

	UPComPerformanceCaptureBase_GetPerfStats_Params params;
	params.PerfStats = PerfStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetStatsToCollect
// (Defined, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// struct FString                 FileContents                   (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_GetStatsToCollect(struct FString* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.GetStatsToCollect");

	UPComPerformanceCaptureBase_GetStatsToCollect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetMapNameAndTime
// (Iterator, Latent, PreOperator, NetReliable, Native, Operator, Static)
// Parameters:
// struct FString                 MapNameStr                     (Parm, OutParm, NeedCtorLink)
// struct FString                 FormattedDate                  (Parm, OutParm, NeedCtorLink)
// struct FString                 FormattedTime                  (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_GetMapNameAndTime(struct FString* MapNameStr, struct FString* FormattedDate, struct FString* FormattedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.GetMapNameAndTime");

	UPComPerformanceCaptureBase_GetMapNameAndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapNameStr != nullptr)
		*MapNameStr = params.MapNameStr;
	if (FormattedDate != nullptr)
		*FormattedDate = params.FormattedDate;
	if (FormattedTime != nullptr)
		*FormattedTime = params.FormattedTime;
}


// Function PlatformCommon.PComPerformanceCaptureBase.StopCycleStats
// (Final, Defined, Iterator, Exec, Native, Operator, Static)
// Parameters:
// TArray<struct FPComPerformanceCaptureStat> PerfStats                      (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_StopCycleStats(TArray<struct FPComPerformanceCaptureStat>* PerfStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.StopCycleStats");

	UPComPerformanceCaptureBase_StopCycleStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerfStats != nullptr)
		*PerfStats = params.PerfStats;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetPerformanceData
// (Singular, NetReliable, Native, Operator, Static)
// Parameters:
// TArray<struct FPComPerformanceCaptureStat> PerfStats                      (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_GetPerformanceData(TArray<struct FPComPerformanceCaptureStat>* PerfStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.GetPerformanceData");

	UPComPerformanceCaptureBase_GetPerformanceData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerfStats != nullptr)
		*PerfStats = params.PerfStats;
}


// Function PlatformCommon.PComPerformanceCaptureBase.EnableStatNotify
// (Net, Native, Operator, Static)

void UPComPerformanceCaptureBase::STATIC_EnableStatNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.EnableStatNotify");

	UPComPerformanceCaptureBase_EnableStatNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.EnableNonCycleStats
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Native, Operator, Static)

void UPComPerformanceCaptureBase::STATIC_EnableNonCycleStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.EnableNonCycleStats");

	UPComPerformanceCaptureBase_EnableNonCycleStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.MoveCamera
// (Defined, Iterator, Latent, Simulated, Native, Operator, Static)
// Parameters:
// class APlayerController*       PlayerController               (Parm)
// class AActor*                  Node                           (Parm)

void UPComPerformanceCaptureBase::STATIC_MoveCamera(class APlayerController* PlayerController, class AActor* Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.MoveCamera");

	UPComPerformanceCaptureBase_MoveCamera_Params params;
	params.PlayerController = PlayerController;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.InitializePerformanceCaptureSettings
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Native, Operator, Static)

void UPComPerformanceCaptureBase::STATIC_InitializePerformanceCaptureSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.InitializePerformanceCaptureSettings");

	UPComPerformanceCaptureBase_InitializePerformanceCaptureSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureGame.DoNextAction
// (Defined, Iterator, PreOperator, Singular, Native, Operator, Static)

void APComPerformanceCaptureGame::STATIC_DoNextAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureGame.DoNextAction");

	APComPerformanceCaptureGame_DoNextAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureGame.CollectNodes
// (Defined, Singular, Native, Operator, Static)

void APComPerformanceCaptureGame::STATIC_CollectNodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureGame.CollectNodes");

	APComPerformanceCaptureGame_CollectNodes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureGame.PostBeginPlay
// (Final, Latent, Net, Simulated)

void APComPerformanceCaptureGame::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureGame.PostBeginPlay");

	APComPerformanceCaptureGame_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.TestPictureInPicture
// (Defined, Iterator, PreOperator, Exec, Native, Operator, Static)

void UPComPictureInPicture::STATIC_TestPictureInPicture()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.TestPictureInPicture");

	UPComPictureInPicture_TestPictureInPicture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.DebugRender
// (Final, Defined, Iterator, Latent, Singular, Native, Operator, Static)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UPComPictureInPicture::STATIC_DebugRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.DebugRender");

	UPComPictureInPicture_DebugRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.IsViewDescReady
// (Defined, Iterator, PreOperator, Net, NetReliable, Native, Operator, Static)
// Parameters:
// struct FPComPipViewDesc        ViewDesc                       (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPictureInPicture::STATIC_IsViewDescReady(struct FPComPipViewDesc* ViewDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.IsViewDescReady");

	UPComPictureInPicture_IsViewDescReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewDesc != nullptr)
		*ViewDesc = params.ViewDesc;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPictureInPicture.IsViewReady
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Native, Operator, Static)
// Parameters:
// struct FName                   ViewName                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPictureInPicture::STATIC_IsViewReady(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.IsViewReady");

	UPComPictureInPicture_IsViewReady_Params params;
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPictureInPicture.RequestRender
// (Defined, PreOperator, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   ViewName                       (Parm)

void UPComPictureInPicture::STATIC_RequestRender(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.RequestRender");

	UPComPictureInPicture_RequestRender_Params params;
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.RemoveView
// (Final, Defined, Iterator, Latent, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   ViewName                       (Parm)

void UPComPictureInPicture::STATIC_RemoveView(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.RemoveView");

	UPComPictureInPicture_RemoveView_Params params;
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.AddView
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Operator, Static)
// Parameters:
// struct FPComPipViewDesc        InViewDesc                     (Const, Parm, OutParm, NeedCtorLink)

void UPComPictureInPicture::STATIC_AddView(struct FPComPipViewDesc* InViewDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.AddView");

	UPComPictureInPicture_AddView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InViewDesc != nullptr)
		*InViewDesc = params.InViewDesc;
}


// Function PlatformCommon.PComPictureInPicture.InitializeRenderTarget
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Native, Operator, Static)

void UPComPictureInPicture::STATIC_InitializeRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.InitializeRenderTarget");

	UPComPictureInPicture_InitializeRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetSkyColor
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FColor                  InSkyColor                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::STATIC_SetSkyColor(struct FColor* InSkyColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetSkyColor");

	UPComPictureInPictureScene_SetSkyColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSkyColor != nullptr)
		*InSkyColor = params.InSkyColor;
}


// Function PlatformCommon.PComPictureInPictureScene.SetSkyBrightness
// (Iterator, Latent, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// float                          InSkyBrightness                (Parm)

void UPComPictureInPictureScene::STATIC_SetSkyBrightness(float InSkyBrightness)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetSkyBrightness");

	UPComPictureInPictureScene_SetSkyBrightness_Params params;
	params.InSkyBrightness = InSkyBrightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightColor
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FColor                  LightColor                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::STATIC_SetBounceLightColor(struct FColor* LightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetBounceLightColor");

	UPComPictureInPictureScene_SetBounceLightColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightColor != nullptr)
		*LightColor = params.LightColor;
}


// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightBrightness
// (Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// float                          InLightBrightness              (Parm)

void UPComPictureInPictureScene::STATIC_SetBounceLightBrightness(float InLightBrightness)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetBounceLightBrightness");

	UPComPictureInPictureScene_SetBounceLightBrightness_Params params;
	params.InLightBrightness = InLightBrightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightDirection
// (Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FRotator                InLightDir                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::STATIC_SetBounceLightDirection(struct FRotator* InLightDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetBounceLightDirection");

	UPComPictureInPictureScene_SetBounceLightDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InLightDir != nullptr)
		*InLightDir = params.InLightDir;
}


// Function PlatformCommon.PComPictureInPictureScene.EnableDirectionalBounceLight
// (Defined, Iterator, Latent, PreOperator, Singular, Native, Operator, Static)
// Parameters:
// bool                           bInEnableBoundLight            (Parm)
// float                          InBounceLightBrightness        (OptionalParm, Parm)
// struct FRotator                BounceLightDir                 (OptionalParm, Parm)

void UPComPictureInPictureScene::STATIC_EnableDirectionalBounceLight(bool bInEnableBoundLight, float InBounceLightBrightness, const struct FRotator& BounceLightDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.EnableDirectionalBounceLight");

	UPComPictureInPictureScene_EnableDirectionalBounceLight_Params params;
	params.bInEnableBoundLight = bInEnableBoundLight;
	params.InBounceLightBrightness = InBounceLightBrightness;
	params.BounceLightDir = BounceLightDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetLightColor
// (Final, Iterator, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FColor                  LightColor                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::STATIC_SetLightColor(struct FColor* LightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetLightColor");

	UPComPictureInPictureScene_SetLightColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightColor != nullptr)
		*LightColor = params.LightColor;
}


// Function PlatformCommon.PComPictureInPictureScene.SetLightBrightness
// (Iterator, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// float                          InLightBrightness              (Parm)

void UPComPictureInPictureScene::STATIC_SetLightBrightness(float InLightBrightness)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetLightBrightness");

	UPComPictureInPictureScene_SetLightBrightness_Params params;
	params.InLightBrightness = InLightBrightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetLightDirection
// (Defined, Iterator, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FRotator                InLightDir                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::STATIC_SetLightDirection(struct FRotator* InLightDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetLightDirection");

	UPComPictureInPictureScene_SetLightDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InLightDir != nullptr)
		*InLightDir = params.InLightDir;
}


// Function PlatformCommon.PComPictureInPictureScene.GetLightDirection
// (Final, Defined, Latent, PreOperator, NetReliable, Native, Operator, Static)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UPComPictureInPictureScene::STATIC_GetLightDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.GetLightDirection");

	UPComPictureInPictureScene_GetLightDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPictureInPictureScene.RemoveComponent
// (Defined, Iterator, Latent, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// class UActorComponent*         Component                      (Parm, EditInline)

void UPComPictureInPictureScene::STATIC_RemoveComponent(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.RemoveComponent");

	UPComPictureInPictureScene_RemoveComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.AddComponent
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Operator, Static)
// Parameters:
// class UActorComponent*         Component                      (Parm, EditInline)
// struct FMatrix                 LocalToWorld                   (Const, Parm, OutParm)

void UPComPictureInPictureScene::STATIC_AddComponent(class UActorComponent* Component, struct FMatrix* LocalToWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.AddComponent");

	UPComPictureInPictureScene_AddComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalToWorld != nullptr)
		*LocalToWorld = params.LocalToWorld;
}


// Function PlatformCommon.PComPictureInPictureScene.InitScene
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Native, Operator, Static)

void UPComPictureInPictureScene::STATIC_InitScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.InitScene");

	UPComPictureInPictureScene_InitScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayTestInputLightingEffect
// (Final, Defined, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FName                   InPresetName                   (Parm)

void APComPlayerController::PlayTestInputLightingEffect(const struct FName& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayTestInputLightingEffect");

	APComPlayerController_PlayTestInputLightingEffect_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.SetCurrentTimeForInputLightingEffect
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// float                          InCurrentTime                  (Parm)

void APComPlayerController::STATIC_SetCurrentTimeForInputLightingEffect(const struct FName& InPresetName, float InCurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.SetCurrentTimeForInputLightingEffect");

	APComPlayerController_SetCurrentTimeForInputLightingEffect_Params params;
	params.InPresetName = InPresetName;
	params.InCurrentTime = InCurrentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.StopInputLightingEffect
// (Latent, Exec, Native, Operator, Static)
// Parameters:
// struct FName                   InPresetName                   (Parm)

void APComPlayerController::STATIC_StopInputLightingEffect(const struct FName& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.StopInputLightingEffect");

	APComPlayerController_StopInputLightingEffect_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayInputLightingEffect
// (Iterator, Singular, Net, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// bool                           bUseOverrideStartTime          (OptionalParm, Parm)
// float                          OverrideStartTime              (OptionalParm, Parm)

void APComPlayerController::STATIC_PlayInputLightingEffect(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayInputLightingEffect");

	APComPlayerController_PlayInputLightingEffect_Params params;
	params.InPresetName = InPresetName;
	params.bUseOverrideStartTime = bUseOverrideStartTime;
	params.OverrideStartTime = OverrideStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClientPlayInputLightingEffect
// (Defined, Latent, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// bool                           bUseOverrideStartTime          (OptionalParm, Parm)
// float                          OverrideStartTime              (OptionalParm, Parm)

void APComPlayerController::ClientPlayInputLightingEffect(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ClientPlayInputLightingEffect");

	APComPlayerController_ClientPlayInputLightingEffect_Params params;
	params.InPresetName = InPresetName;
	params.bUseOverrideStartTime = bUseOverrideStartTime;
	params.OverrideStartTime = OverrideStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TryAutoLogin
// (Latent, Singular, Exec, Native, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_TryAutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TryAutoLogin");

	APComPlayerController_TryAutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.TryAutoLoginDelayed
// (PreOperator, Singular, Simulated, Native, HasOptionalParms)

void APComPlayerController::TryAutoLoginDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TryAutoLoginDelayed");

	APComPlayerController_TryAutoLoginDelayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.SetAsNewPartyHost
// (Defined, Latent, Singular, Simulated, Native, HasOptionalParms)

void APComPlayerController::SetAsNewPartyHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.SetAsNewPartyHost");

	APComPlayerController_SetAsNewPartyHost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ToggleGameSessionInvitesAllowed
// (Defined, Iterator, Latent, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           bAllowed                       (Parm)

void APComPlayerController::ToggleGameSessionInvitesAllowed(bool bAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ToggleGameSessionInvitesAllowed");

	APComPlayerController_ToggleGameSessionInvitesAllowed_Params params;
	params.bAllowed = bAllowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TogglePartySessionInvitesAllowed
// (Final, Defined, Iterator, Latent, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           bAllowed                       (Parm)

void APComPlayerController::TogglePartySessionInvitesAllowed(bool bAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TogglePartySessionInvitesAllowed");

	APComPlayerController_TogglePartySessionInvitesAllowed_Params params;
	params.bAllowed = bAllowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateMCTSWithNewPartyInfo
// (Final, Defined, PreOperator, Singular, Simulated, Native, HasOptionalParms)

void APComPlayerController::UpdateMCTSWithNewPartyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateMCTSWithNewPartyInfo");

	APComPlayerController_UpdateMCTSWithNewPartyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsHostOfParty
// (Latent, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::IsHostOfParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsHostOfParty");

	APComPlayerController_IsHostOfParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnPeoplePickerComplete
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TArray<struct FOnlineFriend>   PeoplePicked                   (Parm, NeedCtorLink)

void APComPlayerController::STATIC_OnPeoplePickerComplete(bool bWasSuccessful, TArray<struct FOnlineFriend> PeoplePicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPeoplePickerComplete");

	APComPlayerController_OnPeoplePickerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PeoplePicked = PeoplePicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnReadFriendsListComplete
// (Final, Defined, Net, Simulated, Native, Operator, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_OnReadFriendsListComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnReadFriendsListComplete");

	APComPlayerController_OnReadFriendsListComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPeoplePickerUI
// (Final, Iterator, Latent, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::ShowPeoplePickerUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowPeoplePickerUI");

	APComPlayerController_ShowPeoplePickerUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.JoinCustomMatchForInviteDelay
// (Latent, PreOperator, Net, NetReliable, Native, Operator, Static)

void APComPlayerController::STATIC_JoinCustomMatchForInviteDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.JoinCustomMatchForInviteDelay");

	APComPlayerController_JoinCustomMatchForInviteDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.JoinCustomMatchFromInvite
// (Final, Defined, Latent, PreOperator, Simulated, Native, HasOptionalParms)

void APComPlayerController::JoinCustomMatchFromInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.JoinCustomMatchFromInvite");

	APComPlayerController_JoinCustomMatchFromInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnJoinSessionForReceivedInviteComplete
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_OnJoinSessionForReceivedInviteComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnJoinSessionForReceivedInviteComplete");

	APComPlayerController_OnJoinSessionForReceivedInviteComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckForGameSessionJoin
// (Net, Simulated, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::STATIC_OnPrivilegeCheckForGameSessionJoin(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPrivilegeCheckForGameSessionJoin");

	APComPlayerController_OnPrivilegeCheckForGameSessionJoin_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelCheckedCompleteForPartyJoin
// (Final, Net, Simulated, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::STATIC_OnPrivilegeLevelCheckedCompleteForPartyJoin(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPrivilegeLevelCheckedCompleteForPartyJoin");

	APComPlayerController_OnPrivilegeLevelCheckedCompleteForPartyJoin_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGameDestroyedForPartyJoin
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_OnGameDestroyedForPartyJoin(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnGameDestroyedForPartyJoin");

	APComPlayerController_OnGameDestroyedForPartyJoin_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnAlternatePrivilegeLevelCheckedComplete
// (Latent, PreOperator, Singular, Simulated, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::STATIC_OnAlternatePrivilegeLevelCheckedComplete(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnAlternatePrivilegeLevelCheckedComplete");

	APComPlayerController_OnAlternatePrivilegeLevelCheckedComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGameInviteAccepted
// (PreOperator, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FOnlineGameSearchResult InviteResult                   (Const, Parm, OutParm)

void APComPlayerController::OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnGameInviteAccepted");

	APComPlayerController_OnGameInviteAccepted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteResult != nullptr)
		*InviteResult = params.InviteResult;
}


// Function PlatformCommon.PComPlayerController.JoinPartySession
// (Iterator, Latent, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// unsigned char                  PartySessionGuid               (Parm)

void APComPlayerController::JoinPartySession(unsigned char PartySessionGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.JoinPartySession");

	APComPlayerController_JoinPartySession_Params params;
	params.PartySessionGuid = PartySessionGuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPartySessionDestroyed
// (Final, Iterator, Latent, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnPartySessionDestroyed(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPartySessionDestroyed");

	APComPlayerController_OnPartySessionDestroyed_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DestroyPartySession
// (Final, Defined, Iterator, Latent, Simulated, Native, HasOptionalParms)

void APComPlayerController::DestroyPartySession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.DestroyPartySession");

	APComPlayerController_DestroyPartySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.InvitePlayerToParty
// (Defined, Iterator, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            InPlayerId                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::InvitePlayerToParty(const struct FUniqueNetId& InPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.InvitePlayerToParty");

	APComPlayerController_InvitePlayerToParty_Params params;
	params.InPlayerId = InPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.InvitePlayerToPartyByName
// (Final, Defined, Iterator, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FString                 InPlayerName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::InvitePlayerToPartyByName(const struct FString& InPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.InvitePlayerToPartyByName");

	APComPlayerController_InvitePlayerToPartyByName_Params params;
	params.InPlayerName = InPlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnCreatePartySessionComplete
// (Defined, Latent, PreOperator, Singular, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bSuccessful                    (Parm)

void APComPlayerController::STATIC_OnCreatePartySessionComplete(const struct FName& SessionName, bool bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnCreatePartySessionComplete");

	APComPlayerController_OnCreatePartySessionComplete_Params params;
	params.SessionName = SessionName;
	params.bSuccessful = bSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.CreatePartySession
// (Iterator, Latent, Simulated, Native, HasOptionalParms)

void APComPlayerController::CreatePartySession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CreatePartySession");

	APComPlayerController_CreatePartySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UnregisterP2PEnemiesForCustomMatch
// (Defined, PreOperator, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// TArray<struct FUniqueNetId>    EnemyIds                       (Parm, NeedCtorLink)

void APComPlayerController::UnregisterP2PEnemiesForCustomMatch(TArray<struct FUniqueNetId> EnemyIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UnregisterP2PEnemiesForCustomMatch");

	APComPlayerController_UnregisterP2PEnemiesForCustomMatch_Params params;
	params.EnemyIds = EnemyIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGetVoicePermissionsForUsersComplete
// (Iterator, Latent, PreOperator, Singular, Simulated, Native, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResult> Results                        (Parm, NeedCtorLink)

void APComPlayerController::STATIC_OnGetVoicePermissionsForUsersComplete(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnGetVoicePermissionsForUsersComplete");

	APComPlayerController_OnGetVoicePermissionsForUsersComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGetSessionMemberInfoComplete
// (Iterator, PreOperator, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnGetSessionMemberInfoComplete(TArray<struct FSessionMemberInfo> SessionListInfo, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnGetSessionMemberInfoComplete");

	APComPlayerController_OnGetSessionMemberInfoComplete_Params params;
	params.SessionListInfo = SessionListInfo;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGetUserConnectionInfoComplete
// (Final, Iterator, PreOperator, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnGetUserConnectionInfoComplete(TArray<struct FSessionMemberInfo> SessionListInfo, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnGetUserConnectionInfoComplete");

	APComPlayerController_OnGetUserConnectionInfoComplete_Params params;
	params.SessionListInfo = SessionListInfo;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetUserNamesForPS4P2PConnections
// (Final, Defined, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> APComPlayerController::STATIC_GetUserNamesForPS4P2PConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.GetUserNamesForPS4P2PConnections");

	APComPlayerController_GetUserNamesForPS4P2PConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CloseConnectionsToInvalidPeers
// (Final, Defined, Latent, PreOperator, Native, Operator, Static)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, NeedCtorLink)

void APComPlayerController::STATIC_CloseConnectionsToInvalidPeers(TArray<struct FSessionMemberInfo> SessionListInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CloseConnectionsToInvalidPeers");

	APComPlayerController_CloseConnectionsToInvalidPeers_Params params;
	params.SessionListInfo = SessionListInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.EstablishPeers
// (PreOperator, Simulated, Native, HasOptionalParms)

void APComPlayerController::EstablishPeers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.EstablishPeers");

	APComPlayerController_EstablishPeers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.LostP2PConnection
// (Defined, Latent, Singular, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)

void APComPlayerController::LostP2PConnection(const struct FUniqueNetId& UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.LostP2PConnection");

	APComPlayerController_LostP2PConnection_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetControllerIdFromNetId
// (Final, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            ControllerId                   (Parm, OutParm)

void APComPlayerController::GetControllerIdFromNetId(const struct FUniqueNetId& PlayerID, int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.GetControllerIdFromNetId");

	APComPlayerController_GetControllerIdFromNetId_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControllerId != nullptr)
		*ControllerId = params.ControllerId;
}


// Function PlatformCommon.PComPlayerController.PairLoggedInUserAndCurrentController
// (Defined, Singular, Simulated, Native, HasOptionalParms)

void APComPlayerController::PairLoggedInUserAndCurrentController()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PairLoggedInUserAndCurrentController");

	APComPlayerController_PairLoggedInUserAndCurrentController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsInGame
// (PreOperator, Net, NetReliable, Native, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_IsInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsInGame");

	APComPlayerController_IsInGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.IsPackageInstalled
// (Final, Defined, PreOperator, Net, NetReliable, Native, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_IsPackageInstalled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsPackageInstalled");

	APComPlayerController_IsPackageInstalled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnMultiplayerSessionChange
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FSessionUpdateInfo      SessionChanges                 (Parm, NeedCtorLink)

void APComPlayerController::OnMultiplayerSessionChange(const struct FName& SessionName, const struct FSessionUpdateInfo& SessionChanges)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnMultiplayerSessionChange");

	APComPlayerController_OnMultiplayerSessionChange_Params params;
	params.SessionName = SessionName;
	params.SessionChanges = SessionChanges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.CheckFilterText
// (Latent, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::CheckFilterText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CheckFilterText");

	APComPlayerController_CheckFilterText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CanCommunicateTextWithUsersByUniqueNetIds
// (Final, Defined, Iterator, Simulated, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::CanCommunicateTextWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CanCommunicateTextWithUsersByUniqueNetIds");

	APComPlayerController_CanCommunicateTextWithUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CanCommunicateText
// (Defined, Iterator, Simulated, Native, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::CanCommunicateText(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CanCommunicateText");

	APComPlayerController_CanCommunicateText_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnTextFilterApplied
// (Defined, Net, Exec, Native, Operator, Static)
// Parameters:
// struct FString                 OriginalText                   (Parm, NeedCtorLink)
// struct FString                 FilteredText                   (Parm, NeedCtorLink)
// bool                           bCensorCompletely              (Parm)

void APComPlayerController::STATIC_OnTextFilterApplied(const struct FString& OriginalText, const struct FString& FilteredText, bool bCensorCompletely)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnTextFilterApplied");

	APComPlayerController_OnTextFilterApplied_Params params;
	params.OriginalText = OriginalText;
	params.FilteredText = FilteredText;
	params.bCensorCompletely = bCensorCompletely;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.RequestUpdateFriendsList
// (Iterator, PreOperator, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// bool                           bForceRequest                  (OptionalParm, Parm)

void APComPlayerController::STATIC_RequestUpdateFriendsList(bool bForceRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.RequestUpdateFriendsList");

	APComPlayerController_RequestUpdateFriendsList_Params params;
	params.bForceRequest = bForceRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateMctsWithFriends
// (Final, Defined, Iterator, Latent, Singular, Exec, Native, Operator, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_UpdateMctsWithFriends(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateMctsWithFriends");

	APComPlayerController_UpdateMctsWithFriends_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnContentPurchaseResponse
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// bool                           bAuthorized                    (Parm)
// struct FQWord                  qwOrderId                      (Parm)

void APComPlayerController::STATIC_OnContentPurchaseResponse(bool bAuthorized, const struct FQWord& qwOrderId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnContentPurchaseResponse");

	APComPlayerController_OnContentPurchaseResponse_Params params;
	params.bAuthorized = bAuthorized;
	params.qwOrderId = qwOrderId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckedForUsersByUniqueNetIds
// (Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResultByUniqueNetId> Results                        (Parm, NeedCtorLink)

void APComPlayerController::STATIC_OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPrivilegeCheckedForUsersByUniqueNetIds");

	APComPlayerController_OnPrivilegeCheckedForUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelChecked
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::STATIC_OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPrivilegeLevelChecked");

	APComPlayerController_OnPrivilegeLevelChecked_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClearOnlineDelegates
// (PreOperator, Singular, Net, Exec, HasOptionalParms)

void APComPlayerController::ClearOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ClearOnlineDelegates");

	APComPlayerController_ClearOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.RegisterOnlineDelegates
// (Final, Iterator, Latent, Singular, NetReliable, Simulated, Native, Event, Static)

void APComPlayerController::STATIC_RegisterOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.RegisterOnlineDelegates");

	APComPlayerController_RegisterOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClientRestablishP2PConnections
// (Final, Latent, PreOperator, Native, Operator, Static)

void APComPlayerController::STATIC_ClientRestablishP2PConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ClientRestablishP2PConnections");

	APComPlayerController_ClientRestablishP2PConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ServerReEstablishP2PConnections
// (Iterator, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_ServerReEstablishP2PConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ServerReEstablishP2PConnections");

	APComPlayerController_ServerReEstablishP2PConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsReconnect
// (Iterator, PreOperator, Net, NetReliable, Native, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_IsReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsReconnect");

	APComPlayerController_IsReconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.RestablishVoiceForReconnect
// (Final, Latent, Singular, Simulated, Native, HasOptionalParms)

void APComPlayerController::RestablishVoiceForReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.RestablishVoiceForReconnect");

	APComPlayerController_RestablishVoiceForReconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnJoinOnlineGameCompleteForReceivedSessionInfo
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_OnJoinOnlineGameCompleteForReceivedSessionInfo(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnJoinOnlineGameCompleteForReceivedSessionInfo");

	APComPlayerController_OnJoinOnlineGameCompleteForReceivedSessionInfo_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ReceiveSessionInfo
// (Final, Defined, Iterator, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// unsigned char                  PlatformSpecificInfo           (Parm)
// TEnumAsByte<EConsoleType>      ConsoleType                    (Parm)

void APComPlayerController::ReceiveSessionInfo(unsigned char PlatformSpecificInfo, TEnumAsByte<EConsoleType> ConsoleType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ReceiveSessionInfo");

	APComPlayerController_ReceiveSessionInfo_Params params;
	params.PlatformSpecificInfo = PlatformSpecificInfo;
	params.ConsoleType = ConsoleType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnCreateOnlineGameComplete
// (Latent, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnCreateOnlineGameComplete");

	APComPlayerController_OnCreateOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChooseThisControllerForSessionScout
// (Final, Latent, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           bCustomMatch                   (Parm)
// int                            MaxPlayers                     (Parm)
// bool                           bPrivate                       (Parm)
// TArray<struct FUniqueNetId>    ReservedMembers                (OptionalParm, Parm, OutParm, NeedCtorLink)

void APComPlayerController::ChooseThisControllerForSessionScout(bool bCustomMatch, int MaxPlayers, bool bPrivate, TArray<struct FUniqueNetId>* ReservedMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ChooseThisControllerForSessionScout");

	APComPlayerController_ChooseThisControllerForSessionScout_Params params;
	params.bCustomMatch = bCustomMatch;
	params.MaxPlayers = MaxPlayers;
	params.bPrivate = bPrivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReservedMembers != nullptr)
		*ReservedMembers = params.ReservedMembers;
}


// Function PlatformCommon.PComPlayerController.OnDestroyOnlineGameComplete
// (Iterator, Latent, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnDestroyOnlineGameComplete");

	APComPlayerController_OnDestroyOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnEndOnlineGameComplete
// (Final, Iterator, Latent, Net, NetReliable, Native, HasOptionalParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnEndOnlineGameComplete");

	APComPlayerController_OnEndOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.FinishQuitToMainMenu
// (Final, Iterator, PreOperator, Net, Native, Operator, Static)

void APComPlayerController::STATIC_FinishQuitToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.FinishQuitToMainMenu");

	APComPlayerController_FinishQuitToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.CleanupOnlineSubsystemSession
// (Defined, Iterator, PreOperator, Native, Operator, Static)
// Parameters:
// bool                           bWasFromMenu                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_CleanupOnlineSubsystemSession(bool bWasFromMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CleanupOnlineSubsystemSession");

	APComPlayerController_CleanupOnlineSubsystemSession_Params params;
	params.bWasFromMenu = bWasFromMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.QuitToMainMenu
// (Defined, Iterator, Singular, Simulated, Native, HasOptionalParms)

void APComPlayerController::QuitToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.QuitToMainMenu");

	APComPlayerController_QuitToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ServerAcknowledgePossession
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, HasOptionalParms)
// Parameters:
// class APawn*                   P                              (Parm)

void APComPlayerController::ServerAcknowledgePossession(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ServerAcknowledgePossession");

	APComPlayerController_ServerAcknowledgePossession_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.AcknowledgePossession
// (Final, Net, Exec, HasOptionalParms)
// Parameters:
// class APawn*                   P                              (Parm)

void APComPlayerController::AcknowledgePossession(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.AcknowledgePossession");

	APComPlayerController_AcknowledgePossession_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnAllMarketplaceProductDetailsRead
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_OnAllMarketplaceProductDetailsRead()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnAllMarketplaceProductDetailsRead");

	APComPlayerController_OnAllMarketplaceProductDetailsRead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.LeaveMatchQueue
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Native, Operator, Static)

void APComPlayerController::STATIC_LeaveMatchQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.LeaveMatchQueue");

	APComPlayerController_LeaveMatchQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdatePartyUI
// (Defined, PreOperator, Singular, Exec, Native, Operator, Static)

void APComPlayerController::STATIC_UpdatePartyUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdatePartyUI");

	APComPlayerController_UpdatePartyUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TryOpenPartyUI
// (Final, Defined, Latent, Singular, Exec, Native, Operator, Static)

void APComPlayerController::STATIC_TryOpenPartyUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TryOpenPartyUI");

	APComPlayerController_TryOpenPartyUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowCustomGameDisallowedPopup
// (Final, PreOperator, Net, NetReliable, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_ShowCustomGameDisallowedPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowCustomGameDisallowedPopup");

	APComPlayerController_ShowCustomGameDisallowedPopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPackageNotInstalledForPartyInviteWarning
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_ShowPackageNotInstalledForPartyInviteWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowPackageNotInstalledForPartyInviteWarning");

	APComPlayerController_ShowPackageNotInstalledForPartyInviteWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPartyNoLongerAvailableWarning
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_ShowPartyNoLongerAvailableWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowPartyNoLongerAvailableWarning");

	APComPlayerController_ShowPartyNoLongerAvailableWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPartyFullWarning
// (Iterator, PreOperator, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// bool                           bPartySession                  (Parm)

void APComPlayerController::STATIC_ShowPartyFullWarning(bool bPartySession)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowPartyFullWarning");

	APComPlayerController_ShowPartyFullWarning_Params params;
	params.bPartySession = bPartySession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowUnableToReadFriendsListWarning
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_ShowUnableToReadFriendsListWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowUnableToReadFriendsListWarning");

	APComPlayerController_ShowUnableToReadFriendsListWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowNoFriendsForPartyInviteWarning
// (Defined, PreOperator, Net, NetReliable, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_ShowNoFriendsForPartyInviteWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowNoFriendsForPartyInviteWarning");

	APComPlayerController_ShowNoFriendsForPartyInviteWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowControllerDisconnectedWarning
// (PreOperator, Net, NetReliable, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_ShowControllerDisconnectedWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowControllerDisconnectedWarning");

	APComPlayerController_ShowControllerDisconnectedWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShouldPartySessionsBePublic
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_ShouldPartySessionsBePublic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShouldPartySessionsBePublic");

	APComPlayerController_ShouldPartySessionsBePublic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CreateOrJoinPartySession
// (Latent, Singular, Native, Operator, Static)

void APComPlayerController::STATIC_CreateOrJoinPartySession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CreateOrJoinPartySession");

	APComPlayerController_CreateOrJoinPartySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ArePartySessionInvitesAllowed
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Exec, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_ArePartySessionInvitesAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ArePartySessionInvitesAllowed");

	APComPlayerController_ArePartySessionInvitesAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.UpdateMCTSSession
// (Defined, Iterator, Latent, Singular, Exec, Native, Operator, Static)
// Parameters:
// struct FString                 SessionGuid                    (Parm, NeedCtorLink)
// bool                           bIsHost                        (Parm)

void APComPlayerController::STATIC_UpdateMCTSSession(const struct FString& SessionGuid, bool bIsHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateMCTSSession");

	APComPlayerController_UpdateMCTSSession_Params params;
	params.SessionGuid = SessionGuid;
	params.bIsHost = bIsHost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.BlockPartySceneInput
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Operator, Static)
// Parameters:
// bool                           bBlockInput                    (Parm)

void APComPlayerController::STATIC_BlockPartySceneInput(bool bBlockInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.BlockPartySceneInput");

	APComPlayerController_BlockPartySceneInput_Params params;
	params.bBlockInput = bBlockInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.FilterFriendListForPeoplePicker
// (Iterator, PreOperator, Net, Native, Operator, Static)
// Parameters:
// TArray<struct FOnlineFriend>   FriendList                     (Parm, OutParm, NeedCtorLink)
// TArray<struct FSessionMemberInfo> SessionMemberList              (Parm, OutParm, NeedCtorLink)

void APComPlayerController::STATIC_FilterFriendListForPeoplePicker(TArray<struct FOnlineFriend>* FriendList, TArray<struct FSessionMemberInfo>* SessionMemberList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.FilterFriendListForPeoplePicker");

	APComPlayerController_FilterFriendListForPeoplePicker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendList != nullptr)
		*FriendList = params.FriendList;
	if (SessionMemberList != nullptr)
		*SessionMemberList = params.SessionMemberList;
}


// Function PlatformCommon.PComPlayerController.ShowPrivilegeMessageAndDeclineInvite
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_ShowPrivilegeMessageAndDeclineInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowPrivilegeMessageAndDeclineInvite");

	APComPlayerController_ShowPrivilegeMessageAndDeclineInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ConnectToPeers
// (Final, Iterator, Singular, Native, Operator, Static)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, OutParm, NeedCtorLink)

void APComPlayerController::STATIC_ConnectToPeers(TArray<struct FSessionMemberInfo>* SessionListInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ConnectToPeers");

	APComPlayerController_ConnectToPeers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SessionListInfo != nullptr)
		*SessionListInfo = params.SessionListInfo;
}


// Function PlatformCommon.PComPlayerController.TryJoinSession
// (Defined, Latent, Singular, Exec, Native, Operator, Static)

void APComPlayerController::STATIC_TryJoinSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TryJoinSession");

	APComPlayerController_TryJoinSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.MCTSSetSessionId
// (Latent, Simulated, Native, Operator, Static)
// Parameters:
// unsigned char                  PlatformSpecificInfo           (Parm)

void APComPlayerController::STATIC_MCTSSetSessionId(unsigned char PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.MCTSSetSessionId");

	APComPlayerController_MCTSSetSessionId_Params params;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsInCustomMatch
// (Final, Defined, Iterator, Latent, Net, NetReliable, Native, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_IsInCustomMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsInCustomMatch");

	APComPlayerController_IsInCustomMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.SendSessionEnd
// (Defined, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_SendSessionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.SendSessionEnd");

	APComPlayerController_SendSessionEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.SendSessionStart
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            GameModeId                     (Parm)

void APComPlayerController::STATIC_SendSessionStart(int GameModeId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.SendSessionStart");

	APComPlayerController_SendSessionStart_Params params;
	params.GameModeId = GameModeId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnRemoteTalkerStatusChange
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            RemoteNetId                    (Parm)
// bool                           bIsTalking                     (Parm)

void APComPlayerController::STATIC_OnRemoteTalkerStatusChange(const struct FUniqueNetId& RemoteNetId, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnRemoteTalkerStatusChange");

	APComPlayerController_OnRemoteTalkerStatusChange_Params params;
	params.RemoteNetId = RemoteNetId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnCurrentUserChanged
// (Final, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 CurrentUser                    (Parm, NeedCtorLink)
// struct FString                 LoggedInUser                   (Parm, NeedCtorLink)

void APComPlayerController::STATIC_OnCurrentUserChanged(unsigned char LocalUserNum, const struct FString& CurrentUser, const struct FString& LoggedInUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnCurrentUserChanged");

	APComPlayerController_OnCurrentUserChanged_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CurrentUser = CurrentUser;
	params.LoggedInUser = LoggedInUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnConnectionStatusChange
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (Parm)

void APComPlayerController::STATIC_OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnConnectionStatusChange");

	APComPlayerController_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnLoginStatusChange
// (Defined, PreOperator, Net, NetReliable, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<ELoginStatus>      NewStatus                      (Parm)
// struct FUniqueNetId            NewId                          (Parm)

void APComPlayerController::STATIC_OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnLoginStatusChange");

	APComPlayerController_OnLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnMarketplaceItemPurchased
// (Defined, Exec, Native, Event, Static)

void APComPlayerController::STATIC_OnMarketplaceItemPurchased()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnMarketplaceItemPurchased");

	APComPlayerController_OnMarketplaceItemPurchased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetPlayerDLCLicenses
// (Final, Iterator, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// TArray<struct FOnlineContent>  ContentList                    (Parm, OutParm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> APComPlayerController::GetPlayerDLCLicenses(TArray<struct FOnlineContent>* ContentList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.GetPlayerDLCLicenses");

	APComPlayerController_GetPlayerDLCLicenses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentList != nullptr)
		*ContentList = params.ContentList;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnReadPlayerMarketplaceInventoryComplete
// (Iterator, Net, Simulated, Native, Operator, Static)

void APComPlayerController::STATIC_OnReadPlayerMarketplaceInventoryComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnReadPlayerMarketplaceInventoryComplete");

	APComPlayerController_OnReadPlayerMarketplaceInventoryComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForPortalInventory
// (Final, Iterator, Net, Exec, Native, Operator, Static)
// Parameters:
// bool                           bSuccess                       (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 Token                          (Parm, NeedCtorLink)
// struct FString                 AuthToken                      (Parm, NeedCtorLink)
// struct FString                 Signature                      (Parm, NeedCtorLink)

void APComPlayerController::STATIC_PlayerReceivedURLTokenAndSignatureForPortalInventory(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForPortalInventory");

	APComPlayerController_PlayerReceivedURLTokenAndSignatureForPortalInventory_Params params;
	params.bSuccess = bSuccess;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;
	params.Token = Token;
	params.AuthToken = AuthToken;
	params.Signature = Signature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ProcessPortalInventoryWithAuthToken
// (Final, Iterator, Singular, Simulated, Native, HasOptionalParms)

void APComPlayerController::ProcessPortalInventoryWithAuthToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ProcessPortalInventoryWithAuthToken");

	APComPlayerController_ProcessPortalInventoryWithAuthToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpStoreCatalog
// (Final, Defined, Latent, PreOperator, Singular, Native, Operator, Static)
// Parameters:
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)

void APComPlayerController::STATIC_DumpStoreCatalog(TEnumAsByte<EMediaItemType> MediaType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.DumpStoreCatalog");

	APComPlayerController_DumpStoreCatalog_Params params;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpConumables
// (Latent, PreOperator, Singular, Native, Operator, Static)

void APComPlayerController::STATIC_DumpConumables()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.DumpConumables");

	APComPlayerController_DumpConumables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpDurables
// (Final, Latent, PreOperator, Singular, Native, Operator, Static)

void APComPlayerController::STATIC_DumpDurables()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.DumpDurables");

	APComPlayerController_DumpDurables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpGameProducts
// (Defined, Latent, PreOperator, Singular, Native, Operator, Static)

void APComPlayerController::STATIC_DumpGameProducts()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.DumpGameProducts");

	APComPlayerController_DumpGameProducts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnReadAdditionalProductDetailsComplete
// (Final, Defined, Exec, Native, Event, Static)
// Parameters:
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)

void APComPlayerController::STATIC_OnReadAdditionalProductDetailsComplete(TEnumAsByte<EMediaItemType> MediaType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnReadAdditionalProductDetailsComplete");

	APComPlayerController_OnReadAdditionalProductDetailsComplete_Params params;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnReadDetailsForProductIdListComplete
// (Defined, Net, Simulated, Native, Operator, Static)
// Parameters:
// TArray<struct FMarketplaceProductDetails> ProductList                    (Parm, OutParm, NeedCtorLink)

void APComPlayerController::STATIC_OnReadDetailsForProductIdListComplete(TArray<struct FMarketplaceProductDetails>* ProductList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnReadDetailsForProductIdListComplete");

	APComPlayerController_OnReadDetailsForProductIdListComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProductList != nullptr)
		*ProductList = params.ProductList;
}


// Function PlatformCommon.PComPlayerController.OnReadAvailableProductsComplete
// (Iterator, Exec, Native, Event, Static)
// Parameters:
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)

void APComPlayerController::STATIC_OnReadAvailableProductsComplete(TEnumAsByte<EMediaItemType> MediaType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnReadAvailableProductsComplete");

	APComPlayerController_OnReadAvailableProductsComplete_Params params;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.RefreshStoreData
// (Latent, Singular, Simulated, Native, HasOptionalParms)

void APComPlayerController::RefreshStoreData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.RefreshStoreData");

	APComPlayerController_RefreshStoreData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsLoggedIntoOSS
// (Final, Latent, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::IsLoggedIntoOSS()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsLoggedIntoOSS");

	APComPlayerController_IsLoggedIntoOSS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.ShowConsoleLoginUI
// (Iterator, Latent, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bForceLoginAfter               (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::ShowConsoleLoginUI(int ControllerId, bool bForceLoginAfter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowConsoleLoginUI");

	APComPlayerController_ShowConsoleLoginUI_Params params;
	params.ControllerId = ControllerId;
	params.bForceLoginAfter = bForceLoginAfter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CacheLoggedInGamepad
// (Final, Iterator, Simulated, Native, HasOptionalParms)

void APComPlayerController::CacheLoggedInGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CacheLoggedInGamepad");

	APComPlayerController_CacheLoggedInGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerReceivedTokenForLogin
// (Final, Defined, Net, Exec, Native, Operator, Static)
// Parameters:
// bool                           bSuccess                       (Parm)

void APComPlayerController::STATIC_PlayerReceivedTokenForLogin(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayerReceivedTokenForLogin");

	APComPlayerController_PlayerReceivedTokenForLogin_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForLogin
// (Iterator, Net, Exec, Native, Operator, Static)
// Parameters:
// bool                           bSuccess                       (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 Token                          (Parm, NeedCtorLink)
// struct FString                 AuthToken                      (Parm, NeedCtorLink)
// struct FString                 Signature                      (Parm, NeedCtorLink)

void APComPlayerController::STATIC_PlayerReceivedURLTokenAndSignatureForLogin(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForLogin");

	APComPlayerController_PlayerReceivedURLTokenAndSignatureForLogin_Params params;
	params.bSuccess = bSuccess;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;
	params.Token = Token;
	params.AuthToken = AuthToken;
	params.Signature = Signature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetOSSTokenAndSignatureForLogin
// (Iterator, PreOperator, Simulated, Native, HasOptionalParms)

void APComPlayerController::GetOSSTokenAndSignatureForLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.GetOSSTokenAndSignatureForLogin");

	APComPlayerController_GetOSSTokenAndSignatureForLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetTokenURL
// (Final, Iterator, Latent, PreOperator, Singular, Exec, Native, Operator, Static)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APComPlayerController::STATIC_GetTokenURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.GetTokenURL");

	APComPlayerController_GetTokenURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.BeginLogin
// (Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Operator, Static)

void APComPlayerController::STATIC_BeginLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.BeginLogin");

	APComPlayerController_BeginLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerRetrievedOSSInventory
// (Final, Defined, Singular, Net, Simulated, Native, Operator, Static)
// Parameters:
// TArray<struct FMarketplaceInventoryItem> Items                          (Parm, OutParm, NeedCtorLink)

void APComPlayerController::STATIC_PlayerRetrievedOSSInventory(TArray<struct FMarketplaceInventoryItem>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayerRetrievedOSSInventory");

	APComPlayerController_PlayerRetrievedOSSInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function PlatformCommon.PComPlayerController.ValidateCreatedPartySession
// (Final, Latent, Net, Exec, Native, Operator, Static)

void APComPlayerController::STATIC_ValidateCreatedPartySession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ValidateCreatedPartySession");

	APComPlayerController_ValidateCreatedPartySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateClientAuthToken
// (Defined, Iterator, Net, Exec, Native, Operator, Static)
// Parameters:
// struct FString                 Token                          (Parm, NeedCtorLink)

void APComPlayerController::STATIC_UpdateClientAuthToken(const struct FString& Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateClientAuthToken");

	APComPlayerController_UpdateClientAuthToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateClientToken
// (Final, Defined, Iterator, Net, Exec, Native, Operator, Static)
// Parameters:
// struct FString                 Token                          (Parm, NeedCtorLink)

void APComPlayerController::STATIC_UpdateClientToken(const struct FString& Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateClientToken");

	APComPlayerController_UpdateClientToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChallengeJoin
// (Final, Defined, PreOperator, Native, Operator, Static)
// Parameters:
// int                            nMatchId                       (Parm)
// struct FString                 fsName                         (Parm, NeedCtorLink)
// struct FString                 fsPassword                     (OptionalParm, Parm, NeedCtorLink)

void APComPlayerController::STATIC_ChallengeJoin(int nMatchId, const struct FString& fsName, const struct FString& fsPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ChallengeJoin");

	APComPlayerController_ChallengeJoin_Params params;
	params.nMatchId = nMatchId;
	params.fsName = fsName;
	params.fsPassword = fsPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChallengeCreate
// (Defined, PreOperator, Native, Operator, Static)
// Parameters:
// int                            nQueue                         (Parm)
// struct FString                 fsName                         (Parm, NeedCtorLink)
// struct FString                 fsPassword                     (OptionalParm, Parm, NeedCtorLink)

void APComPlayerController::STATIC_ChallengeCreate(int nQueue, const struct FString& fsName, const struct FString& fsPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ChallengeCreate");

	APComPlayerController_ChallengeCreate_Params params;
	params.nQueue = nQueue;
	params.fsName = fsName;
	params.fsPassword = fsPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateDatacenterPing
// (Latent, Net, Exec, Native, Operator, Static)

void APComPlayerController::STATIC_UpdateDatacenterPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateDatacenterPing");

	APComPlayerController_UpdateDatacenterPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TestVideoPlayer
// (Final, Defined, Iterator, PreOperator, Exec, Native, Operator, Static)

void APComPlayerController::STATIC_TestVideoPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TestVideoPlayer");

	APComPlayerController_TestVideoPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.AddCheats
// (Latent, PreOperator, Singular, Simulated, Exec, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_AddCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.AddCheats");

	APComPlayerController_AddCheats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClientAddCheats
// (Latent, PreOperator, Native, Operator, Static)

void APComPlayerController::STATIC_ClientAddCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ClientAddCheats");

	APComPlayerController_ClientAddCheats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.Jump
// (Iterator, Latent, Singular, Net, Simulated, Event, Static, HasOptionalParms)

void UPComPlayerInput::STATIC_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.Jump");

	UPComPlayerInput_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.UnbindCommand
// (Iterator, Latent, Singular, Exec, Native, Operator, Static)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           bGamepad                       (Parm)
// int                            nAlternate                     (OptionalParm, Parm)

void UPComPlayerInput::STATIC_UnbindCommand(const struct FString& Command, bool bGamepad, int nAlternate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.UnbindCommand");

	UPComPlayerInput_UnbindCommand_Params params;
	params.Command = Command;
	params.bGamepad = bGamepad;
	params.nAlternate = nAlternate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.UnbindCommandAll
// (Final, PreOperator, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)

void UPComPlayerInput::UnbindCommandAll(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.UnbindCommandAll");

	UPComPlayerInput_UnbindCommandAll_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.UnbindKey
// (Final, Iterator, Latent, Singular, Exec, Native, Operator, Static)
// Parameters:
// struct FName                   BindName                       (Const, Parm, OutParm)

void UPComPlayerInput::STATIC_UnbindKey(struct FName* BindName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.UnbindKey");

	UPComPlayerInput_UnbindKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BindName != nullptr)
		*BindName = params.BindName;
}


// Function PlatformCommon.PComPlayerInput.SetCommandBind
// (Final, Defined, Latent, Singular, Simulated, Native, HasOptionalParms)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           bGamepad                       (Parm)
// int                            nAlternate                     (Parm)
// struct FString                 ExtendedBinding                (Const, Parm, NeedCtorLink)

void UPComPlayerInput::SetCommandBind(const struct FString& Command, bool bGamepad, int nAlternate, const struct FString& ExtendedBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetCommandBind");

	UPComPlayerInput_SetCommandBind_Params params;
	params.Command = Command;
	params.bGamepad = bGamepad;
	params.nAlternate = nAlternate;
	params.ExtendedBinding = ExtendedBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetBindExtended
// (Final, Latent, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 ExtendedBinding                (Const, Parm, NeedCtorLink)
// struct FString                 Command                        (Parm, NeedCtorLink)

void UPComPlayerInput::STATIC_SetBindExtended(const struct FString& ExtendedBinding, const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetBindExtended");

	UPComPlayerInput_SetBindExtended_Params params;
	params.ExtendedBinding = ExtendedBinding;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivityY
// (Final, Defined, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPComPlayerInput::GetDisplayLookSensitivityY()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivityY");

	UPComPlayerInput_GetDisplayLookSensitivityY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivity
// (Defined, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPComPlayerInput::GetDisplayLookSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivity");

	UPComPlayerInput_GetDisplayLookSensitivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.SetAimAcceleration
// (Latent, PreOperator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// float                          fLookAccel                     (Parm)

void UPComPlayerInput::STATIC_SetAimAcceleration(float fLookAccel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetAimAcceleration");

	UPComPlayerInput_SetAimAcceleration_Params params;
	params.fLookAccel = fLookAccel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetLookSensitivity
// (Latent, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// float                          fSensitivity                   (Parm)
// float                          fSensitivityY                  (OptionalParm, Parm)

void UPComPlayerInput::STATIC_SetLookSensitivity(float fSensitivity, float fSensitivityY)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetLookSensitivity");

	UPComPlayerInput_SetLookSensitivity_Params params;
	params.fSensitivity = fSensitivity;
	params.fSensitivityY = fSensitivityY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetMouseInput
// (Final, Latent, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// bool                           bInvert                        (Parm)
// bool                           bSmooth                        (Parm)
// float                          fSensitivity                   (Parm)

void UPComPlayerInput::STATIC_SetMouseInput(bool bInvert, bool bSmooth, float fSensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetMouseInput");

	UPComPlayerInput_SetMouseInput_Params params;
	params.bInvert = bInvert;
	params.bSmooth = bSmooth;
	params.fSensitivity = fSensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetDirty
// (Net, NetReliable, Simulated, Native, Operator, Static)

void UPComPlayerInput::STATIC_SetDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetDirty");

	UPComPlayerInput_SetDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.ReadMouseSettings
// (Iterator, Latent, NetReliable, Simulated, Native, Operator, Static)

void UPComPlayerInput::STATIC_ReadMouseSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.ReadMouseSettings");

	UPComPlayerInput_ReadMouseSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.StoreMouseSettings
// (Final, Iterator, Latent, Exec, Native, Operator, Static)

void UPComPlayerInput::STATIC_StoreMouseSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.StoreMouseSettings");

	UPComPlayerInput_StoreMouseSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.GetKeybindWithCurrentModifiers
// (Final, Defined, Latent, Singular, Net, NetReliable, Simulated)
// Parameters:
// struct FName                   Key                            (Const, Parm, OutParm)
// struct FKeyBind                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FKeyBind UPComPlayerInput::GetKeybindWithCurrentModifiers(struct FName* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetKeybindWithCurrentModifiers");

	UPComPlayerInput_GetKeybindWithCurrentModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetBind
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)
// Parameters:
// struct FName                   Key                            (Const, Parm, OutParm)
// struct FKeyBind                ModifierKeyBind                (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPComPlayerInput::GetBind(struct FName* Key, struct FKeyBind* ModifierKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetBind");

	UPComPlayerInput_GetBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (ModifierKeyBind != nullptr)
		*ModifierKeyBind = params.ModifierKeyBind;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.KeybindToExtendedString
// (Defined, Latent, PreOperator, Net, NetReliable, Native, Operator, Static)
// Parameters:
// struct FKeyBind                Bind                           (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPComPlayerInput::STATIC_KeybindToExtendedString(struct FKeyBind* Bind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.KeybindToExtendedString");

	UPComPlayerInput_KeybindToExtendedString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bind != nullptr)
		*Bind = params.Bind;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.ExtendedStringToKeybind
// (Final, Defined, Latent, Net, Native, Operator, Static)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// struct FKeyBind                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FKeyBind UPComPlayerInput::STATIC_ExtendedStringToKeybind(const struct FString& Str, const struct FString& Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.ExtendedStringToKeybind");

	UPComPlayerInput_ExtendedStringToKeybind_Params params;
	params.Str = Str;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetBindFromCommand
// (Iterator, PreOperator, NetReliable, Native, Operator, Static)
// Parameters:
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// bool                           bGamepad                       (Parm)
// int                            nAlternate                     (OptionalParm, Parm)
// struct FKeyBind                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FKeyBind UPComPlayerInput::STATIC_GetBindFromCommand(const struct FString& Cmd, bool bGamepad, int nAlternate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetBindFromCommand");

	UPComPlayerInput_GetBindFromCommand_Params params;
	params.Cmd = Cmd;
	params.bGamepad = bGamepad;
	params.nAlternate = nAlternate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetBindExtended
// (Final, Defined, PreOperator, NetReliable, Native, Operator, Static)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)
// struct FKeyBind                Bind                           (Parm, OutParm, NeedCtorLink)
// bool                           bExactMatch                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPlayerInput::STATIC_GetBindExtended(const struct FString& Str, bool bExactMatch, struct FKeyBind* Bind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetBindExtended");

	UPComPlayerInput_GetBindExtended_Params params;
	params.Str = Str;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bind != nullptr)
		*Bind = params.Bind;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.ResetKeysToDefault
// (Final, Iterator, PreOperator, NetReliable, Simulated, Native, Operator, Static)

void UPComPlayerInput::STATIC_ResetKeysToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.ResetKeysToDefault");

	UPComPlayerInput_ResetKeysToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.IsInSphere
// (Final, PreOperator, Net, NetReliable, Native, Operator, Static)
// Parameters:
// float                          RewindTime                     (Parm)
// struct FVector                 LocationToCheck                (Parm)
// float                          RadiusToCheck                  (Parm)
// struct FPComPositionHistoryData PastDataUsed                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPositionHistoryServerComponent::STATIC_IsInSphere(float RewindTime, const struct FVector& LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPositionHistoryServerComponent.IsInSphere");

	UPComPositionHistoryServerComponent_IsInSphere_Params params;
	params.RewindTime = RewindTime;
	params.LocationToCheck = LocationToCheck;
	params.RadiusToCheck = RadiusToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PastDataUsed != nullptr)
		*PastDataUsed = params.PastDataUsed;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.IsOverlapping
// (Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Native)
// Parameters:
// float                          RewindTime                     (Parm)
// struct FVector                 LocationToCheck                (Parm)
// float                          RadiusToCheck                  (Parm)
// struct FPComPositionHistoryData PastDataUsed                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPositionHistoryServerComponent::IsOverlapping(float RewindTime, const struct FVector& LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPositionHistoryServerComponent.IsOverlapping");

	UPComPositionHistoryServerComponent_IsOverlapping_Params params;
	params.RewindTime = RewindTime;
	params.LocationToCheck = LocationToCheck;
	params.RadiusToCheck = RadiusToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PastDataUsed != nullptr)
		*PastDataUsed = params.PastDataUsed;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.GetPastData
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Native, Operator, Static)
// Parameters:
// float                          RewindTime                     (Parm)
// bool                           bUseClientTimeStamps           (OptionalParm, Parm)
// struct FPComPositionHistoryData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPComPositionHistoryData UPComPositionHistoryServerComponent::STATIC_GetPastData(float RewindTime, bool bUseClientTimeStamps)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPositionHistoryServerComponent.GetPastData");

	UPComPositionHistoryServerComponent_GetPastData_Params params;
	params.RewindTime = RewindTime;
	params.bUseClientTimeStamps = bUseClientTimeStamps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.RecordData
// (Final, Iterator, Latent, NetReliable, Simulated, Native, Operator, Static)

void UPComPositionHistoryServerComponent::STATIC_RecordData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPositionHistoryServerComponent.RecordData");

	UPComPositionHistoryServerComponent_RecordData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComRepInfo_Game.CreateMusicThemePlayer
// (Final, Defined, Iterator, Singular, Native, Operator, Static)

void APComRepInfo_Game::STATIC_CreateMusicThemePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComRepInfo_Game.CreateMusicThemePlayer");

	APComRepInfo_Game_CreateMusicThemePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComRepInfo_Game.PostBeginPlay
// (Final, Latent, Net, Simulated)

void APComRepInfo_Game::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComRepInfo_Game.PostBeginPlay");

	APComRepInfo_Game_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComRepInfo_Game.PlayMusicEvent
// (Final, Iterator, Singular, Net, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   EventName                      (Const, Parm)

void APComRepInfo_Game::STATIC_PlayMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComRepInfo_Game.PlayMusicEvent");

	APComRepInfo_Game_PlayMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scLogTickFlags
// (Final, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            nFlags                         (Parm)
// bool                           bSet                           (OptionalParm, Parm)

void UPComSupportCommands::STATIC_scLogTickFlags(int nFlags, bool bSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scLogTickFlags");

	UPComSupportCommands_scLogTickFlags_Params params;
	params.nFlags = nFlags;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfAlwaysRelevantLimit
// (Final, Defined, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::STATIC_scPerfAlwaysRelevantLimit(int feet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfAlwaysRelevantLimit");

	UPComSupportCommands_scPerfAlwaysRelevantLimit_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scGPerfServerFlags
// (Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            Flags                          (Parm)
// int                            alternate1                     (Parm)
// int                            alternate2                     (Parm)

void UPComSupportCommands::STATIC_scGPerfServerFlags(int Flags, int alternate1, int alternate2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scGPerfServerFlags");

	UPComSupportCommands_scGPerfServerFlags_Params params;
	params.Flags = Flags;
	params.alternate1 = alternate1;
	params.alternate2 = alternate2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfPhysThreshold
// (Final, Defined, Iterator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// float                          thresh1                        (Parm)
// float                          thesh2                         (Parm)

void UPComSupportCommands::STATIC_scPerfPhysThreshold(float thresh1, float thesh2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfPhysThreshold");

	UPComSupportCommands_scPerfPhysThreshold_Params params;
	params.thresh1 = thresh1;
	params.thesh2 = thesh2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfTickRate
// (Latent, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            tickHz                         (Parm)
// int                            altTickHz                      (Parm)

void UPComSupportCommands::STATIC_scPerfTickRate(int tickHz, int altTickHz)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfTickRate");

	UPComSupportCommands_scPerfTickRate_Params params;
	params.tickHz = tickHz;
	params.altTickHz = altTickHz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfDebugRelevMode
// (Final, Iterator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            Mode                           (Parm)

void UPComSupportCommands::STATIC_scPerfDebugRelevMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfDebugRelevMode");

	UPComSupportCommands_scPerfDebugRelevMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfDebugSkip
// (Defined, Iterator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            skips                          (Parm)

void UPComSupportCommands::STATIC_scPerfDebugSkip(int skips)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfDebugSkip");

	UPComSupportCommands_scPerfDebugSkip_Params params;
	params.skips = skips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfDebugFeet
// (Iterator, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::STATIC_scPerfDebugFeet(int feet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfDebugFeet");

	UPComSupportCommands_scPerfDebugFeet_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scDemoStop
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Operator, Static)

void UPComSupportCommands::STATIC_scDemoStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scDemoStop");

	UPComSupportCommands_scDemoStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scDemoRec
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::STATIC_scDemoRec(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scDemoRec");

	UPComSupportCommands_scDemoRec_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scTimer
// (Iterator, Latent, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::STATIC_scTimer(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scTimer");

	UPComSupportCommands_scTimer_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scTime
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            nSeconds                       (Parm)

void UPComSupportCommands::STATIC_scTime(int nSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scTime");

	UPComSupportCommands_scTime_Params params;
	params.nSeconds = nSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scScore
// (Final, Latent, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            nTeam                          (Parm)
// int                            nCount                         (OptionalParm, Parm)

void UPComSupportCommands::STATIC_scScore(int nTeam, int nCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scScore");

	UPComSupportCommands_scScore_Params params;
	params.nTeam = nTeam;
	params.nCount = nCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scEndGame
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)

void UPComSupportCommands::STATIC_scEndGame(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scEndGame");

	UPComSupportCommands_scEndGame_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scStartGame
// (Defined, Latent, Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)

void UPComSupportCommands::STATIC_scStartGame(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scStartGame");

	UPComSupportCommands_scStartGame_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scLogMark
// (Singular, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 Comment                        (Parm, NeedCtorLink)

void UPComSupportCommands::STATIC_scLogMark(const struct FString& Comment)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scLogMark");

	UPComSupportCommands_scLogMark_Params params;
	params.Comment = Comment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scLog
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// struct FString                 LogName                        (Parm, NeedCtorLink)
// bool                           bEnabled                       (OptionalParm, Parm)

void UPComSupportCommands::STATIC_scLog(const struct FString& LogName, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scLog");

	UPComSupportCommands_scLog_Params params;
	params.LogName = LogName;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmmf
// (Final, Defined, Latent, Singular, NetReliable, Native, Operator, Static)

void UPComSupportCommands::STATIC_gmmf()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmmf");

	UPComSupportCommands_gmmf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.SetLogServerTickStatsFlags
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Native, Operator, Static)
// Parameters:
// int                            Flags                          (Parm)
// bool                           bSet                           (Parm)

void UPComSupportCommands::STATIC_SetLogServerTickStatsFlags(int Flags, bool bSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.SetLogServerTickStatsFlags");

	UPComSupportCommands_SetLogServerTickStatsFlags_Params params;
	params.Flags = Flags;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugPhysicsThreshold
// (Defined, Iterator, Latent, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// float                          fThresh1                       (Parm)
// float                          fThresh2                       (Parm)

void UPComSupportCommands::STATIC_GPerfDebugPhysicsThreshold(float fThresh1, float fThresh2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfDebugPhysicsThreshold");

	UPComSupportCommands_GPerfDebugPhysicsThreshold_Params params;
	params.fThresh1 = fThresh1;
	params.fThresh2 = fThresh2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugTickRate
// (Final, PreOperator, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// int                            tickHz                         (Parm)
// int                            altTickHz                      (Parm)

void UPComSupportCommands::STATIC_GPerfDebugTickRate(int tickHz, int altTickHz)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfDebugTickRate");

	UPComSupportCommands_GPerfDebugTickRate_Params params;
	params.tickHz = tickHz;
	params.altTickHz = altTickHz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfAllRelevantLimit
// (Iterator, Latent, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::STATIC_GPerfAllRelevantLimit(int feet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfAllRelevantLimit");

	UPComSupportCommands_GPerfAllRelevantLimit_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfServerFlags
// (Defined, PreOperator, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// int                            Flags                          (Parm)
// int                            alternate1                     (Parm)
// int                            alternate2                     (Parm)

void UPComSupportCommands::STATIC_GPerfServerFlags(int Flags, int alternate1, int alternate2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfServerFlags");

	UPComSupportCommands_GPerfServerFlags_Params params;
	params.Flags = Flags;
	params.alternate1 = alternate1;
	params.alternate2 = alternate2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugRelevMode
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// int                            Mode                           (Parm)

void UPComSupportCommands::STATIC_GPerfDebugRelevMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfDebugRelevMode");

	UPComSupportCommands_GPerfDebugRelevMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugSkips
// (PreOperator, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// int                            skips                          (Parm)

void UPComSupportCommands::STATIC_GPerfDebugSkips(int skips)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfDebugSkips");

	UPComSupportCommands_GPerfDebugSkips_Params params;
	params.skips = skips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugFeet
// (Final, Iterator, Latent, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::STATIC_GPerfDebugFeet(int feet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfDebugFeet");

	UPComSupportCommands_GPerfDebugFeet_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmDiag
// (Defined, Iterator, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// int                            Code                           (Parm)
// int                            Route                          (Parm)

void UPComSupportCommands::STATIC_gmDiag(int Code, int Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmDiag");

	UPComSupportCommands_gmDiag_Params params;
	params.Code = Code;
	params.Route = Route;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmC
// (Iterator, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::STATIC_gmC(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmC");

	UPComSupportCommands_gmC_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmCommand
// (Final, Iterator, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::STATIC_gmCommand(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmCommand");

	UPComSupportCommands_gmCommand_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchLobbyResume
// (Final, Latent, Singular, NetReliable, Native, Operator, Static)

void UPComSupportCommands::STATIC_gmMatchLobbyResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmMatchLobbyResume");

	UPComSupportCommands_gmMatchLobbyResume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchLobbyPause
// (Latent, Singular, NetReliable, Native, Operator, Static)

void UPComSupportCommands::STATIC_gmMatchLobbyPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmMatchLobbyPause");

	UPComSupportCommands_gmMatchLobbyPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchNext
// (Defined, Latent, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// int                            nMapId                         (Parm)

void UPComSupportCommands::STATIC_gmMatchNext(int nMapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmMatchNext");

	UPComSupportCommands_gmMatchNext_Params params;
	params.nMapId = nMapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchForce
// (Final, Defined, Iterator, Singular, NetReliable, Native, Operator, Static)
// Parameters:
// int                            nQueueId                       (OptionalParm, Parm)

void UPComSupportCommands::STATIC_gmMatchForce(int nQueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmMatchForce");

	UPComSupportCommands_gmMatchForce_Params params;
	params.nQueueId = nQueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComUIManagerBase.DebugDraw
// (Final, Iterator, Latent, Simulated, Native, HasOptionalParms)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UPComUIManagerBase::DebugDraw(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComUIManagerBase.DebugDraw");

	UPComUIManagerBase_DebugDraw_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComUtilityFunctions.GetGDeltaTime
// (Defined, Latent, PreOperator, NetReliable, Native, Operator, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPComUtilityFunctions::STATIC_GetGDeltaTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComUtilityFunctions.GetGDeltaTime");

	UPComUtilityFunctions_GetGDeltaTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComUtilityFunctions.IsAWithStop
// (Defined, Iterator, Latent, Net, NetReliable, Native, Operator, Static)
// Parameters:
// class UObject*                 InObject                       (Parm)
// class UClass*                  SomeBase                       (Const, Parm)
// class UClass*                  StopAtBase                     (Const, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComUtilityFunctions::STATIC_IsAWithStop(class UObject* InObject, class UClass* SomeBase, class UClass* StopAtBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComUtilityFunctions.IsAWithStop");

	UPComUtilityFunctions_IsAWithStop_Params params;
	params.InObject = InObject;
	params.SomeBase = SomeBase;
	params.StopAtBase = StopAtBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComUtilityFunctions.FakeNetSerialize
// (Final, Iterator, Latent, Net, Native, Operator, Static)
// Parameters:
// struct FVector                 InVector                       (Const, Parm, OutParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UPComUtilityFunctions::STATIC_FakeNetSerialize(struct FVector* InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComUtilityFunctions.FakeNetSerialize");

	UPComUtilityFunctions_FakeNetSerialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InVector != nullptr)
		*InVector = params.InVector;

	return params.ReturnValue;
}


// Function PlatformCommon.PComVideoPlayer.DestroyMe
// (Defined, PreOperator, Singular, Native, Operator, Static)

void APComVideoPlayer::STATIC_DestroyMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.DestroyMe");

	APComVideoPlayer_DestroyMe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.TestOnVideoError
// (Final, Iterator, PreOperator, Exec, Native, Operator, Static)
// Parameters:
// class APComVideoPlayer*        VideoPlayer                    (Parm)
// TEnumAsByte<EPComVideoPlayerError> ErrorCode                      (Parm)

void APComVideoPlayer::STATIC_TestOnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.TestOnVideoError");

	APComVideoPlayer_TestOnVideoError_Params params;
	params.VideoPlayer = VideoPlayer;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.TestVideoPlayer
// (Final, Defined, Iterator, PreOperator, Exec, Native, Operator, Static)
// Parameters:
// class AActor*                  SpawningActor                  (Parm)
// struct FString                 InURL                          (OptionalParm, Parm, NeedCtorLink)

void APComVideoPlayer::STATIC_TestVideoPlayer(class AActor* SpawningActor, const struct FString& InURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.TestVideoPlayer");

	APComVideoPlayer_TestVideoPlayer_Params params;
	params.SpawningActor = SpawningActor;
	params.InURL = InURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.Initialize
// (Latent, PreOperator, Singular, Simulated, Native)

void APComVideoPlayer::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.Initialize");

	APComVideoPlayer_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.NativePostRenderFor
// (Defined, Latent, Singular, Net, Simulated, Native, Event)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void APComVideoPlayer::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.NativePostRenderFor");

	APComVideoPlayer_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.OnVideoError
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, Native, HasOptionalParms)
// Parameters:
// class APComVideoPlayer*        VideoPlayer                    (Parm)
// TEnumAsByte<EPComVideoPlayerError> ErrorCode                      (Parm)

void APComVideoPlayer::OnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.OnVideoError");

	APComVideoPlayer_OnVideoError_Params params;
	params.VideoPlayer = VideoPlayer;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.OnVideoFinished
// (Singular, Simulated, Native, HasOptionalParms)

void APComVideoPlayer::OnVideoFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.OnVideoFinished");

	APComVideoPlayer_OnVideoFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.UpdateReplicatedMusicEvent
// (Final, Defined, PreOperator, Singular, Exec, Native, Operator, Static)
// Parameters:
// struct FName                   EventName                      (Const, Parm)

void UPComMusicThemePlayer::STATIC_UpdateReplicatedMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.UpdateReplicatedMusicEvent");

	UPComMusicThemePlayer_UpdateReplicatedMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.UpdateMusicTrack
// (Latent, NetReliable, Simulated, Exec, Static)
// Parameters:
// struct FMusicTrackStruct       NewMusicTrack                  (Const, Parm, NeedCtorLink)
// float                          fDuration                      (Const, OptionalParm, Parm)

void UPComMusicThemePlayer::STATIC_UpdateMusicTrack(const struct FMusicTrackStruct& NewMusicTrack, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.UpdateMusicTrack");

	UPComMusicThemePlayer_UpdateMusicTrack_Params params;
	params.NewMusicTrack = NewMusicTrack;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.StopMusic
// (Final, Latent, Exec, Native, Operator, Static)

void UPComMusicThemePlayer::STATIC_StopMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.StopMusic");

	UPComMusicThemePlayer_StopMusic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.PlayMusicEvent
// (Final, Iterator, Singular, Net, Simulated, Native, Operator, Static)
// Parameters:
// struct FName                   EventName                      (Const, Parm)

void UPComMusicThemePlayer::STATIC_PlayMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.PlayMusicEvent");

	UPComMusicThemePlayer_PlayMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.PlayDefaultMusic
// (Singular, Net, Simulated, Native, Operator, Static)

void UPComMusicThemePlayer::STATIC_PlayDefaultMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.PlayDefaultMusic");

	UPComMusicThemePlayer_PlayDefaultMusic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.OnThemeLoaded
// (Final, Iterator, Net, Simulated, Native, Operator, Static)

void UPComMusicThemePlayer::STATIC_OnThemeLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.OnThemeLoaded");

	UPComMusicThemePlayer_OnThemeLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.LoadTheme
// (Singular, Net, NetReliable, Native, Operator, Static)
// Parameters:
// struct FString                 themepath                      (Const, Parm, NeedCtorLink)

void UPComMusicThemePlayer::STATIC_LoadTheme(const struct FString& themepath)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.LoadTheme");

	UPComMusicThemePlayer_LoadTheme_Params params;
	params.themepath = themepath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.GetDefaultThemePath
// (Final, Latent, PreOperator, NetReliable, Native, Operator, Static)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPComMusicThemePlayer::STATIC_GetDefaultThemePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.GetDefaultThemePath");

	UPComMusicThemePlayer_GetDefaultThemePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComMusicThemePlayer.LoadDefaultTheme
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, Operator, Static)

void UPComMusicThemePlayer::STATIC_LoadDefaultTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.LoadDefaultTheme");

	UPComMusicThemePlayer_LoadDefaultTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UPComMusicThemePlayer::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.Init");

	UPComMusicThemePlayer_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemeSyncActor.ReplicatedEvent
// (Final, Defined, Net, NetReliable, Simulated, Exec, HasOptionalParms)
// Parameters:
// struct FName                   VarName                        (Parm)

void APComMusicThemeSyncActor::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemeSyncActor.ReplicatedEvent");

	APComMusicThemeSyncActor_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEventClient
// (Final, PreOperator, Singular, Exec, Native, Operator, Static)
// Parameters:
// struct FName                   EventName                      (Parm)

void APComMusicThemeSyncActor::STATIC_UpdateMusicEventClient(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEventClient");

	APComMusicThemeSyncActor_UpdateMusicEventClient_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEvent
// (PreOperator, Singular, Exec, Native, Operator, Static)
// Parameters:
// struct FName                   EventName                      (Parm)

void APComMusicThemeSyncActor::STATIC_UpdateMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEvent");

	APComMusicThemeSyncActor_UpdateMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
