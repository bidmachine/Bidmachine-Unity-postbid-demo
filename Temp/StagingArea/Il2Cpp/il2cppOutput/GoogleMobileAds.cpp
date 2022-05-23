#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// GoogleMobileAds.Api.AdError
struct AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tA167BFC582BB586340190F79621BDB1186526063;
// GoogleMobileAds.Api.AdSize
struct AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478;
// GoogleMobileAds.Api.AdValue
struct AdValue_tAC1B7979E64B129833595108F13AD8E6777092BA;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C;
// GoogleMobileAds.Api.BannerView
struct BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B;
// GoogleMobileAds.Api.Reward
struct Reward_t93480A8C76DD13444048E1C0E9FCD295F4A0DEED;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t265C2A51135FFDB3D1DC32CDFBD6FBAFA1D9DE81;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t9FF9A508A3ADBB60A280F2EB15E7DBD06E99E10E;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t491174A6178E20C972651A92BB2F3BF7CD6E4298;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_tB3B81138BD6DB7231BEFD922F434A7BF832E0D52;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9;
// GoogleMobileAds.IClientFactory
struct IClientFactory_t5B6D2FE48098D53A81398A90A880725A679D449C;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86;
// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t6AFC524336458D177AA2E34566EB2447B12FAFE4;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t052F2E1A300FDB99F65C8ECDD9C14DC7F5F75237;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6AFC524336458D177AA2E34566EB2447B12FAFE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAdErrorClient_t265C2A51135FFDB3D1DC32CDFBD6FBAFA1D9DE81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_t5B6D2FE48098D53A81398A90A880725A679D449C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_tB3B81138BD6DB7231BEFD922F434A7BF832E0D52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_tA70E50A77B79AF718449D92B71CC89F34A0E6B90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral55D7DE77013E8A327C6934CC3264902283F7D427;
IL2CPP_EXTERN_C String_t* _stringLiteralA6292443F1F74698A3C4B93DE7A4584298C22FD7;
IL2CPP_EXTERN_C String_t* _stringLiteralC0343BD0A8FFCF941DD99486D38BB493EE32F4D6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF734B55F8D263AF40D90EC14C3A4F9216519DC13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m1D47D4E5A2ED587D522E94F09DF2B04E4046632A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__0_m014F51032B92C6E9F40427831CF7205B3AD23852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__1_m3981482AA287A54BEF3D0F0DB501AC2BEC46A0EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__2_mC75505D55AF5F1921383F537FC2692DFE520FC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__3_m0C12016F66DBD3388CAF10ACF89884376B71BEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__4_m471C1F4044D50A2F710756D3D6BB7B0FF076BAF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m531F358E64BD4D81F25D69C45147F3DD05D05B5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m796683E6C5D99666C847DB0E08742077FFDE0579_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m734AF72C8BB46171DF978EE4C7A171ABF63CB7AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m7565675A28437C6E7C1618FA36914FFE9F6DE924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mD8DE63F1A9BE8F27989602A01BA0E55DF7DD4A8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mFBDC18FD9C8312A880647A5EB685355417EE0611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__0_m8D09193C363E61D273AF4D78E6EE25149E3A1082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__1_mD432B246BFC9B4FD951FB3B17B349933C5229430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__2_mA89D2BF471FA8D12C93A11A526C3C9984921B425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__3_mA8D40A71B8B46FBAF1CA07460FE6DF3DFCD4FB0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__4_m1B7D3F472FE2A5239BC8B928F23E24608BD1F78E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__5_m59A2C988DBA1B35B58FD9BDBFB8DD885D3D4BB99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__6_mFE2234CFE184EE7002B51D4B33C0D73F33F3302A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__0_mA28B8CF3DA16B81DFAA90AEE6910B8896CAC1950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__1_m452F16894604D06D772EA86AE62CBB6A35313B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__2_m6C2398D2394701C52B20490D58A721314130231A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__3_m3CDBFE27CFC07ACCF0A55382667A3EF1242B5D2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__4_m069A92412D0229C1DA5F2925C866F7CDABD2DBA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__5_m0125351C4CB1BD2F89E3D5F11E4EE6C980D5D586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__6_m02F8BA3C9185864B64AFFC8283D9FC7F645EA706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__7_m41C4798E38F905309E709314B7C5CB33554BCC2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__8_m3D84D06EEE23834A8999AA6FF6C3935198B6794A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mF2644256C093ABE5CF29A2C7CA7C44D324819DB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdError_GetMessage_m94F0BDAE0E46029C8B6EE6F403A1ECA68D7C605A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_ConfigureBannerEvents_m7CA8EC2B1083BC12D58EC91CF66703A6FAFDB9D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_Destroy_mC687CCD57973117E5BE76DE4BF69D5215C345693_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_Hide_m1C813A43587DAC8C3F55A2A8930CA7C5928DEF98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_LoadAd_m5D13E236B2E336CA9DE6572E634C44F7020EF11D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_Show_mDFDCDE729E1392CE1D35F4A3F0B810D39217F5D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_U3CConfigureBannerEventsU3Em__0_m014F51032B92C6E9F40427831CF7205B3AD23852_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_U3CConfigureBannerEventsU3Em__1_m3981482AA287A54BEF3D0F0DB501AC2BEC46A0EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_U3CConfigureBannerEventsU3Em__2_mC75505D55AF5F1921383F537FC2692DFE520FC94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_U3CConfigureBannerEventsU3Em__3_m0C12016F66DBD3388CAF10ACF89884376B71BEEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_U3CConfigureBannerEventsU3Em__4_m471C1F4044D50A2F710756D3D6BB7B0FF076BAF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView__ctor_mC09291D5ED454EA667FA7BE118C18B70E6CE8881_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_add_OnAdClosed_m1EDEAB7A23F547E0993CAD88F50925CACBC739BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_add_OnAdFailedToLoad_m1E4D1466283256A5ADC1F905EC66FCB2E88A1231_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_add_OnAdLoaded_m78A935BBF73B521A6A1C5A3BA5F58426BD24FE33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_add_OnAdOpening_mB0BC40E91326844EF7C1BC211F2D92A0D9911C64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_add_OnPaidEvent_m38E92CC76AAFF522135E03E67B76B0DD5E930B7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_remove_OnAdClosed_mBCBCA353606317FD7095F36E2AE1C1820753DDBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_remove_OnAdFailedToLoad_mCBFFC81623D5C715EC90E1F0D0E3BC760066FC78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_remove_OnAdLoaded_m873A083D0F36855DA7DD7D7FD5BEB1C8056FBFEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_remove_OnAdOpening_m151E64F460AF2967D680239420AA3ACC31E29385_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerView_remove_OnPaidEvent_m5514C8238D579CF02F9136B6F5747C0D8E4433CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_Destroy_m1DCA66E176E140AA2165E078279EDE6FA24BFC81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_LoadAd_m431F3B7C73FB6B2CBDD146B8B4000BD54DB73A5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_Show_m2A646DD84358A94E74F4DDD725DD9DC5C2FC7314_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__0_m8D09193C363E61D273AF4D78E6EE25149E3A1082_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__1_mD432B246BFC9B4FD951FB3B17B349933C5229430_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__2_mA89D2BF471FA8D12C93A11A526C3C9984921B425_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__3_mA8D40A71B8B46FBAF1CA07460FE6DF3DFCD4FB0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__4_m1B7D3F472FE2A5239BC8B928F23E24608BD1F78E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__5_m59A2C988DBA1B35B58FD9BDBFB8DD885D3D4BB99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__6_mFE2234CFE184EE7002B51D4B33C0D73F33F3302A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd__ctor_mEA989676024C7567A644541EBABAFBF14C0DC86B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnAdClosed_m2C3ECE2D8C5103AFC726B2EF207A169BD5881B5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnAdDidRecordImpression_m1766176F094ECF4E42A4AC2C44793C0B1137652D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnAdFailedToLoad_mF5314968CB887546059359F617DD43B63CE9D61F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnAdFailedToShow_m3E50750378AF68FDC9EDDC31494CBDD4A361F7DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnAdLoaded_m04750743148FD56E583C39ACAC323043C52B1608_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnAdOpening_mD7CD884EE9C3D9E0A60BD765D9FC32BDDD2D111C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnPaidEvent_m67C3237A7D5C8F8105C3507A8D6C77E1E052A048_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnAdClosed_mB877C4AF2F1309B871BC457620A19AA20C6B2312_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnAdDidRecordImpression_m2F1DFA9F4D055DBEDB03013A2CBA22F9FB8330CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnAdFailedToLoad_m6E9CD7EEC3CC9F5CA41CD972796757408AE7AF86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnAdFailedToShow_mC71FA24C93B989FBCAFFE9E9860316CCA00818ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnAdLoaded_m4BEAA106A79AFD7ADF3847E7CE416248FA8C5296_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnAdOpening_mCCEF0E712EBC8759BCE827DCFB5574AFF38182FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnPaidEvent_m9756B3CBE57C46D958100B5728DF0CA800A4FA6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_GetClientFactory_m04F784F132ED87961FD62C56E011A3CC6645E59B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_GetMobileAdsClient_m7B958E29871B80ECB2200B30055E64146DC17065_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_Initialize_m30DA0B49EAC6D193781E5D847516AB325BC766CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_get_Instance_m109646723EB641F8A2577EA8E9D1D7A122152DB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_LoadAd_m6676EF76CA096B75E07AAA1AC6E207E3796F3C35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_Show_mCE4802BEDA4B5ECE7B26C0C902BBEC7EAA8BE793_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__0_mA28B8CF3DA16B81DFAA90AEE6910B8896CAC1950_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__1_m452F16894604D06D772EA86AE62CBB6A35313B39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__2_m6C2398D2394701C52B20490D58A721314130231A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__3_m3CDBFE27CFC07ACCF0A55382667A3EF1242B5D2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__4_m069A92412D0229C1DA5F2925C866F7CDABD2DBA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__5_m0125351C4CB1BD2F89E3D5F11E4EE6C980D5D586_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__6_m02F8BA3C9185864B64AFFC8283D9FC7F645EA706_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__7_m41C4798E38F905309E709314B7C5CB33554BCC2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_U3CRewardedAdU3Em__8_m3D84D06EEE23834A8999AA6FF6C3935198B6794A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd__ctor_m1D820B834D8E021CD01E0FBD975997A36422CE92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_add_OnAdClosed_mE11DF7D5F305ADA4DA7217C4975B1724716B0443_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_add_OnAdLoaded_m631C035CEAAF34191E25FF795944FA3FD2E56430_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_add_OnUserEarnedReward_mE747081AEF5184B807CEBDA82BD17EC6982F2A44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_remove_OnAdClosed_m44B9311AC4A1310560DDFC8FC402F37351B0B377_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_remove_OnAdLoaded_m013D1992ABDFA7A54AAEB6F6AE913A5F79067468_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RewardedAd_remove_OnUserEarnedReward_m3F8E555B79774BB1CD3CF837D2F13026ECDD8094_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mF2644256C093ABE5CF29A2C7CA7C44D324819DB1_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t40BD4D4186D12CA40A04D052CD68B90503C38ADC 
{
public:

public:
};


// System.Object


// GoogleMobileAds.Api.AdError
struct AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_tA167BFC582BB586340190F79621BDB1186526063  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t052F2E1A300FDB99F65C8ECDD9C14DC7F5F75237 * ___U3CMediationExtrasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_tA167BFC582BB586340190F79621BDB1186526063, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_tA167BFC582BB586340190F79621BDB1186526063, ___U3CExtrasU3Ek__BackingField_2)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_U3CExtrasU3Ek__BackingField_2() const { return ___U3CExtrasU3Ek__BackingField_2; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_U3CExtrasU3Ek__BackingField_2() { return &___U3CExtrasU3Ek__BackingField_2; }
	inline void set_U3CExtrasU3Ek__BackingField_2(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___U3CExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_tA167BFC582BB586340190F79621BDB1186526063, ___U3CMediationExtrasU3Ek__BackingField_3)); }
	inline List_1_t052F2E1A300FDB99F65C8ECDD9C14DC7F5F75237 * get_U3CMediationExtrasU3Ek__BackingField_3() const { return ___U3CMediationExtrasU3Ek__BackingField_3; }
	inline List_1_t052F2E1A300FDB99F65C8ECDD9C14DC7F5F75237 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_3() { return &___U3CMediationExtrasU3Ek__BackingField_3; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_3(List_1_t052F2E1A300FDB99F65C8ECDD9C14DC7F5F75237 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_3), (void*)value);
	}
};

struct AdRequest_tA167BFC582BB586340190F79621BDB1186526063_StaticFields
{
public:
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_tA167BFC582BB586340190F79621BDB1186526063_StaticFields, ___U3CVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_0), (void*)value);
	}
};


// GoogleMobileAds.Api.BannerView
struct BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * ___OnPaidEvent_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___OnAdLoaded_1)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___OnAdOpening_3)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___OnAdClosed_4)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_5() { return static_cast<int32_t>(offsetof(BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9, ___OnPaidEvent_5)); }
	inline EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * get_OnPaidEvent_5() const { return ___OnPaidEvent_5; }
	inline EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 ** get_address_of_OnPaidEvent_5() { return &___OnPaidEvent_5; }
	inline void set_OnPaidEvent_5(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * value)
	{
		___OnPaidEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_5), (void*)value);
	}
};


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdLoaded_3)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdOpening_5)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdClosed_6)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2, ___OnPaidEvent_9)); }
	inline EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_9), (void*)value);
	}
};


// GoogleMobileAds.Api.MobileAds
struct MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};

struct MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * ___instance_2;

public:
	inline static int32_t get_offset_of_clientFactory_1() { return static_cast<int32_t>(offsetof(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields, ___clientFactory_1)); }
	inline RuntimeObject* get_clientFactory_1() const { return ___clientFactory_1; }
	inline RuntimeObject** get_address_of_clientFactory_1() { return &___clientFactory_1; }
	inline void set_clientFactory_1(RuntimeObject* value)
	{
		___clientFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields, ___instance_2)); }
	inline MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * get_instance_2() const { return ___instance_2; }
	inline MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_2), (void*)value);
	}
};


// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B  : public RuntimeObject
{
public:
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * ___initCompleteAction_0;

public:
	inline static int32_t get_offset_of_initCompleteAction_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B, ___initCompleteAction_0)); }
	inline Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * get_initCompleteAction_0() const { return ___initCompleteAction_0; }
	inline Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 ** get_address_of_initCompleteAction_0() { return &___initCompleteAction_0; }
	inline void set_initCompleteAction_0(Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * value)
	{
		___initCompleteAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initCompleteAction_0), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.RewardedAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdLoaded
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToLoad
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdOpening
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdClosed
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToShow
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdDidRecordImpression
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::OnUserEarnedReward
	EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * ___OnUserEarnedReward_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::OnPaidEvent
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * ___OnPaidEvent_10;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdLoaded_3)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdOpening_5)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdClosed_6)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserEarnedReward_9() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnUserEarnedReward_9)); }
	inline EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * get_OnUserEarnedReward_9() const { return ___OnUserEarnedReward_9; }
	inline EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 ** get_address_of_OnUserEarnedReward_9() { return &___OnUserEarnedReward_9; }
	inline void set_OnUserEarnedReward_9(EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * value)
	{
		___OnUserEarnedReward_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserEarnedReward_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_10() { return static_cast<int32_t>(offsetof(RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8, ___OnPaidEvent_10)); }
	inline EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * get_OnPaidEvent_10() const { return ___OnPaidEvent_10; }
	inline EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 ** get_address_of_OnPaidEvent_10() { return &___OnPaidEvent_10; }
	inline void set_OnPaidEvent_10(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * value)
	{
		___OnPaidEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_10), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072, ___U3CAdErrorU3Ek__BackingField_1)); }
	inline AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * get_U3CAdErrorU3Ek__BackingField_1() const { return ___U3CAdErrorU3Ek__BackingField_1; }
	inline AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 ** get_address_of_U3CAdErrorU3Ek__BackingField_1() { return &___U3CAdErrorU3Ek__BackingField_1; }
	inline void set_U3CAdErrorU3Ek__BackingField_1(AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * value)
	{
		___U3CAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * ___U3CLoadAdErrorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40, ___U3CLoadAdErrorU3Ek__BackingField_1)); }
	inline LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * get_U3CLoadAdErrorU3Ek__BackingField_1() const { return ___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 ** get_address_of_U3CLoadAdErrorU3Ek__BackingField_1() { return &___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorU3Ek__BackingField_1(LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * value)
	{
		___U3CLoadAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_tAC1B7979E64B129833595108F13AD8E6777092BA * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_tAC1B7979E64B129833595108F13AD8E6777092BA * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_tAC1B7979E64B129833595108F13AD8E6777092BA ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_tAC1B7979E64B129833595108F13AD8E6777092BA * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdValueU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2  : public AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};


// GoogleMobileAds.Api.Reward
struct Reward_t93480A8C76DD13444048E1C0E9FCD295F4A0DEED  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Reward_t93480A8C76DD13444048E1C0E9FCD295F4A0DEED, ___U3CTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAmountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Reward_t93480A8C76DD13444048E1C0E9FCD295F4A0DEED, ___U3CAmountU3Ek__BackingField_2)); }
	inline double get_U3CAmountU3Ek__BackingField_2() const { return ___U3CAmountU3Ek__BackingField_2; }
	inline double* get_address_of_U3CAmountU3Ek__BackingField_2() { return &___U3CAmountU3Ek__BackingField_2; }
	inline void set_U3CAmountU3Ek__BackingField_2(double value)
	{
		___U3CAmountU3Ek__BackingField_2 = value;
	}
};


// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3, ___U3CAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAdErrorClientU3Ek__BackingField_1() const { return ___U3CAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAdErrorClientU3Ek__BackingField_1() { return &___U3CAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9, ___U3CLoadAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoadAdErrorClientU3Ek__BackingField_1() const { return ___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return &___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoadAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// GoogleMobileAds.Api.AdPosition
struct AdPosition_t0E596DE6D0E6591724571459265B96B31520C060 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdPosition_t0E596DE6D0E6591724571459265B96B31520C060, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize/Type
struct Type_t1C9274A4851E47150C9F70A8F76CACBD184E4B72 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdSize/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t1C9274A4851E47150C9F70A8F76CACBD184E4B72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.Orientation
struct Orientation_tE85CCDD9FB8077B675A7372D23A83F4120E69978 
{
public:
	// System.Int32 GoogleMobileAds.Api.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_tE85CCDD9FB8077B675A7372D23A83F4120E69978, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize
struct AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478, ___orientation_1)); }
	inline int32_t get_orientation_1() const { return ___orientation_1; }
	inline int32_t* get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(int32_t value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}
};

struct AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478_StaticFields
{
public:
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;

public:
	inline static int32_t get_offset_of_Banner_4() { return static_cast<int32_t>(offsetof(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478_StaticFields, ___Banner_4)); }
	inline AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * get_Banner_4() const { return ___Banner_4; }
	inline AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 ** get_address_of_Banner_4() { return &___Banner_4; }
	inline void set_Banner_4(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * value)
	{
		___Banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Banner_4), (void*)value);
	}

	inline static int32_t get_offset_of_MediumRectangle_5() { return static_cast<int32_t>(offsetof(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478_StaticFields, ___MediumRectangle_5)); }
	inline AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * get_MediumRectangle_5() const { return ___MediumRectangle_5; }
	inline AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 ** get_address_of_MediumRectangle_5() { return &___MediumRectangle_5; }
	inline void set_MediumRectangle_5(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * value)
	{
		___MediumRectangle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MediumRectangle_5), (void*)value);
	}

	inline static int32_t get_offset_of_IABBanner_6() { return static_cast<int32_t>(offsetof(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478_StaticFields, ___IABBanner_6)); }
	inline AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * get_IABBanner_6() const { return ___IABBanner_6; }
	inline AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 ** get_address_of_IABBanner_6() { return &___IABBanner_6; }
	inline void set_IABBanner_6(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * value)
	{
		___IABBanner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IABBanner_6), (void*)value);
	}

	inline static int32_t get_offset_of_Leaderboard_7() { return static_cast<int32_t>(offsetof(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478_StaticFields, ___Leaderboard_7)); }
	inline AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * get_Leaderboard_7() const { return ___Leaderboard_7; }
	inline AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 ** get_address_of_Leaderboard_7() { return &___Leaderboard_7; }
	inline void set_Leaderboard_7(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * value)
	{
		___Leaderboard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leaderboard_7), (void*)value);
	}

	inline static int32_t get_offset_of_SmartBanner_8() { return static_cast<int32_t>(offsetof(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478_StaticFields, ___SmartBanner_8)); }
	inline AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * get_SmartBanner_8() const { return ___SmartBanner_8; }
	inline AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 ** get_address_of_SmartBanner_8() { return &___SmartBanner_8; }
	inline void set_SmartBanner_8(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * value)
	{
		___SmartBanner_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmartBanner_8), (void*)value);
	}

	inline static int32_t get_offset_of_FullWidth_9() { return static_cast<int32_t>(offsetof(AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478_StaticFields, ___FullWidth_9)); }
	inline int32_t get_FullWidth_9() const { return ___FullWidth_9; }
	inline int32_t* get_address_of_FullWidth_9() { return &___FullWidth_9; }
	inline void set_FullWidth_9(int32_t value)
	{
		___FullWidth_9 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t6AFC524336458D177AA2E34566EB2447B12FAFE4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m04F784F132ED87961FD62C56E011A3CC6645E59B (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m7CA8EC2B1083BC12D58EC91CF66703A6FAFDB9D0 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m7565675A28437C6E7C1618FA36914FFE9F6DE924 (EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mD8DE63F1A9BE8F27989602A01BA0E55DF7DD4A8D (EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0 (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m2C0771056506A0A68E0EA1465C8B0169ADDEACBC_inline (LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m1DB8EBEFE18F4418125447AF16BB71938FBA8FD0 (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322 (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB_inline (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143 (EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *, RuntimeObject *, AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m531F358E64BD4D81F25D69C45147F3DD05D05B5C (EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *, RuntimeObject *, AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mFBDC18FD9C8312A880647A5EB685355417EE0611 (EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mC08011B3B1353448447C43EACC375A4B1C23AE61_inline (AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m1A50E4683B16334216E2860EE269F9F26ED7B6FA (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23 (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812_inline (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * __this, AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240 (EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * __this, RuntimeObject * ___sender0, AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *, RuntimeObject *, AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m7B958E29871B80ECB2200B30055E64146DC17065 (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mEE2B38A747E84718461053285FBD32412DE8CE8D (MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m00278361BC3E760681DD9F2B253D0CE3EF5E36A9 (U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * MobileAds_get_Instance_m109646723EB641F8A2577EA8E9D1D7A122152DB2 (const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1D47D4E5A2ED587D522E94F09DF2B04E4046632A (Action_1_t6AFC524336458D177AA2E34566EB2447B12FAFE4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6AFC524336458D177AA2E34566EB2447B12FAFE4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_m788008A40361D89EE849BCD09A101A7733E674E5 (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C (String_t* ___typeName0, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m45909AA79E414876CAAD750C9D34E7C7EE7C2502 (InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(!0)
inline void Action_1_Invoke_mF734B55F8D263AF40D90EC14C3A4F9216519DC13 (Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * __this, InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 *, InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m734AF72C8BB46171DF978EE4C7A171ABF63CB7AE (EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m796683E6C5D99666C847DB0E08742077FFDE0579 (EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * __this, RuntimeObject * ___sender0, Reward_t93480A8C76DD13444048E1C0E9FCD295F4A0DEED * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *, RuntimeObject *, Reward_t93480A8C76DD13444048E1C0E9FCD295F4A0DEED *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m1A50E4683B16334216E2860EE269F9F26ED7B6FA (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::GetMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_GetMessage_m94F0BDAE0E46029C8B6EE6F403A1ECA68D7C605A (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdError_GetMessage_m94F0BDAE0E46029C8B6EE6F403A1ECA68D7C605A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String GoogleMobileAds.Common.IAdErrorClient::GetMessage() */, IAdErrorClient_t265C2A51135FFDB3D1DC32CDFBD6FBAFA1D9DE81_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_m2CC8A6A1894656E2FFD9E61707CCD6588A905119 (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23 (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812 (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * __this, AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322 (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_LoadAdError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * AdFailedToLoadEventArgs_get_LoadAdError_m803B3A51C4BB8082A82198747C0C7B3D16BAD3F4 (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, const RuntimeMethod* method)
{
	{
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_0 = __this->get_U3CLoadAdErrorU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_mC09291D5ED454EA667FA7BE118C18B70E6CE8881 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, String_t* ___adUnitId0, AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * ___adSize1, int32_t ___position2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView__ctor_mC09291D5ED454EA667FA7BE118C18B70E6CE8881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = MobileAds_GetClientFactory_m04F784F132ED87961FD62C56E011A3CC6645E59B(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_t5B6D2FE48098D53A81398A90A880725A679D449C_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		String_t* L_3 = ___adUnitId0;
		AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 * L_4 = ___adSize1;
		int32_t L_5 = ___position2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, AdSize_tFC26BBE944BEFA7EB804781128ABF24AAC33B478 *, int32_t >::Invoke(10 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition) */, IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		BannerView_ConfigureBannerEvents_m7CA8EC2B1083BC12D58EC91CF66703A6FAFDB9D0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdLoaded_m78A935BBF73B521A6A1C5A3BA5F58426BD24FE33 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_add_OnAdLoaded_m78A935BBF73B521A6A1C5A3BA5F58426BD24FE33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdLoaded_1();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdLoaded_m873A083D0F36855DA7DD7D7FD5BEB1C8056FBFEF (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_remove_OnAdLoaded_m873A083D0F36855DA7DD7D7FD5BEB1C8056FBFEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdLoaded_1();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdFailedToLoad_m1E4D1466283256A5ADC1F905EC66FCB2E88A1231 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_add_OnAdFailedToLoad_m1E4D1466283256A5ADC1F905EC66FCB2E88A1231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * V_0 = NULL;
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * V_1 = NULL;
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_0 = __this->get_OnAdFailedToLoad_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 ** L_2 = __this->get_address_of_OnAdFailedToLoad_2();
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_3 = V_1;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_6 = V_0;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *>((EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 **)L_2, ((EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_8 = V_0;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)L_8) == ((RuntimeObject*)(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdFailedToLoad_mCBFFC81623D5C715EC90E1F0D0E3BC760066FC78 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_remove_OnAdFailedToLoad_mCBFFC81623D5C715EC90E1F0D0E3BC760066FC78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * V_0 = NULL;
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * V_1 = NULL;
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_0 = __this->get_OnAdFailedToLoad_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 ** L_2 = __this->get_address_of_OnAdFailedToLoad_2();
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_3 = V_1;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_6 = V_0;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *>((EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 **)L_2, ((EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_8 = V_0;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)L_8) == ((RuntimeObject*)(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdOpening_mB0BC40E91326844EF7C1BC211F2D92A0D9911C64 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_add_OnAdOpening_mB0BC40E91326844EF7C1BC211F2D92A0D9911C64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdOpening_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdOpening_m151E64F460AF2967D680239420AA3ACC31E29385 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_remove_OnAdOpening_m151E64F460AF2967D680239420AA3ACC31E29385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdOpening_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdClosed_m1EDEAB7A23F547E0993CAD88F50925CACBC739BB (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_add_OnAdClosed_m1EDEAB7A23F547E0993CAD88F50925CACBC739BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdClosed_4();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdClosed_mBCBCA353606317FD7095F36E2AE1C1820753DDBD (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_remove_OnAdClosed_mBCBCA353606317FD7095F36E2AE1C1820753DDBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdClosed_4();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnPaidEvent_m38E92CC76AAFF522135E03E67B76B0DD5E930B7F (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_add_OnPaidEvent_m38E92CC76AAFF522135E03E67B76B0DD5E930B7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * V_0 = NULL;
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * V_1 = NULL;
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_0 = __this->get_OnPaidEvent_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 ** L_2 = __this->get_address_of_OnPaidEvent_5();
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_3 = V_1;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_6 = V_0;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *>((EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 **)L_2, ((EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_8 = V_0;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)L_8) == ((RuntimeObject*)(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnPaidEvent_m5514C8238D579CF02F9136B6F5747C0D8E4433CF (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_remove_OnPaidEvent_m5514C8238D579CF02F9136B6F5747C0D8E4433CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * V_0 = NULL;
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * V_1 = NULL;
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_0 = __this->get_OnPaidEvent_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 ** L_2 = __this->get_address_of_OnPaidEvent_5();
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_3 = V_1;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_6 = V_0;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *>((EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 **)L_2, ((EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_8 = V_0;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)L_8) == ((RuntimeObject*)(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m5D13E236B2E336CA9DE6572E634C44F7020EF11D (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, AdRequest_tA167BFC582BB586340190F79621BDB1186526063 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_LoadAd_m5D13E236B2E336CA9DE6572E634C44F7020EF11D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		AdRequest_tA167BFC582BB586340190F79621BDB1186526063 * L_1 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker1< AdRequest_tA167BFC582BB586340190F79621BDB1186526063 * >::Invoke(11 /* System.Void GoogleMobileAds.Common.IBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest) */, IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Hide_m1C813A43587DAC8C3F55A2A8930CA7C5928DEF98 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_Hide_m1C813A43587DAC8C3F55A2A8930CA7C5928DEF98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(13 /* System.Void GoogleMobileAds.Common.IBannerClient::HideBannerView() */, IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Show_mDFDCDE729E1392CE1D35F4A3F0B810D39217F5D8 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_Show_mDFDCDE729E1392CE1D35F4A3F0B810D39217F5D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void GoogleMobileAds.Common.IBannerClient::ShowBannerView() */, IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_mC687CCD57973117E5BE76DE4BF69D5215C345693 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_Destroy_mC687CCD57973117E5BE76DE4BF69D5215C345693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IBannerClient::DestroyBannerView() */, IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m7CA8EC2B1083BC12D58EC91CF66703A6FAFDB9D0 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_ConfigureBannerEvents_m7CA8EC2B1083BC12D58EC91CF66703A6FAFDB9D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_1, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__0_m014F51032B92C6E9F40427831CF7205B3AD23852_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB * L_3 = (EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB *)il2cpp_codegen_object_new(EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7565675A28437C6E7C1618FA36914FFE9F6DE924(L_3, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__1_m3981482AA287A54BEF3D0F0DB501AC2BEC46A0EB_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7565675A28437C6E7C1618FA36914FFE9F6DE924_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_5 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_5, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__2_mC75505D55AF5F1921383F537FC2692DFE520FC94_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_7, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__3_m0C12016F66DBD3388CAF10ACF89884376B71BEEB_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_9 = (EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)il2cpp_codegen_object_new(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD8DE63F1A9BE8F27989602A01BA0E55DF7DD4A8D(L_9, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__4_m471C1F4044D50A2F710756D3D6BB7B0FF076BAF5_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD8DE63F1A9BE8F27989602A01BA0E55DF7DD4A8D_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IBannerClient_t70737079E91FAB6DFAB2EEC85471B300D2857AEF_il2cpp_TypeInfo_var, L_8, L_9);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__0_m014F51032B92C6E9F40427831CF7205B3AD23852 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_U3CConfigureBannerEventsU3Em__0_m014F51032B92C6E9F40427831CF7205B3AD23852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdLoaded_1();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__1_m3981482AA287A54BEF3D0F0DB501AC2BEC46A0EB (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_U3CConfigureBannerEventsU3Em__1_m3981482AA287A54BEF3D0F0DB501AC2BEC46A0EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * V_0 = NULL;
	AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * V_1 = NULL;
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_0 = __this->get_OnAdFailedToLoad_2();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m2C0771056506A0A68E0EA1465C8B0169ADDEACBC_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_3 = (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 *)il2cpp_codegen_object_new(LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m1DB8EBEFE18F4418125447AF16BB71938FBA8FD0(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_4 = __this->get_OnAdFailedToLoad_2();
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_5 = (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_6 = V_1;
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__2_mC75505D55AF5F1921383F537FC2692DFE520FC94 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_U3CConfigureBannerEventsU3Em__2_mC75505D55AF5F1921383F537FC2692DFE520FC94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdOpening_3();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__3_m0C12016F66DBD3388CAF10ACF89884376B71BEEB (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_U3CConfigureBannerEventsU3Em__3_m0C12016F66DBD3388CAF10ACF89884376B71BEEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdClosed_4();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__4_m471C1F4044D50A2F710756D3D6BB7B0FF076BAF5 (BannerView_t06E35EF86127F5D7B9D15CDFA2A6E8E8748E0BB9 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerView_U3CConfigureBannerEventsU3Em__4_m471C1F4044D50A2F710756D3D6BB7B0FF076BAF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_0 = __this->get_OnPaidEvent_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_1 = __this->get_OnPaidEvent_5();
		AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m531F358E64BD4D81F25D69C45147F3DD05D05B5C(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m531F358E64BD4D81F25D69C45147F3DD05D05B5C_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m45909AA79E414876CAAD750C9D34E7C7EE7C2502 (InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_mEA989676024C7567A644541EBABAFBF14C0DC86B (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd__ctor_mEA989676024C7567A644541EBABAFBF14C0DC86B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = MobileAds_GetClientFactory_m04F784F132ED87961FD62C56E011A3CC6645E59B(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_t5B6D2FE48098D53A81398A90A880725A679D449C_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_5 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_5, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__0_m8D09193C363E61D273AF4D78E6EE25149E3A1082_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB * L_7 = (EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB *)il2cpp_codegen_object_new(EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7565675A28437C6E7C1618FA36914FFE9F6DE924(L_7, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__1_mD432B246BFC9B4FD951FB3B17B349933C5229430_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7565675A28437C6E7C1618FA36914FFE9F6DE924_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_9, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__2_mA89D2BF471FA8D12C93A11A526C3C9984921B425_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_11 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_11, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__3_mA8D40A71B8B46FBAF1CA07460FE6DF3DFCD4FB0C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 * L_13 = (EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 *)il2cpp_codegen_object_new(EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mFBDC18FD9C8312A880647A5EB685355417EE0611(L_13, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__4_m1B7D3F472FE2A5239BC8B928F23E24608BD1F78E_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mFBDC18FD9C8312A880647A5EB685355417EE0611_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_15 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_15, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__5_m59A2C988DBA1B35B58FD9BDBFB8DD885D3D4BB99_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_17 = (EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)il2cpp_codegen_object_new(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD8DE63F1A9BE8F27989602A01BA0E55DF7DD4A8D(L_17, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__6_mFE2234CFE184EE7002B51D4B33C0D73F33F3302A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD8DE63F1A9BE8F27989602A01BA0E55DF7DD4A8D_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_16, L_17);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_m04750743148FD56E583C39ACAC323043C52B1608 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnAdLoaded_m04750743148FD56E583C39ACAC323043C52B1608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdLoaded_m4BEAA106A79AFD7ADF3847E7CE416248FA8C5296 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnAdLoaded_m4BEAA106A79AFD7ADF3847E7CE416248FA8C5296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_mF5314968CB887546059359F617DD43B63CE9D61F (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnAdFailedToLoad_mF5314968CB887546059359F617DD43B63CE9D61F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * V_0 = NULL;
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * V_1 = NULL;
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_3 = V_1;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_6 = V_0;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *>((EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 **)L_2, ((EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_8 = V_0;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)L_8) == ((RuntimeObject*)(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToLoad_m6E9CD7EEC3CC9F5CA41CD972796757408AE7AF86 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnAdFailedToLoad_m6E9CD7EEC3CC9F5CA41CD972796757408AE7AF86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * V_0 = NULL;
	EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * V_1 = NULL;
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_3 = V_1;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_6 = V_0;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *>((EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 **)L_2, ((EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_8 = V_0;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)L_8) == ((RuntimeObject*)(EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_mD7CD884EE9C3D9E0A60BD765D9FC32BDDD2D111C (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnAdOpening_mD7CD884EE9C3D9E0A60BD765D9FC32BDDD2D111C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdOpening_mCCEF0E712EBC8759BCE827DCFB5574AFF38182FC (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnAdOpening_mCCEF0E712EBC8759BCE827DCFB5574AFF38182FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m2C3ECE2D8C5103AFC726B2EF207A169BD5881B5B (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnAdClosed_m2C3ECE2D8C5103AFC726B2EF207A169BD5881B5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClosed_mB877C4AF2F1309B871BC457620A19AA20C6B2312 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnAdClosed_mB877C4AF2F1309B871BC457620A19AA20C6B2312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToShow_m3E50750378AF68FDC9EDDC31494CBDD4A361F7DA (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnAdFailedToShow_m3E50750378AF68FDC9EDDC31494CBDD4A361F7DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * V_0 = NULL;
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * V_1 = NULL;
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_0 = __this->get_OnAdFailedToShow_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C ** L_2 = __this->get_address_of_OnAdFailedToShow_7();
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_3 = V_1;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_6 = V_0;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *>((EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C **)L_2, ((EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_8 = V_0;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)L_8) == ((RuntimeObject*)(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToShow_mC71FA24C93B989FBCAFFE9E9860316CCA00818ED (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnAdFailedToShow_mC71FA24C93B989FBCAFFE9E9860316CCA00818ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * V_0 = NULL;
	EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * V_1 = NULL;
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_0 = __this->get_OnAdFailedToShow_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C ** L_2 = __this->get_address_of_OnAdFailedToShow_7();
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_3 = V_1;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_6 = V_0;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *>((EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C **)L_2, ((EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_8 = V_0;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)L_8) == ((RuntimeObject*)(EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdDidRecordImpression_m1766176F094ECF4E42A4AC2C44793C0B1137652D (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnAdDidRecordImpression_m1766176F094ECF4E42A4AC2C44793C0B1137652D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdDidRecordImpression_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdDidRecordImpression_8();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdDidRecordImpression_m2F1DFA9F4D055DBEDB03013A2CBA22F9FB8330CC (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnAdDidRecordImpression_m2F1DFA9F4D055DBEDB03013A2CBA22F9FB8330CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdDidRecordImpression_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdDidRecordImpression_8();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnPaidEvent_m67C3237A7D5C8F8105C3507A8D6C77E1E052A048 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnPaidEvent_m67C3237A7D5C8F8105C3507A8D6C77E1E052A048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * V_0 = NULL;
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * V_1 = NULL;
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_0 = __this->get_OnPaidEvent_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 ** L_2 = __this->get_address_of_OnPaidEvent_9();
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_3 = V_1;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_6 = V_0;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *>((EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 **)L_2, ((EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_8 = V_0;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)L_8) == ((RuntimeObject*)(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnPaidEvent_m9756B3CBE57C46D958100B5728DF0CA800A4FA6F (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnPaidEvent_m9756B3CBE57C46D958100B5728DF0CA800A4FA6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * V_0 = NULL;
	EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * V_1 = NULL;
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_0 = __this->get_OnPaidEvent_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 ** L_2 = __this->get_address_of_OnPaidEvent_9();
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_3 = V_1;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_6 = V_0;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *>((EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 **)L_2, ((EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_8 = V_0;
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)L_8) == ((RuntimeObject*)(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_m431F3B7C73FB6B2CBDD146B8B4000BD54DB73A5C (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, AdRequest_tA167BFC582BB586340190F79621BDB1186526063 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_LoadAd_m431F3B7C73FB6B2CBDD146B8B4000BD54DB73A5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_tA167BFC582BB586340190F79621BDB1186526063 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_tA167BFC582BB586340190F79621BDB1186526063 * >::Invoke(15 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m2AE6EBF498E724A7664D0FB2E3DF0BE526389F78 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m2A646DD84358A94E74F4DDD725DD9DC5C2FC7314 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_Show_m2A646DD84358A94E74F4DDD725DD9DC5C2FC7314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m1DCA66E176E140AA2165E078279EDE6FA24BFC81 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_Destroy_m1DCA66E176E140AA2165E078279EDE6FA24BFC81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(17 /* System.Void GoogleMobileAds.Common.IInterstitialClient::DestroyInterstitial() */, IInterstitialClient_tF69BB54F84D2890F159C34D2F14F56D0E7E164E3_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__0_m8D09193C363E61D273AF4D78E6EE25149E3A1082 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__0_m8D09193C363E61D273AF4D78E6EE25149E3A1082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__1_mD432B246BFC9B4FD951FB3B17B349933C5229430 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__1_mD432B246BFC9B4FD951FB3B17B349933C5229430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * V_0 = NULL;
	AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * V_1 = NULL;
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m2C0771056506A0A68E0EA1465C8B0169ADDEACBC_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_3 = (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 *)il2cpp_codegen_object_new(LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m1DB8EBEFE18F4418125447AF16BB71938FBA8FD0(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_5 = (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_6 = V_1;
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__2_mA89D2BF471FA8D12C93A11A526C3C9984921B425 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__2_mA89D2BF471FA8D12C93A11A526C3C9984921B425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdOpening_5();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__3_mA8D40A71B8B46FBAF1CA07460FE6DF3DFCD4FB0C (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__3_mA8D40A71B8B46FBAF1CA07460FE6DF3DFCD4FB0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdClosed_6();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__4_m1B7D3F472FE2A5239BC8B928F23E24608BD1F78E (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__4_m1B7D3F472FE2A5239BC8B928F23E24608BD1F78E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * V_0 = NULL;
	AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * V_1 = NULL;
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = AdErrorClientEventArgs_get_AdErrorClient_mC08011B3B1353448447C43EACC375A4B1C23AE61_inline(L_1, /*hidden argument*/NULL);
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_3 = (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 *)il2cpp_codegen_object_new(AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4_il2cpp_TypeInfo_var);
		AdError__ctor_m1A50E4683B16334216E2860EE269F9F26ED7B6FA(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_5 = (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 *)il2cpp_codegen_object_new(AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_6 = V_1;
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__5_m59A2C988DBA1B35B58FD9BDBFB8DD885D3D4BB99 (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__5_m59A2C988DBA1B35B58FD9BDBFB8DD885D3D4BB99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__6(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__6_mFE2234CFE184EE7002B51D4B33C0D73F33F3302A (InterstitialAd_t5E8E61A6BA9EB944C84D8F2AFB28A5826DE6B6D2 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__6_mFE2234CFE184EE7002B51D4B33C0D73F33F3302A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_0 = __this->get_OnPaidEvent_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_1 = __this->get_OnPaidEvent_9();
		AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m531F358E64BD4D81F25D69C45147F3DD05D05B5C(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m531F358E64BD4D81F25D69C45147F3DD05D05B5C_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m1DB8EBEFE18F4418125447AF16BB71938FBA8FD0 (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m1A50E4683B16334216E2860EE269F9F26ED7B6FA(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___client0;
		__this->set_client_1(L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_m602F9982BD37495A024F72C600B3ED9BA73B10B7 (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mEE2B38A747E84718461053285FBD32412DE8CE8D (MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = MobileAds_GetMobileAdsClient_m7B958E29871B80ECB2200B30055E64146DC17065(/*hidden argument*/NULL);
		__this->set_client_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * MobileAds_get_Instance_m109646723EB641F8A2577EA8E9D1D7A122152DB2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_get_Instance_m109646723EB641F8A2577EA8E9D1D7A122152DB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * L_0 = ((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->get_instance_2();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * L_1 = (MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE *)il2cpp_codegen_object_new(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var);
		MobileAds__ctor_mEE2B38A747E84718461053285FBD32412DE8CE8D(L_1, /*hidden argument*/NULL);
		((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->set_instance_2(L_1);
	}

IL_0014:
	{
		MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * L_2 = ((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->get_instance_2();
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m30DA0B49EAC6D193781E5D847516AB325BC766CA (Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * ___initCompleteAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_Initialize_m30DA0B49EAC6D193781E5D847516AB325BC766CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * L_0 = (U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_m00278361BC3E760681DD9F2B253D0CE3EF5E36A9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * L_1 = V_0;
		Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * L_2 = ___initCompleteAction0;
		NullCheck(L_1);
		L_1->set_initCompleteAction_0(L_2);
		MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE * L_3 = MobileAds_get_Instance_m109646723EB641F8A2577EA8E9D1D7A122152DB2(/*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_client_0();
		U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * L_5 = V_0;
		Action_1_t6AFC524336458D177AA2E34566EB2447B12FAFE4 * L_6 = (Action_1_t6AFC524336458D177AA2E34566EB2447B12FAFE4 *)il2cpp_codegen_object_new(Action_1_t6AFC524336458D177AA2E34566EB2447B12FAFE4_il2cpp_TypeInfo_var);
		Action_1__ctor_m1D47D4E5A2ED587D522E94F09DF2B04E4046632A(L_6, L_5, (intptr_t)((intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mF2644256C093ABE5CF29A2C7CA7C44D324819DB1_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m1D47D4E5A2ED587D522E94F09DF2B04E4046632A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t6AFC524336458D177AA2E34566EB2447B12FAFE4 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_tB3B81138BD6DB7231BEFD922F434A7BF832E0D52_il2cpp_TypeInfo_var, L_4, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tA70E50A77B79AF718449D92B71CC89F34A0E6B90_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_m788008A40361D89EE849BCD09A101A7733E674E5(/*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m04F784F132ED87961FD62C56E011A3CC6645E59B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_GetClientFactory_m04F784F132ED87961FD62C56E011A3CC6645E59B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->get_clientFactory_1();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteralC0343BD0A8FFCF941DD99486D38BB493EE32F4D6;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteral55D7DE77013E8A327C6934CC3264902283F7D427;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralA6292443F1F74698A3C4B93DE7A4584298C22FD7;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C, L_3, "GoogleMobileAds, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_1 = L_4;
		Type_t * L_5 = V_1;
		RuntimeObject * L_6 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_5, /*hidden argument*/NULL);
		((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->set_clientFactory_1(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_t5B6D2FE48098D53A81398A90A880725A679D449C_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t70F22E9B5B46BA8D10FFF80A8A427F7988959FDE_il2cpp_TypeInfo_var))->get_clientFactory_1();
		return L_7;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m7B958E29871B80ECB2200B30055E64146DC17065 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_GetMobileAdsClient_m7B958E29871B80ECB2200B30055E64146DC17065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = MobileAds_GetClientFactory_m04F784F132ED87961FD62C56E011A3CC6645E59B(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_t5B6D2FE48098D53A81398A90A880725A679D449C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m00278361BC3E760681DD9F2B253D0CE3EF5E36A9 (U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mF2644256C093ABE5CF29A2C7CA7C44D324819DB1 (U3CInitializeU3Ec__AnonStorey0_tDB62F0FBA683EECB90830E73DACE489DEF885A9B * __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mF2644256C093ABE5CF29A2C7CA7C44D324819DB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * L_0 = __this->get_initCompleteAction_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_tBE74F3E011CE7FD27004E8AEB4D2859E43544F86 * L_1 = __this->get_initCompleteAction_0();
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 * L_3 = (InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222 *)il2cpp_codegen_object_new(InitializationStatus_t7AB3C6AD08DE18E1B675A43ACC220A640500B222_il2cpp_TypeInfo_var);
		InitializationStatus__ctor_m45909AA79E414876CAAD750C9D34E7C7EE7C2502(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_mF734B55F8D263AF40D90EC14C3A4F9216519DC13(L_1, L_3, /*hidden argument*/Action_1_Invoke_mF734B55F8D263AF40D90EC14C3A4F9216519DC13_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m1D820B834D8E021CD01E0FBD975997A36422CE92 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd__ctor_m1D820B834D8E021CD01E0FBD975997A36422CE92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = MobileAds_GetClientFactory_m04F784F132ED87961FD62C56E011A3CC6645E59B(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.IClientFactory::BuildRewardedAdClient() */, IClientFactory_t5B6D2FE48098D53A81398A90A880725A679D449C_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::CreateRewardedAd() */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_5 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_5, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__0_mA28B8CF3DA16B81DFAA90AEE6910B8896CAC1950_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB * L_7 = (EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB *)il2cpp_codegen_object_new(EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7565675A28437C6E7C1618FA36914FFE9F6DE924(L_7, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__1_m452F16894604D06D772EA86AE62CBB6A35313B39_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7565675A28437C6E7C1618FA36914FFE9F6DE924_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_t9F27AA36D2C2BA432AD72B3B9770AEA4ADE15EBB * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 * L_9 = (EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 *)il2cpp_codegen_object_new(EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mFBDC18FD9C8312A880647A5EB685355417EE0611(L_9, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__2_m6C2398D2394701C52B20490D58A721314130231A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mFBDC18FD9C8312A880647A5EB685355417EE0611_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_11 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_11, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__3_m3CDBFE27CFC07ACCF0A55382667A3EF1242B5D2D_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_13 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_13, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__4_m069A92412D0229C1DA5F2925C866F7CDABD2DBA3_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 * L_15 = (EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 *)il2cpp_codegen_object_new(EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mFBDC18FD9C8312A880647A5EB685355417EE0611(L_15, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__5_m0125351C4CB1BD2F89E3D5F11E4EE6C980D5D586_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mFBDC18FD9C8312A880647A5EB685355417EE0611_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tC6C767CEC9783423FB82AB00959FF084A2D049F2 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_17 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_17, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__6_m02F8BA3C9185864B64AFFC8283D9FC7F645EA706_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(14 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_16, L_17);
		RuntimeObject* L_18 = __this->get_client_0();
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_19 = (EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *)il2cpp_codegen_object_new(EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m734AF72C8BB46171DF978EE4C7A171ABF63CB7AE(L_19, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__7_m41C4798E38F905309E709314B7C5CB33554BCC2A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m734AF72C8BB46171DF978EE4C7A171ABF63CB7AE_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker1< EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>) */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_18, L_19);
		RuntimeObject* L_20 = __this->get_client_0();
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_21 = (EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 *)il2cpp_codegen_object_new(EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD8DE63F1A9BE8F27989602A01BA0E55DF7DD4A8D(L_21, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__8_m3D84D06EEE23834A8999AA6FF6C3935198B6794A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD8DE63F1A9BE8F27989602A01BA0E55DF7DD4A8D_RuntimeMethod_var);
		NullCheck(L_20);
		InterfaceActionInvoker1< EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_20, L_21);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdLoaded_m631C035CEAAF34191E25FF795944FA3FD2E56430 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_add_OnAdLoaded_m631C035CEAAF34191E25FF795944FA3FD2E56430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdLoaded_m013D1992ABDFA7A54AAEB6F6AE913A5F79067468 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_remove_OnAdLoaded_m013D1992ABDFA7A54AAEB6F6AE913A5F79067468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClosed_mE11DF7D5F305ADA4DA7217C4975B1724716B0443 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_add_OnAdClosed_mE11DF7D5F305ADA4DA7217C4975B1724716B0443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdClosed_m44B9311AC4A1310560DDFC8FC402F37351B0B377 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_remove_OnAdClosed_m44B9311AC4A1310560DDFC8FC402F37351B0B377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnUserEarnedReward_mE747081AEF5184B807CEBDA82BD17EC6982F2A44 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_add_OnUserEarnedReward_mE747081AEF5184B807CEBDA82BD17EC6982F2A44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * V_0 = NULL;
	EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * V_1 = NULL;
	{
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_0 = __this->get_OnUserEarnedReward_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 ** L_2 = __this->get_address_of_OnUserEarnedReward_9();
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_3 = V_1;
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_6 = V_0;
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *>((EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 **)L_2, ((EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_8 = V_0;
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *)L_8) == ((RuntimeObject*)(EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnUserEarnedReward_m3F8E555B79774BB1CD3CF837D2F13026ECDD8094 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_remove_OnUserEarnedReward_m3F8E555B79774BB1CD3CF837D2F13026ECDD8094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * V_0 = NULL;
	EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * V_1 = NULL;
	{
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_0 = __this->get_OnUserEarnedReward_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 ** L_2 = __this->get_address_of_OnUserEarnedReward_9();
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_3 = V_1;
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_6 = V_0;
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *>((EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 **)L_2, ((EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_8 = V_0;
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *)L_8) == ((RuntimeObject*)(EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_m6676EF76CA096B75E07AAA1AC6E207E3796F3C35 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, AdRequest_tA167BFC582BB586340190F79621BDB1186526063 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_LoadAd_m6676EF76CA096B75E07AAA1AC6E207E3796F3C35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_tA167BFC582BB586340190F79621BDB1186526063 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_tA167BFC582BB586340190F79621BDB1186526063 * >::Invoke(17 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_mCE4802BEDA4B5ECE7B26C0C902BBEC7EAA8BE793 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_Show_mCE4802BEDA4B5ECE7B26C0C902BBEC7EAA8BE793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::Show() */, IRewardedAdClient_t2FB29D72E192A5429E626092D0D924B05D5D2060_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__0_mA28B8CF3DA16B81DFAA90AEE6910B8896CAC1950 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__0_mA28B8CF3DA16B81DFAA90AEE6910B8896CAC1950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__1_m452F16894604D06D772EA86AE62CBB6A35313B39 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__1_m452F16894604D06D772EA86AE62CBB6A35313B39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * V_0 = NULL;
	AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * V_1 = NULL;
	{
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m2C0771056506A0A68E0EA1465C8B0169ADDEACBC_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_3 = (LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 *)il2cpp_codegen_object_new(LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m1DB8EBEFE18F4418125447AF16BB71938FBA8FD0(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tEA74FD4EC9AB0802D882E00A7502B1E4C38978B3 * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_5 = (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m2B9EF713004F88BFE26F35E7040B51EC213FF322(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_6 = V_1;
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE7E94E20B3358E9BD3214D9D3BB9E6A049F8C143_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__2(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__2_m6C2398D2394701C52B20490D58A721314130231A (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__2_m6C2398D2394701C52B20490D58A721314130231A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * V_0 = NULL;
	AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * V_1 = NULL;
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = AdErrorClientEventArgs_get_AdErrorClient_mC08011B3B1353448447C43EACC375A4B1C23AE61_inline(L_1, /*hidden argument*/NULL);
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_3 = (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 *)il2cpp_codegen_object_new(AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4_il2cpp_TypeInfo_var);
		AdError__ctor_m1A50E4683B16334216E2860EE269F9F26ED7B6FA(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_5 = (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 *)il2cpp_codegen_object_new(AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_6 = V_1;
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__3_m3CDBFE27CFC07ACCF0A55382667A3EF1242B5D2D (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__3_m3CDBFE27CFC07ACCF0A55382667A3EF1242B5D2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdOpening_5();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__4_m069A92412D0229C1DA5F2925C866F7CDABD2DBA3 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__4_m069A92412D0229C1DA5F2925C866F7CDABD2DBA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdClosed_6();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__5(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__5_m0125351C4CB1BD2F89E3D5F11E4EE6C980D5D586 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__5_m0125351C4CB1BD2F89E3D5F11E4EE6C980D5D586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * V_0 = NULL;
	AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * V_1 = NULL;
	{
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = AdErrorClientEventArgs_get_AdErrorClient_mC08011B3B1353448447C43EACC375A4B1C23AE61_inline(L_1, /*hidden argument*/NULL);
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_3 = (AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 *)il2cpp_codegen_object_new(AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4_il2cpp_TypeInfo_var);
		AdError__ctor_m1A50E4683B16334216E2860EE269F9F26ED7B6FA(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t33F05DDB4CCF068343CBDF32B34E2291191CA67C * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_5 = (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 *)il2cpp_codegen_object_new(AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mE1733E29751ED5BE6630DC307BF36DC7334C4F23(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_6 = V_1;
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mE2712D063DDE7FC234B4978E911634DEB17F5240_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__6(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__6_m02F8BA3C9185864B64AFFC8283D9FC7F645EA706 (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__6_m02F8BA3C9185864B64AFFC8283D9FC7F645EA706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__7(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__7_m41C4798E38F905309E709314B7C5CB33554BCC2A (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, Reward_t93480A8C76DD13444048E1C0E9FCD295F4A0DEED * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__7_m41C4798E38F905309E709314B7C5CB33554BCC2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_0 = __this->get_OnUserEarnedReward_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tFA6810EF7D00385400AE1EF9610DECF5DF1038F5 * L_1 = __this->get_OnUserEarnedReward_9();
		Reward_t93480A8C76DD13444048E1C0E9FCD295F4A0DEED * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m796683E6C5D99666C847DB0E08742077FFDE0579(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m796683E6C5D99666C847DB0E08742077FFDE0579_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__8(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__8_m3D84D06EEE23834A8999AA6FF6C3935198B6794A (RewardedAd_t18B0D0635F458F4DD2E1DFD59E8F2D2A6831F0D8 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAd_U3CRewardedAdU3Em__8_m3D84D06EEE23834A8999AA6FF6C3935198B6794A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_0 = __this->get_OnPaidEvent_10();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tAF22FABEEBA2CE5D73C85E4B9AD5D64B9DB478F6 * L_1 = __this->get_OnPaidEvent_10();
		AdValueEventArgs_tC6BE1FDDF043CBB38B645BAEB42BE17085FE063C * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m531F358E64BD4D81F25D69C45147F3DD05D05B5C(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m531F358E64BD4D81F25D69C45147F3DD05D05B5C_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m2C0771056506A0A68E0EA1465C8B0169ADDEACBC_inline (LoadAdErrorClientEventArgs_tCE97614FBC6753CEA61AE628379D6A9B9676B9B9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoadAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mF544B9D2CDC3AD1A4CA59EE1D9C3360F69F52ADB_inline (AdFailedToLoadEventArgs_tBA53FD429FC019D4E2F11E85C12DDD2FF3641E40 * __this, LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t69A94DB6ABA53A921A4974C34F4D092410AFD4A2 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mC08011B3B1353448447C43EACC375A4B1C23AE61_inline (AdErrorClientEventArgs_tA89641A94FFA0809B4A3DD768C685762CB982CE3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_mCDD85D1020C43A0F685A435FFC486064DD781812_inline (AdErrorEventArgs_t8711B5AE62A194D4ECBA91627A0253F318B7A072 * __this, AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t19E17741E76EA183B3169395E6B2AAF5312C70C4 * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
