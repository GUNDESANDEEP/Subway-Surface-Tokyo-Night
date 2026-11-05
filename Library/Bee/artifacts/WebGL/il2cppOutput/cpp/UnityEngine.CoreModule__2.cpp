#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};

struct Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_2_t39F9A40857E06142231322CA3632F32C6926572A;
struct Action_2_tD10F5E6177A537BA8FBA8AE4D5CE75EA7503049A;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705;
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86;
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10;
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct Exception_t;
struct GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB;
struct GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7;
struct GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0;
struct GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32;
struct GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF;
struct GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D;
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73;
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF;
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6;
struct MethodInfo_t;
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C;
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8;
struct String_t;
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1;
struct OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3EO_tA034329A8280E6B5294656F6423C2AC6C2067162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m869FBE9CEA8FB2E0C11A4EB728F8E08E1DDBC42B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mCFE79109FB3E05DEE1856FF8AB8633F95A23B7CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m44F26E1A4DDE9B7C55F1CE197B39949684DEB9FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m20606B63983B0110DE0BEB611BC4DA84D5CEA95F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF003B8446358CBF2BE8724D7144F29285BCAF44E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m759E0FDB7153FBFD758242EE7033B7681867BC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpriteAtlasManager_Register_m44D4E9341918EA32BEC92A77E851FF9A3BC21505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7;;
struct GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke;
struct GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke;;
struct InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t9909632E27B9F1D1A060845D24FDCBED135D4A61  : public RuntimeObject
{
};
struct GPUDrivenCallbacks_tC30E729FE2BFEE4DE1BC9F8DB922223BEAA87A26  : public RuntimeObject
{
};
struct SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct U3CU3EO_tA034329A8280E6B5294656F6423C2AC6C2067162  : public RuntimeObject
{
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705* ___indirectDrawCommands;
	BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86* ___proceduralDrawCommands;
	BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50* ___proceduralIndirectDrawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___drawCommandPickingEntityIds;
	int32_t ___drawCommandCount;
	int32_t ___indirectDrawCommandCount;
	int32_t ___proceduralDrawCommandCount;
	int32_t ___proceduralIndirectDrawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 
{
	uint32_t ___renderingLayerMask;
	int32_t ___rendererPriority;
	uint64_t ___m_sceneCullingMask;
	uint8_t ___layer;
	uint8_t ___m_batchLayer;
	uint8_t ___m_motionMode;
	uint8_t ___m_shadowMode;
	uint8_t ___m_receiveShadows;
	uint8_t ___m_staticShadowCaster;
	uint8_t ___m_allDepthSorted;
	uint8_t ___m_isSceneCullingMaskSet;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 
{
	uint32_t ___value;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB 
{
	uint64_t ___handle;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___meshPtr;
	GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___meshDataPtr;
	int32_t* ___subMeshBufferOffsetPtr;
	GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___subMeshDataPtr;
	int32_t ___meshCount;
	int32_t ___subMeshDataCount;
};
struct GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___lodGroup;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___worldSpaceReferencePoint;
	float* ___worldSpaceSize;
	InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___groupSettings;
	uint8_t* ___forceLODMask;
	EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___lodBuffer;
	int32_t ___lodGroupCount;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___invalidLODGroups;
	int32_t ___invalidLODGroupCount;
	bool ___transformOnly;
};
struct GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshaled_pinvoke
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___lodGroup;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___worldSpaceReferencePoint;
	float* ___worldSpaceSize;
	InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___groupSettings;
	uint8_t* ___forceLODMask;
	EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___lodBuffer;
	int32_t ___lodGroupCount;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___invalidLODGroups;
	int32_t ___invalidLODGroupCount;
	int32_t ___transformOnly;
};
struct GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshaled_com
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___lodGroup;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___worldSpaceReferencePoint;
	float* ___worldSpaceSize;
	InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___groupSettings;
	uint8_t* ___forceLODMask;
	EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___lodBuffer;
	int32_t ___lodGroupCount;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___invalidLODGroups;
	int32_t ___invalidLODGroupCount;
	int32_t ___transformOnly;
};
struct GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___renderer;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___localBounds;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___lightmapScaleOffset;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___lodGroup;
	uint8_t* ___lodMask;
	int16_t* ___lightmapIndex;
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* ___rendererSettings;
	int32_t* ___rendererPriority;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___localToWorldMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___prevLocalToWorldMatrix;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___mesh;
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* ___meshLodSettings;
	uint16_t* ___subMeshStartIndex;
	RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___subMaterialRange;
	uint32_t* ___rendererUserValues;
	uint64_t* ___sceneCullingMask;
	int32_t ___rendererCount;
	int32_t ___materialCount;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___material;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___invalidRenderer;
	int32_t ___invalidRendererCount;
};
struct GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 
{
	uint32_t ___value;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D 
{
	uint8_t ___m_Data;
};
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 
{
	int32_t ___forceLod;
	float ___lodSelectionBias;
};
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF 
{
	uint32_t ___m_RenderingLayerMask;
	uint16_t ___m_Data;
	uint8_t ___m_ObjectLayer;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	int32_t ___start;
	int32_t ___length;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_t5BB721AA519269CD0B1FA56A3D852BF76A187688 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t5BB721AA519269CD0B1FA56A3D852BF76A187688__padding[20];
	};
};
#pragma pack(pop, tp)
struct U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4__padding[16];
	};
};
struct U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67__padding[8];
	};
};
struct U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804__padding[16];
	};
};
struct LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 
{
	float ___m_LodSlope;
	float ___m_LodBias;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BatchCullingFlags_tEECC03D99C74958416446D306EA944DBA1C8E3A2 
{
	int32_t ___value__;
};
struct BatchCullingProjectionType_tAD14BC373E72D5F74188E0899F8670FAB51FD481 
{
	int32_t ___value__;
};
struct BatchCullingViewType_tAC2682BF9A489DF44A8960693303B47248C252CF 
{
	int32_t ___value__;
};
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
{
	int32_t ___value__;
};
struct BatchDrawCommandType_t4829A9A68B9A2A75028B65A098842BC3B95F7BED 
{
	int32_t ___value__;
};
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10  : public RuntimeObject
{
	intptr_t ___m_GroupHandle;
	OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* ___m_PerformCulling;
	OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* ___m_FinishedCulling;
};
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke
{
	intptr_t ___m_GroupHandle;
	Il2CppMethodPointer ___m_PerformCulling;
	Il2CppMethodPointer ___m_FinishedCulling;
};
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com
{
	intptr_t ___m_GroupHandle;
	Il2CppMethodPointer ___m_PerformCulling;
	Il2CppMethodPointer ___m_FinishedCulling;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B 
{
	U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804 ___m_ScreenRelativeTransitionHeights;
	U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4 ___m_FadeTransitionWidths;
	U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67 ___m_RendererCounts;
	uint8_t ___m_Length;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 
{
	int32_t ___subMeshCount;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
};
struct GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A 
{
	int32_t ___m_IsOrthographic;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition;
	float ___m_FieldOfView;
	float ___m_OrthoSize;
	int32_t ___m_CameraPixelHeight;
};
struct LightProbeUsage_tC6292C7B7CBA0E5AA2A56F40D71F58A7E06C2948 
{
	int32_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct MotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct ShaderPropertyFlags_tFC675729F043235B8233376BB117B9D77ED76916 
{
	int32_t ___value__;
};
struct ShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D 
{
	int32_t ___value__;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 
{
	String_t* ___m_Name;
	String_t* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct LightmapMixedBakeModes_tA9CBB8FED394CF87363E6013E665FA59267904EF 
{
	int32_t ___value__;
};
struct ReflectionProbeModes_t09C3CE8EDD13F84305A19602D37D51F39E5E3DFC 
{
	int32_t ___value__;
};
struct NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6DF90EFCAE24D07B524BA756F17FA2FE72D11A46 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7DA1A8B0792A5D6C71B6CD155C25CB188057FAB1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0 
{
	int32_t ___flags;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___batchID;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	uint16_t ___splitVisibilityMask;
	uint16_t ___lightmapIndex;
	int32_t ___sortingPosition;
	uint32_t ___visibleOffset;
	uint32_t ___visibleCount;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	uint16_t ___submeshIndex;
	uint16_t ___activeMeshLod;
};
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705 
{
	int32_t ___flags;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___batchID;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	uint16_t ___splitVisibilityMask;
	uint16_t ___lightmapIndex;
	int32_t ___sortingPosition;
	uint32_t ___visibleOffset;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___topology;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___visibleInstancesBufferHandle;
	uint32_t ___visibleInstancesBufferWindowOffset;
	uint32_t ___visibleInstancesBufferWindowSizeBytes;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___indirectArgsBufferHandle;
	uint32_t ___indirectArgsBufferOffset;
};
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86 
{
	int32_t ___flags;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___batchID;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	uint16_t ___splitVisibilityMask;
	uint16_t ___lightmapIndex;
	int32_t ___sortingPosition;
	uint32_t ___visibleOffset;
	uint32_t ___visibleCount;
	int32_t ___topology;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___indexBufferHandle;
	uint32_t ___baseVertex;
	uint32_t ___indexOffsetBytes;
	uint32_t ___elementCount;
};
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50 
{
	int32_t ___flags;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___batchID;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	uint16_t ___splitVisibilityMask;
	uint16_t ___lightmapIndex;
	int32_t ___sortingPosition;
	uint32_t ___visibleOffset;
	int32_t ___topology;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___indexBufferHandle;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___visibleInstancesBufferHandle;
	uint32_t ___visibleInstancesBufferWindowOffset;
	uint32_t ___visibleInstancesBufferWindowSizeBytes;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___indirectArgsBufferHandle;
	uint32_t ___indirectArgsBufferOffset;
};
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F 
{
	int32_t ___drawCommandsType;
	uint32_t ___drawCommandsBegin;
	uint32_t ___drawCommandsCount;
	BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 ___filterSettings;
};
struct BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5 
{
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___cullingJobsFence;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___localToWorldMatrix;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___cullingPlanes;
	int32_t ___cullingPlaneCount;
	int32_t ___receiverPlaneOffset;
	int32_t ___receiverPlaneCount;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___cullingSplits;
	int32_t ___cullingSplitCount;
	int32_t ___viewType;
	int32_t ___projectionType;
	int32_t ___cullingFlags;
	uint64_t ___viewID;
	uint32_t ___cullingLayerMask;
	uint8_t ___splitExclusionMask;
	uint64_t ___sceneCullingMask;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___drawCommands;
	uint32_t ___brgId;
	intptr_t ___occlusionBuffer;
	intptr_t ___customCullingResult;
};
struct GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B 
{
	int32_t ___topology;
	uint32_t ___baseVertex;
	uint32_t ___indexStart;
	uint32_t ___indexCount;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct Action_2_t39F9A40857E06142231322CA3632F32C6926572A  : public MulticastDelegate_t
{
};
struct Action_2_tD10F5E6177A537BA8FBA8AE4D5CE75EA7503049A  : public MulticastDelegate_t
{
};
struct BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 
{
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___cullingPlanes;
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 ___cullingSplits;
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___lodParameters;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___localToWorldMatrix;
	int32_t ___viewType;
	int32_t ___projectionType;
	int32_t ___cullingFlags;
	BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB ___viewID;
	uint32_t ___cullingLayerMask;
	uint64_t ___sceneCullingMask;
	uint16_t ___splitExclusionMask;
	uint8_t ___isOrthographic;
	int32_t ___receiverPlaneOffset;
	int32_t ___receiverPlaneCount;
	intptr_t ___occlusionBuffer;
};
struct BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F 
{
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A ___drawCommands;
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___customCullingResult;
};
struct GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB  : public MulticastDelegate_t
{
};
struct GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___lodGroup;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___worldSpaceReferencePoint;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___worldSpaceSize;
	NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D ___groupSettings;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___forceLODMask;
	NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 ___lodBuffer;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___invalidLODGroup;
	bool ___transformOnly;
};
struct GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___lodGroup;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___worldSpaceReferencePoint;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___worldSpaceSize;
	NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D ___groupSettings;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___forceLODMask;
	NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 ___lodBuffer;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___invalidLODGroup;
	int32_t ___transformOnly;
};
struct GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_com
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___lodGroup;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___worldSpaceReferencePoint;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___worldSpaceSize;
	NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D ___groupSettings;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___forceLODMask;
	NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 ___lodBuffer;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___invalidLODGroup;
	int32_t ___transformOnly;
};
struct GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___renderer;
	NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 ___localBounds;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___lightmapScaleOffset;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___lodGroup;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___lodMask;
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 ___lightmapIndex;
	NativeArray_1_t7DA1A8B0792A5D6C71B6CD155C25CB188057FAB1 ___rendererSettings;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___rendererPriority;
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___localToWorldMatrix;
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___prevLocalToWorldMatrix;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___mesh;
	NativeArray_1_t6DF90EFCAE24D07B524BA756F17FA2FE72D11A46 ___meshLodSettings;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___subMeshStartIndex;
	NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 ___subMaterialRange;
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___rendererUserValues;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___sceneCullingMask;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___material;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___invalidRenderer;
};
struct OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1  : public MulticastDelegate_t
{
};
struct GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0  : public MulticastDelegate_t
{
};
struct GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF  : public MulticastDelegate_t
{
};
struct OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2  : public MulticastDelegate_t
{
};
struct U3CPrivateImplementationDetailsU3E_t9909632E27B9F1D1A060845D24FDCBED135D4A61_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2B878E2D9FACF80C65F93CBA03552ACE3C7A405D9D84BB4FB19709B5AFF5A0E6_B11;
	__StaticArrayInitTypeSizeU3D20_t5BB721AA519269CD0B1FA56A3D852BF76A187688 ___39D974909C7E64675317DD1A8583B8D8DE92E68B180532FADD22B482AD93DC83;
	__StaticArrayInitTypeSizeU3D20_t5BB721AA519269CD0B1FA56A3D852BF76A187688 ___C77A066B9EC0272B121AD30CBAEDA4AD20F986D49CC6D0007EBF45888D8B09BF;
};
struct SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields
{
	Action_2_t39F9A40857E06142231322CA3632F32C6926572A* ___atlasRequested;
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___atlasRegistered;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct U3CU3EO_tA034329A8280E6B5294656F6423C2AC6C2067162_StaticFields
{
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___U3C0U3E__Register;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_StaticFields
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___Null;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_StaticFields
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___Null;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_StaticFields
{
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___Default;
};
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_StaticFields
{
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___Default;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshal_pinvoke(const GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7& unmarshaled, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshal_pinvoke_back(const GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke& marshaled, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7& unmarshaled);
IL2CPP_EXTERN_C void GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshal_pinvoke_cleanup(GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke& marshaled);

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_gshared (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m20606B63983B0110DE0BEB611BC4DA84D5CEA95F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m869FBE9CEA8FB2E0C11A4EB728F8E08E1DDBC42B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7DA1A8B0792A5D6C71B6CD155C25CB188057FAB1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m759E0FDB7153FBFD758242EE7033B7681867BC8A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6DF90EFCAE24D07B524BA756F17FA2FE72D11A46 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF003B8446358CBF2BE8724D7144F29285BCAF44E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mCFE79109FB3E05DEE1856FF8AB8633F95A23B7CB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m44F26E1A4DDE9B7C55F1CE197B39949684DEB9FC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDF5EF31AC1ADD4373D136754E84CC2A4BA4E065C_gshared (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mDD1D2A12580DDBEFF089E3D42B404DBB3E2EE3DA_gshared_inline (Action_2_tD10F5E6177A537BA8FBA8AE4D5CE75EA7503049A* __this, Il2CppSharedGenericObject* ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchID_GetHashCode_m3F4DFD3D722865BBC47F74C5E452E985B6BBBA3A (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchID_Equals_m4207BA1B44B5BF1DA2847571B6D9A981F5AE3CFF (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchID_Equals_m953C8EE9ABF083CFAA3D7210F1085C9FD7EED71D (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchMaterialID_GetHashCode_mE28980612614E66848ADABB7825CA73FFA39DD09 (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMaterialID_Equals_m073A3DECD4CDE73F0CC314024B89399982E5BA83 (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMaterialID_Equals_m776A152CA1957E92FCD24B4E2EDAF8A6D78E953E (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchMeshID_GetHashCode_m62EDD33030F375FAAD44A23FAD7901A2BE1D08A9 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMeshID_Equals_m985986D473BB12E9F43C59B41846660884B15C06 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMeshID_Equals_mA501F8E992E7B32BD8985DD68D5D0B360A104A42 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchPackedCullingViewID_GetHashCode_m588865495A1A1F2AC79A62D76B2DDC91D743F4A5 (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchPackedCullingViewID_Equals_mD7B8D7EFB1678D80FC11B9FA1171988669CD0C7E (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchPackedCullingViewID_Equals_m2E5BC66A5B8D6737BABE5D6A0019F901192D2A9F (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BatchPackedCullingViewID__ctor_m7AB9AC0B1DBF4C3B0E7C943DB9EC4CDF34B81C8D_inline (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, uint64_t ___0_viewID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchCullingContext__ctor_mCBB93A14809CFC7FE19E3C68BC1426C5C29F1531 (BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___0_inCullingPlanes, NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 ___1_inCullingSplits, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___2_inLodParameters, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_inLocalToWorldMatrix, int32_t ___4_inViewType, int32_t ___5_inProjectionType, int32_t ___6_inBatchCullingFlags, uint64_t ___7_inViewID, uint32_t ___8_inCullingLayerMask, uint64_t ___9_inSceneCullingMask, uint8_t ___10_inExclusionSplitMask, int32_t ___11_inReceiverPlaneOffset, int32_t ___12_inReceiverPlaneCount, intptr_t ___13_inOcclusionBuffer, const RuntimeMethod* method) ;
inline NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_ScheduleBatchedJobs_mCA0E146397E30E31FB57C96DAA1820451886DACA (const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555 (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_inline (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_inline (OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalMeshRendererSettings__ctor_mDD8A54C2A55D8697A99BE4E58937881F994E76AC (InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* __this, uint32_t ___0_renderingLayerMask, uint8_t ___1_objectLayer, bool ___2_receiveShadows, bool ___3_staticShadowCaster, int32_t ___4_shadowCastingMode, int32_t ___5_lightProbeUsage, int32_t ___6_motionMode, bool ___7_smallMeshCulling, bool ___8_isPartOfStaticBatch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m20606B63983B0110DE0BEB611BC4DA84D5CEA95F (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m20606B63983B0110DE0BEB611BC4DA84D5CEA95F_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m869FBE9CEA8FB2E0C11A4EB728F8E08E1DDBC42B (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m869FBE9CEA8FB2E0C11A4EB728F8E08E1DDBC42B_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_inline (GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method) ;
inline NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t7DA1A8B0792A5D6C71B6CD155C25CB188057FAB1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m759E0FDB7153FBFD758242EE7033B7681867BC8A (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7DA1A8B0792A5D6C71B6CD155C25CB188057FAB1 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m759E0FDB7153FBFD758242EE7033B7681867BC8A_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t6DF90EFCAE24D07B524BA756F17FA2FE72D11A46 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF003B8446358CBF2BE8724D7144F29285BCAF44E (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6DF90EFCAE24D07B524BA756F17FA2FE72D11A46 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF003B8446358CBF2BE8724D7144F29285BCAF44E_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenRendererDataCallback_Invoke_m3B6D42F73FD65B7F49717E8B36A15CBD21F87BF0_inline (GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906* ___0_rendererData, const RuntimeMethod* method) ;
inline NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mCFE79109FB3E05DEE1856FF8AB8633F95A23B7CB (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mCFE79109FB3E05DEE1856FF8AB8633F95A23B7CB_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m44F26E1A4DDE9B7C55F1CE197B39949684DEB9FC (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m44F26E1A4DDE9B7C55F1CE197B39949684DEB9FC_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenFetchMeshesDataCallback_Invoke_mED54F20D9972FB20B3E4E773DCD197EE350EBDF8_inline (GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_meshIDs, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 ___1_meshDatas, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_subMeshOffsets, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A ___3_subMeshDatas, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUDrivenSubMesh_Equals_m1F72396FE40AB3C48BA91CCAC548F6830F3B0DF2 (GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* __this, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___0_other, const RuntimeMethod* method) ;
inline void Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDF5EF31AC1ADD4373D136754E84CC2A4BA4E065C_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_2_Invoke_mA430E6535AAD3C65C12911DAF89C62ACC8592846_inline (Action_2_t39F9A40857E06142231322CA3632F32C6926572A* __this, String_t* ___0_arg1, Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t39F9A40857E06142231322CA3632F32C6926572A*, String_t*, Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*, const RuntimeMethod*))Action_2_Invoke_mDD1D2A12580DDBEFF089E3D42B404DBB3E2EE3DA_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void Action_1_Invoke_m9C0FDD39CBEA968B10871576A8DAFEEC5360339F_inline (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* __this, SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*, SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8*, const RuntimeMethod*))Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline)(__this, ___0_obj, method);
}
inline intptr_t MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_inline (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212 (intptr_t ___0_spriteAtlas, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchID_GetHashCode_m3F4DFD3D722865BBC47F74C5E452E985B6BBBA3A (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = (uint32_t*)(&__this->___value);
		int32_t L_1;
		L_1 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t BatchID_GetHashCode_m3F4DFD3D722865BBC47F74C5E452E985B6BBBA3A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770>(__this);
	int32_t _returnValue;
	_returnValue = BatchID_GetHashCode_m3F4DFD3D722865BBC47F74C5E452E985B6BBBA3A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchID_Equals_m953C8EE9ABF083CFAA3D7210F1085C9FD7EED71D (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BatchID_Equals_m4207BA1B44B5BF1DA2847571B6D9A981F5AE3CFF(__this, ((*(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*)UnBox(L_1, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BatchID_Equals_m953C8EE9ABF083CFAA3D7210F1085C9FD7EED71D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770>(__this);
	bool _returnValue;
	_returnValue = BatchID_Equals_m953C8EE9ABF083CFAA3D7210F1085C9FD7EED71D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchID_Equals_m4207BA1B44B5BF1DA2847571B6D9A981F5AE3CFF (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___0_other, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___value;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_1 = ___0_other;
		uint32_t L_2 = L_1.___value;
		return (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BatchID_Equals_m4207BA1B44B5BF1DA2847571B6D9A981F5AE3CFF_AdjustorThunk (RuntimeObject* __this, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___0_other, const RuntimeMethod* method)
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770>(__this);
	bool _returnValue;
	_returnValue = BatchID_Equals_m4207BA1B44B5BF1DA2847571B6D9A981F5AE3CFF(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchID__cctor_m64258A0EFBDACA106FC41F54A1CF9936A884A4B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770));
		(&V_0)->___value = 0;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_0 = V_0;
		((BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_StaticFields*)il2cpp_codegen_static_fields_for(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var))->___Null = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchMaterialID_GetHashCode_mE28980612614E66848ADABB7825CA73FFA39DD09 (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = (uint32_t*)(&__this->___value);
		int32_t L_1;
		L_1 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t BatchMaterialID_GetHashCode_mE28980612614E66848ADABB7825CA73FFA39DD09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C>(__this);
	int32_t _returnValue;
	_returnValue = BatchMaterialID_GetHashCode_mE28980612614E66848ADABB7825CA73FFA39DD09(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMaterialID_Equals_m776A152CA1957E92FCD24B4E2EDAF8A6D78E953E (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BatchMaterialID_Equals_m073A3DECD4CDE73F0CC314024B89399982E5BA83(__this, ((*(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*)UnBox(L_1, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BatchMaterialID_Equals_m776A152CA1957E92FCD24B4E2EDAF8A6D78E953E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C>(__this);
	bool _returnValue;
	_returnValue = BatchMaterialID_Equals_m776A152CA1957E92FCD24B4E2EDAF8A6D78E953E(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMaterialID_Equals_m073A3DECD4CDE73F0CC314024B89399982E5BA83 (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___0_other, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___value;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_1 = ___0_other;
		uint32_t L_2 = L_1.___value;
		return (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BatchMaterialID_Equals_m073A3DECD4CDE73F0CC314024B89399982E5BA83_AdjustorThunk (RuntimeObject* __this, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___0_other, const RuntimeMethod* method)
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C>(__this);
	bool _returnValue;
	_returnValue = BatchMaterialID_Equals_m073A3DECD4CDE73F0CC314024B89399982E5BA83(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchMaterialID__cctor_mCAFD39D3BA87D50321EA76B09E7CD4B8028E9A35 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C));
		(&V_0)->___value = 0;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_0 = V_0;
		((BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_StaticFields*)il2cpp_codegen_static_fields_for(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var))->___Null = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchMeshID_GetHashCode_m62EDD33030F375FAAD44A23FAD7901A2BE1D08A9 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = (uint32_t*)(&__this->___value);
		int32_t L_1;
		L_1 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t BatchMeshID_GetHashCode_m62EDD33030F375FAAD44A23FAD7901A2BE1D08A9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0>(__this);
	int32_t _returnValue;
	_returnValue = BatchMeshID_GetHashCode_m62EDD33030F375FAAD44A23FAD7901A2BE1D08A9(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMeshID_Equals_mA501F8E992E7B32BD8985DD68D5D0B360A104A42 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BatchMeshID_Equals_m985986D473BB12E9F43C59B41846660884B15C06(__this, ((*(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*)UnBox(L_1, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BatchMeshID_Equals_mA501F8E992E7B32BD8985DD68D5D0B360A104A42_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0>(__this);
	bool _returnValue;
	_returnValue = BatchMeshID_Equals_mA501F8E992E7B32BD8985DD68D5D0B360A104A42(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMeshID_Equals_m985986D473BB12E9F43C59B41846660884B15C06 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_other, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___value;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_1 = ___0_other;
		uint32_t L_2 = L_1.___value;
		return (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BatchMeshID_Equals_m985986D473BB12E9F43C59B41846660884B15C06_AdjustorThunk (RuntimeObject* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_other, const RuntimeMethod* method)
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0>(__this);
	bool _returnValue;
	_returnValue = BatchMeshID_Equals_m985986D473BB12E9F43C59B41846660884B15C06(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchMeshID__cctor_mC7DF8454B495B27D09F84E06E8D42B5F4224043A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0));
		(&V_0)->___value = 0;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_0 = V_0;
		((BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields*)il2cpp_codegen_static_fields_for(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var))->___Null = L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchPackedCullingViewID_GetHashCode_m588865495A1A1F2AC79A62D76B2DDC91D743F4A5 (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = (uint64_t*)(&__this->___handle);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t BatchPackedCullingViewID_GetHashCode_m588865495A1A1F2AC79A62D76B2DDC91D743F4A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB>(__this);
	int32_t _returnValue;
	_returnValue = BatchPackedCullingViewID_GetHashCode_m588865495A1A1F2AC79A62D76B2DDC91D743F4A5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchPackedCullingViewID_Equals_mD7B8D7EFB1678D80FC11B9FA1171988669CD0C7E (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB ___0_other, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___handle;
		BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB L_1 = ___0_other;
		uint64_t L_2 = L_1.___handle;
		return (bool)((((int64_t)L_0) == ((int64_t)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BatchPackedCullingViewID_Equals_mD7B8D7EFB1678D80FC11B9FA1171988669CD0C7E_AdjustorThunk (RuntimeObject* __this, BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB ___0_other, const RuntimeMethod* method)
{
	BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB>(__this);
	bool _returnValue;
	_returnValue = BatchPackedCullingViewID_Equals_mD7B8D7EFB1678D80FC11B9FA1171988669CD0C7E(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchPackedCullingViewID_Equals_m2E5BC66A5B8D6737BABE5D6A0019F901192D2A9F (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = BatchPackedCullingViewID_Equals_mD7B8D7EFB1678D80FC11B9FA1171988669CD0C7E(__this, ((*(BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB*)UnBox(L_1, BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB_il2cpp_TypeInfo_var))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool BatchPackedCullingViewID_Equals_m2E5BC66A5B8D6737BABE5D6A0019F901192D2A9F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB>(__this);
	bool _returnValue;
	_returnValue = BatchPackedCullingViewID_Equals_m2E5BC66A5B8D6737BABE5D6A0019F901192D2A9F(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchPackedCullingViewID__ctor_m7AB9AC0B1DBF4C3B0E7C943DB9EC4CDF34B81C8D (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, uint64_t ___0_viewID, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_viewID;
		__this->___handle = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void BatchPackedCullingViewID__ctor_m7AB9AC0B1DBF4C3B0E7C943DB9EC4CDF34B81C8D_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_viewID, const RuntimeMethod* method)
{
	BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB>(__this);
	BatchPackedCullingViewID__ctor_m7AB9AC0B1DBF4C3B0E7C943DB9EC4CDF34B81C8D_inline(_thisAdjusted, ___0_viewID, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchCullingContext__ctor_mCBB93A14809CFC7FE19E3C68BC1426C5C29F1531 (BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___0_inCullingPlanes, NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 ___1_inCullingSplits, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___2_inLodParameters, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_inLocalToWorldMatrix, int32_t ___4_inViewType, int32_t ___5_inProjectionType, int32_t ___6_inBatchCullingFlags, uint64_t ___7_inViewID, uint32_t ___8_inCullingLayerMask, uint64_t ___9_inSceneCullingMask, uint8_t ___10_inExclusionSplitMask, int32_t ___11_inReceiverPlaneOffset, int32_t ___12_inReceiverPlaneCount, intptr_t ___13_inOcclusionBuffer, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_0 = ___0_inCullingPlanes;
		__this->___cullingPlanes = L_0;
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_1 = ___1_inCullingSplits;
		__this->___cullingSplits = L_1;
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_2 = ___2_inLodParameters;
		__this->___lodParameters = L_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = ___3_inLocalToWorldMatrix;
		__this->___localToWorldMatrix = L_3;
		int32_t L_4 = ___4_inViewType;
		__this->___viewType = L_4;
		int32_t L_5 = ___5_inProjectionType;
		__this->___projectionType = L_5;
		int32_t L_6 = ___6_inBatchCullingFlags;
		__this->___cullingFlags = L_6;
		uint64_t L_7 = ___7_inViewID;
		BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB L_8;
		memset((&L_8), 0, sizeof(L_8));
		BatchPackedCullingViewID__ctor_m7AB9AC0B1DBF4C3B0E7C943DB9EC4CDF34B81C8D_inline((&L_8), L_7, NULL);
		__this->___viewID = L_8;
		uint32_t L_9 = ___8_inCullingLayerMask;
		__this->___cullingLayerMask = L_9;
		uint64_t L_10 = ___9_inSceneCullingMask;
		__this->___sceneCullingMask = L_10;
		uint8_t L_11 = ___10_inExclusionSplitMask;
		__this->___splitExclusionMask = L_11;
		int32_t L_12 = ___11_inReceiverPlaneOffset;
		__this->___receiverPlaneOffset = L_12;
		int32_t L_13 = ___12_inReceiverPlaneCount;
		__this->___receiverPlaneCount = L_13;
		__this->___isOrthographic = (uint8_t)0;
		intptr_t L_14 = ___13_inOcclusionBuffer;
		__this->___occlusionBuffer = L_14;
		return;
	}
}
IL2CPP_EXTERN_C  void BatchCullingContext__ctor_mCBB93A14809CFC7FE19E3C68BC1426C5C29F1531_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___0_inCullingPlanes, NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 ___1_inCullingSplits, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___2_inLodParameters, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_inLocalToWorldMatrix, int32_t ___4_inViewType, int32_t ___5_inProjectionType, int32_t ___6_inBatchCullingFlags, uint64_t ___7_inViewID, uint32_t ___8_inCullingLayerMask, uint64_t ___9_inSceneCullingMask, uint8_t ___10_inExclusionSplitMask, int32_t ___11_inReceiverPlaneOffset, int32_t ___12_inReceiverPlaneCount, intptr_t ___13_inOcclusionBuffer, const RuntimeMethod* method)
{
	BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659>(__this);
	BatchCullingContext__ctor_mCBB93A14809CFC7FE19E3C68BC1426C5C29F1531(_thisAdjusted, ___0_inCullingPlanes, ___1_inCullingSplits, ___2_inLodParameters, ___3_inLocalToWorldMatrix, ___4_inViewType, ___5_inProjectionType, ___6_inBatchCullingFlags, ___7_inViewID, ___8_inCullingLayerMask, ___9_inSceneCullingMask, ___10_inExclusionSplitMask, ___11_inReceiverPlaneOffset, ___12_inReceiverPlaneCount, ___13_inOcclusionBuffer, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_PerformCullingException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCullingException, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_PerformCullingException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCullingException, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup(BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_PerformCullingException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCullingException, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com_back(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_PerformCullingException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCullingException, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com_cleanup(BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchRendererGroup_InvokeOnPerformCulling_mCBE957A7C05B4023359DE8EADB3B17D93956CCC3 (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_group, BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* ___1_context, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* ___2_lodParameters, intptr_t ___3_userContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_2;
	memset((&V_2), 0, sizeof(V_2));
	BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F V_3;
	memset((&V_3), 0, sizeof(V_3));
	BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_0 = ___1_context;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_1 = L_0->___cullingPlanes;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_2 = ___1_context;
		int32_t L_3 = L_2->___cullingPlaneCount;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_4;
		L_4 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441((void*)L_1, L_3, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_RuntimeMethod_var);
		V_0 = L_4;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_5 = ___1_context;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6 = L_5->___cullingSplits;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_7 = ___1_context;
		int32_t L_8 = L_7->___cullingSplitCount;
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_9;
		L_9 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238((void*)L_6, L_8, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_RuntimeMethod_var);
		V_1 = L_9;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_10 = ___1_context;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_11 = L_10->___drawCommands;
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_12;
		L_12 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976((void*)L_11, 1, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_RuntimeMethod_var);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ce:
			{
				JobHandle_ScheduleBatchedJobs_mCA0E146397E30E31FB57C96DAA1820451886DACA(NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_4), sizeof(BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F));
			NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_13 = V_2;
			(&V_4)->___drawCommands = L_13;
			NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_14;
			memset((&L_14), 0, sizeof(L_14));
			NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555((&L_14), 1, 2, 1, NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_RuntimeMethod_var);
			(&V_4)->___customCullingResult = L_14;
			BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F L_15 = V_4;
			V_3 = L_15;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_16 = ___1_context;
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_17 = ___0_group;
			OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* L_18 = L_17->___m_PerformCulling;
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_19 = ___0_group;
			NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_20 = V_0;
			NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_21 = V_1;
			LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* L_22 = ___2_lodParameters;
			LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_23 = (*(LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)L_22);
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_24 = ___1_context;
			Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25 = L_24->___localToWorldMatrix;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_26 = ___1_context;
			int32_t L_27 = L_26->___viewType;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_28 = ___1_context;
			int32_t L_29 = L_28->___projectionType;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_30 = ___1_context;
			int32_t L_31 = L_30->___cullingFlags;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_32 = ___1_context;
			uint64_t L_33 = L_32->___viewID;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_34 = ___1_context;
			uint32_t L_35 = L_34->___cullingLayerMask;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_36 = ___1_context;
			uint64_t L_37 = L_36->___sceneCullingMask;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_38 = ___1_context;
			uint8_t L_39 = L_38->___splitExclusionMask;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_40 = ___1_context;
			int32_t L_41 = L_40->___receiverPlaneOffset;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_42 = ___1_context;
			int32_t L_43 = L_42->___receiverPlaneCount;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_44 = ___1_context;
			intptr_t L_45 = L_44->___occlusionBuffer;
			BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 L_46;
			memset((&L_46), 0, sizeof(L_46));
			BatchCullingContext__ctor_mCBB93A14809CFC7FE19E3C68BC1426C5C29F1531((&L_46), L_20, L_21, L_23, L_25, L_27, L_29, L_31, L_33, L_35, L_37, L_39, L_41, L_43, L_45, NULL);
			BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F L_47 = V_3;
			intptr_t L_48 = ___3_userContext;
			JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_49;
			L_49 = OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_inline(L_18, L_19, L_46, L_47, L_48, NULL);
			L_16->___cullingJobsFence = L_49;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_50 = ___1_context;
			NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* L_51 = (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9*)(&(&V_3)->___customCullingResult);
			intptr_t L_52;
			L_52 = IL2CPP_NATIVEARRAY_GET_ITEM(intptr_t, (L_51)->___m_Buffer, 0);
			L_50->___customCullingResult = L_52;
			goto IL_00d4;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchRendererGroup_InvokeOnFinishedCulling_mE26998AD08461A7307421BB877EE91BC42A6EA17 (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_group, intptr_t ___1_customCullingResult, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_0 = ___0_group;
			OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* L_1 = L_0->___m_FinishedCulling;
			if (!L_1)
			{
				goto IL_0014_1;
			}
		}
		{
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_2 = ___0_group;
			OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* L_3 = L_2->___m_FinishedCulling;
			intptr_t L_4 = ___1_customCullingResult;
			OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_inline(L_3, L_4, NULL);
		}

IL_0014_1:
		{
			goto IL_001d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001d;
	}

IL_001d:
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
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_Multicast(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* currentDelegate = reinterpret_cast<OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2*>(delegatesToInvoke[i]);
		typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenInst(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext, method);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenStatic(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext, method);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenVirtual(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	return VirtualFuncInvoker3< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenInterface(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker3< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenGenericVirtual(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker3< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t >::Invoke(method, ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenGenericInterface(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker3< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t >::Invoke(method, ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPerformCulling__ctor_mFB91FB8D6D713AC39AFB921AF1C23A50EC80529B (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2 (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method) 
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_Multicast(OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* currentDelegate = reinterpret_cast<OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_customCullingResult, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_OpenInst(OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_customCullingResult, method);
}
void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_OpenStatic(OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_customCullingResult, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1 (OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_customCullingResult);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFinishedCulling__ctor_mA202B9589AE563B23247C3094F5E5D7DB7EC943C (OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807 (OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_customCullingResult, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalMeshRendererSettings__ctor_mDD8A54C2A55D8697A99BE4E58937881F994E76AC (InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* __this, uint32_t ___0_renderingLayerMask, uint8_t ___1_objectLayer, bool ___2_receiveShadows, bool ___3_staticShadowCaster, int32_t ___4_shadowCastingMode, int32_t ___5_lightProbeUsage, int32_t ___6_motionMode, bool ___7_smallMeshCulling, bool ___8_isPartOfStaticBatch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		int32_t L_0 = ___4_shadowCastingMode;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)L_0) < ((int32_t)4))? 1 : 0), NULL);
		int32_t L_1 = ___5_lightProbeUsage;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)L_1) < ((int32_t)8))? 1 : 0), NULL);
		int32_t L_2 = ___6_motionMode;
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)L_2) < ((int32_t)4))? 1 : 0), NULL);
		V_0 = 0;
		int32_t L_3 = V_0;
		bool L_4 = ___2_receiveShadows;
		V_0 = ((int32_t)(L_3|((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0)));
		int32_t L_5 = V_0;
		bool L_6 = ___3_staticShadowCaster;
		if (L_6)
		{
			G_B2_0 = L_5;
			goto IL_002f;
		}
		G_B1_0 = L_5;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		V_0 = ((int32_t)(G_B3_1|G_B3_0));
		int32_t L_7 = V_0;
		int32_t L_8 = ___4_shadowCastingMode;
		V_0 = ((int32_t)(L_7|((int32_t)((int32_t)L_8<<2))));
		int32_t L_9 = V_0;
		int32_t L_10 = ___5_lightProbeUsage;
		V_0 = ((int32_t)(L_9|((int32_t)((int32_t)L_10<<4))));
		int32_t L_11 = V_0;
		int32_t L_12 = ___6_motionMode;
		V_0 = ((int32_t)(L_11|((int32_t)((int32_t)L_12<<7))));
		int32_t L_13 = V_0;
		bool L_14 = ___7_smallMeshCulling;
		if (L_14)
		{
			G_B5_0 = L_13;
			goto IL_004f;
		}
		G_B4_0 = L_13;
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_004f:
	{
		G_B6_0 = ((int32_t)512);
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		V_0 = ((int32_t)(G_B6_1|G_B6_0));
		int32_t L_15 = V_0;
		bool L_16 = ___8_isPartOfStaticBatch;
		if (L_16)
		{
			G_B8_0 = L_15;
			goto IL_005e;
		}
		G_B7_0 = L_15;
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0063;
	}

IL_005e:
	{
		G_B9_0 = ((int32_t)1024);
		G_B9_1 = G_B8_0;
	}

IL_0063:
	{
		V_0 = ((int32_t)(G_B9_1|G_B9_0));
		int32_t L_17 = V_0;
		uint16_t L_18 = (il2cpp_codegen_conv<uint16_t,int32_t,int32_t,false,false>(L_17,NULL));
		__this->___m_Data = L_18;
		uint32_t L_19 = ___0_renderingLayerMask;
		__this->___m_RenderingLayerMask = L_19;
		uint8_t L_20 = ___1_objectLayer;
		__this->___m_ObjectLayer = L_20;
		return;
	}
}
IL2CPP_EXTERN_C  void InternalMeshRendererSettings__ctor_mDD8A54C2A55D8697A99BE4E58937881F994E76AC_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_renderingLayerMask, uint8_t ___1_objectLayer, bool ___2_receiveShadows, bool ___3_staticShadowCaster, int32_t ___4_shadowCastingMode, int32_t ___5_lightProbeUsage, int32_t ___6_motionMode, bool ___7_smallMeshCulling, bool ___8_isPartOfStaticBatch, const RuntimeMethod* method)
{
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF>(__this);
	InternalMeshRendererSettings__ctor_mDD8A54C2A55D8697A99BE4E58937881F994E76AC(_thisAdjusted, ___0_renderingLayerMask, ___1_objectLayer, ___2_receiveShadows, ___3_staticShadowCaster, ___4_shadowCastingMode, ___5_lightProbeUsage, ___6_motionMode, ___7_smallMeshCulling, ___8_isPartOfStaticBatch, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalMeshRendererSettings__cctor_m8838969D7F9BCD6ABDDB5C6740D67D2ED6CEEF26 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF L_0;
		memset((&L_0), 0, sizeof(L_0));
		InternalMeshRendererSettings__ctor_mDD8A54C2A55D8697A99BE4E58937881F994E76AC((&L_0), 1, (uint8_t)0, (bool)1, (bool)0, 1, 0, 1, (bool)1, (bool)0, NULL);
		((InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_il2cpp_TypeInfo_var))->___Default = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalMeshLodRendererSettings__cctor_m1B79AFE047133DF22E8487BCE1B61A2C6829D284 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73));
		(&V_0)->___forceLod = (-1);
		(&V_0)->___lodSelectionBias = (0.0f);
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 L_0 = V_0;
		((InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_StaticFields*)il2cpp_codegen_static_fields_for(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_il2cpp_TypeInfo_var))->___Default = L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_Multicast(GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* currentDelegate = reinterpret_cast<GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_lodGroupData, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_OpenInst(GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_lodGroupData, method);
}
void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_OpenStatic(GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_lodGroupData, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0 (GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke* ____0_lodGroupData_marshaled = NULL;
	GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke ____0_lodGroupData_marshaled_dereferenced = {};
	GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshal_pinvoke(*___0_lodGroupData, ____0_lodGroupData_marshaled_dereferenced);
	____0_lodGroupData_marshaled = &____0_lodGroupData_marshaled_dereferenced;

	il2cppPInvokeFunc(____0_lodGroupData_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataCallback__ctor_m8E3366365D02188CD1B09C74579ECDAC882843A4 (GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8 (GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_lodGroupData, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GPUDrivenRendererDataCallback_Invoke_m3B6D42F73FD65B7F49717E8B36A15CBD21F87BF0_Multicast(GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906* ___0_rendererData, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* currentDelegate = reinterpret_cast<GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_rendererData, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void GPUDrivenRendererDataCallback_Invoke_m3B6D42F73FD65B7F49717E8B36A15CBD21F87BF0_OpenInst(GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906* ___0_rendererData, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_rendererData, method);
}
void GPUDrivenRendererDataCallback_Invoke_m3B6D42F73FD65B7F49717E8B36A15CBD21F87BF0_OpenStatic(GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906* ___0_rendererData, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_rendererData, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF (GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906* ___0_rendererData, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_rendererData);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenRendererDataCallback__ctor_m53E13F6345B5C0EF66C15468172649A9F9EB3986 (GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&GPUDrivenRendererDataCallback_Invoke_m3B6D42F73FD65B7F49717E8B36A15CBD21F87BF0_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&GPUDrivenRendererDataCallback_Invoke_m3B6D42F73FD65B7F49717E8B36A15CBD21F87BF0_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&GPUDrivenRendererDataCallback_Invoke_m3B6D42F73FD65B7F49717E8B36A15CBD21F87BF0_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenRendererDataCallback_Invoke_m3B6D42F73FD65B7F49717E8B36A15CBD21F87BF0 (GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906* ___0_rendererData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_rendererData, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GPUDrivenFetchMeshesDataCallback_Invoke_mED54F20D9972FB20B3E4E773DCD197EE350EBDF8_Multicast(GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_meshIDs, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 ___1_meshDatas, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_subMeshOffsets, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A ___3_subMeshDatas, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* currentDelegate = reinterpret_cast<GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_meshIDs, ___1_meshDatas, ___2_subMeshOffsets, ___3_subMeshDatas, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void GPUDrivenFetchMeshesDataCallback_Invoke_mED54F20D9972FB20B3E4E773DCD197EE350EBDF8_OpenInst(GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_meshIDs, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 ___1_meshDatas, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_subMeshOffsets, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A ___3_subMeshDatas, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_meshIDs, ___1_meshDatas, ___2_subMeshOffsets, ___3_subMeshDatas, method);
}
void GPUDrivenFetchMeshesDataCallback_Invoke_mED54F20D9972FB20B3E4E773DCD197EE350EBDF8_OpenStatic(GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_meshIDs, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 ___1_meshDatas, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_subMeshOffsets, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A ___3_subMeshDatas, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_meshIDs, ___1_meshDatas, ___2_subMeshOffsets, ___3_subMeshDatas, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB (GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_meshIDs, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 ___1_meshDatas, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_subMeshOffsets, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A ___3_subMeshDatas, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_meshIDs, ___1_meshDatas, ___2_subMeshOffsets, ___3_subMeshDatas);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenFetchMeshesDataCallback__ctor_m87996A275C68DA0108C0A7082AE40F0113297C0D (GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&GPUDrivenFetchMeshesDataCallback_Invoke_mED54F20D9972FB20B3E4E773DCD197EE350EBDF8_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&GPUDrivenFetchMeshesDataCallback_Invoke_mED54F20D9972FB20B3E4E773DCD197EE350EBDF8_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenFetchMeshesDataCallback_Invoke_mED54F20D9972FB20B3E4E773DCD197EE350EBDF8 (GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_meshIDs, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 ___1_meshDatas, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_subMeshOffsets, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A ___3_subMeshDatas, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_meshIDs, ___1_meshDatas, ___2_subMeshOffsets, ___3_subMeshDatas, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenCallbacks_InvokeGPUDrivenLODGroupDataNativeCallback_m5A0CF41D9CAE5FA1F1F9ABC91244D9B0933EBCCB (intptr_t ___0_nativeDataPtr, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m869FBE9CEA8FB2E0C11A4EB728F8E08E1DDBC42B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m20606B63983B0110DE0BEB611BC4DA84D5CEA95F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* V_0 = NULL;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 V_7;
	memset((&V_7), 0, sizeof(V_7));
	GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		intptr_t L_0 = ___0_nativeDataPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1*)L_1;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_2 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3 = L_2->___lodGroup;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_4 = V_0;
		int32_t L_5 = L_4->___lodGroupCount;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541((void*)L_3, L_5, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		V_1 = L_6;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = L_7->___worldSpaceReferencePoint;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_9 = V_0;
		int32_t L_10 = L_9->___lodGroupCount;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_11;
		L_11 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C((void*)L_8, L_10, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_RuntimeMethod_var);
		V_2 = L_11;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_12 = V_0;
		float* L_13 = L_12->___worldSpaceSize;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_14 = V_0;
		int32_t L_15 = L_14->___lodGroupCount;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_16;
		L_16 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577((void*)L_13, L_15, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_RuntimeMethod_var);
		V_3 = L_16;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_17 = V_0;
		uint8_t* L_18 = L_17->___forceLODMask;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_19 = V_0;
		int32_t L_20 = L_19->___lodGroupCount;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_21;
		L_21 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA((void*)L_18, L_20, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var);
		V_4 = L_21;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_22 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_23 = L_22->___invalidLODGroups;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_24 = V_0;
		int32_t L_25 = L_24->___invalidLODGroupCount;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_26;
		L_26 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541((void*)L_23, L_25, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		V_5 = L_26;
		il2cpp_codegen_initobj((&V_6), sizeof(NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D));
		il2cpp_codegen_initobj((&V_7), sizeof(NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10));
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_27 = V_0;
		bool L_28 = L_27->___transformOnly;
		if (L_28)
		{
			goto IL_00a8;
		}
	}
	{
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_29 = V_0;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_30 = L_29->___groupSettings;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_31 = V_0;
		int32_t L_32 = L_31->___lodGroupCount;
		NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D L_33;
		L_33 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m20606B63983B0110DE0BEB611BC4DA84D5CEA95F((void*)L_30, L_32, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m20606B63983B0110DE0BEB611BC4DA84D5CEA95F_RuntimeMethod_var);
		V_6 = L_33;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_34 = V_0;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_35 = L_34->___lodBuffer;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_36 = V_0;
		int32_t L_37 = L_36->___lodGroupCount;
		NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 L_38;
		L_38 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m869FBE9CEA8FB2E0C11A4EB728F8E08E1DDBC42B((void*)L_35, L_37, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m869FBE9CEA8FB2E0C11A4EB728F8E08E1DDBC42B_RuntimeMethod_var);
		V_7 = L_38;
	}

IL_00a8:
	{
		il2cpp_codegen_initobj((&V_9), sizeof(GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7));
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_39 = V_1;
		(&V_9)->___lodGroup = L_39;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_40 = V_2;
		(&V_9)->___worldSpaceReferencePoint = L_40;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_41 = V_3;
		(&V_9)->___worldSpaceSize = L_41;
		NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D L_42 = V_6;
		(&V_9)->___groupSettings = L_42;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_43 = V_4;
		(&V_9)->___forceLODMask = L_43;
		NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 L_44 = V_7;
		(&V_9)->___lodBuffer = L_44;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_45 = V_5;
		(&V_9)->___invalidLODGroup = L_45;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_46 = V_0;
		bool L_47 = L_46->___transformOnly;
		(&V_9)->___transformOnly = L_47;
		GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7 L_48 = V_9;
		V_8 = L_48;
	}
	try
	{
		GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* L_49 = ___1_callback;
		GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_inline(L_49, (&V_8), NULL);
		goto IL_010e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0107;
		}
		throw e;
	}

CATCH_0107:
	{
		Exception_t* L_50 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_50, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_010e;
	}

IL_010e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenCallbacks_InvokeGPUDrivenRendererDataNativeCallback_m7AB8834508CD81C24D79C209E94BB549A49C1CB9 (intptr_t ___0_nativeDataPtr, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF003B8446358CBF2BE8724D7144F29285BCAF44E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m759E0FDB7153FBFD758242EE7033B7681867BC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* V_0 = NULL;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeArray_1_t7DA1A8B0792A5D6C71B6CD155C25CB188057FAB1 V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_9;
	memset((&V_9), 0, sizeof(V_9));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_10;
	memset((&V_10), 0, sizeof(V_10));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_11;
	memset((&V_11), 0, sizeof(V_11));
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_12;
	memset((&V_12), 0, sizeof(V_12));
	NativeArray_1_t6DF90EFCAE24D07B524BA756F17FA2FE72D11A46 V_13;
	memset((&V_13), 0, sizeof(V_13));
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_14;
	memset((&V_14), 0, sizeof(V_14));
	NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 V_15;
	memset((&V_15), 0, sizeof(V_15));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_16;
	memset((&V_16), 0, sizeof(V_16));
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_17;
	memset((&V_17), 0, sizeof(V_17));
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_18;
	memset((&V_18), 0, sizeof(V_18));
	GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906 V_19;
	memset((&V_19), 0, sizeof(V_19));
	GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906 V_20;
	memset((&V_20), 0, sizeof(V_20));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		intptr_t L_0 = ___0_nativeDataPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D*)L_1;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_2 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3 = L_2->___renderer;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_4 = V_0;
		int32_t L_5 = L_4->___rendererCount;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541((void*)L_3, L_5, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		V_1 = L_6;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_7 = V_0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8 = L_7->___localBounds;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_9 = V_0;
		int32_t L_10 = L_9->___rendererCount;
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_11;
		L_11 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805((void*)L_8, L_10, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_RuntimeMethod_var);
		V_2 = L_11;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_12 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_13 = L_12->___lightmapScaleOffset;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_14 = V_0;
		int32_t L_15 = L_14->___rendererCount;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_16;
		L_16 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2((void*)L_13, L_15, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_RuntimeMethod_var);
		V_3 = L_16;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_17 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_18 = L_17->___lodGroup;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_19 = V_0;
		int32_t L_20 = L_19->___rendererCount;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_21;
		L_21 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541((void*)L_18, L_20, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		V_4 = L_21;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_22 = V_0;
		uint8_t* L_23 = L_22->___lodMask;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_24 = V_0;
		int32_t L_25 = L_24->___rendererCount;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_26;
		L_26 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA((void*)L_23, L_25, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var);
		V_5 = L_26;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_27 = V_0;
		int16_t* L_28 = L_27->___lightmapIndex;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_29 = V_0;
		int32_t L_30 = L_29->___rendererCount;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_31;
		L_31 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8((void*)L_28, L_30, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var);
		V_6 = L_31;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_32 = V_0;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_33 = L_32->___rendererSettings;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_34 = V_0;
		int32_t L_35 = L_34->___rendererCount;
		NativeArray_1_t7DA1A8B0792A5D6C71B6CD155C25CB188057FAB1 L_36;
		L_36 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m759E0FDB7153FBFD758242EE7033B7681867BC8A((void*)L_33, L_35, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m759E0FDB7153FBFD758242EE7033B7681867BC8A_RuntimeMethod_var);
		V_7 = L_36;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_37 = V_0;
		uint32_t* L_38 = L_37->___rendererUserValues;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_39 = V_0;
		int32_t L_40 = L_39->___rendererCount;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_41;
		L_41 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A((void*)L_38, L_40, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_RuntimeMethod_var);
		V_8 = L_41;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_42 = V_0;
		int32_t* L_43 = L_42->___rendererPriority;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_44 = V_0;
		int32_t L_45 = L_44->___rendererCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_46;
		L_46 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_43, L_45, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_9 = L_46;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_47 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_48 = L_47->___localToWorldMatrix;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_49 = V_0;
		int32_t L_50 = L_49->___rendererCount;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_51;
		L_51 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F((void*)L_48, L_50, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_RuntimeMethod_var);
		V_10 = L_51;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_52 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_53 = L_52->___prevLocalToWorldMatrix;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_54 = V_0;
		int32_t L_55 = L_54->___rendererCount;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_56;
		L_56 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F((void*)L_53, L_55, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_RuntimeMethod_var);
		V_11 = L_56;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_57 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_58 = L_57->___mesh;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_59 = V_0;
		int32_t L_60 = L_59->___rendererCount;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_61;
		L_61 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541((void*)L_58, L_60, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		V_12 = L_61;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_62 = V_0;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_63 = L_62->___meshLodSettings;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_64 = V_0;
		int32_t L_65 = L_64->___rendererCount;
		NativeArray_1_t6DF90EFCAE24D07B524BA756F17FA2FE72D11A46 L_66;
		L_66 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF003B8446358CBF2BE8724D7144F29285BCAF44E((void*)L_63, L_65, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF003B8446358CBF2BE8724D7144F29285BCAF44E_RuntimeMethod_var);
		V_13 = L_66;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_67 = V_0;
		uint16_t* L_68 = L_67->___subMeshStartIndex;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_69 = V_0;
		int32_t L_70 = L_69->___rendererCount;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_71;
		L_71 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049((void*)L_68, L_70, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049_RuntimeMethod_var);
		V_14 = L_71;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_72 = V_0;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_73 = L_72->___subMaterialRange;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_74 = V_0;
		int32_t L_75 = L_74->___rendererCount;
		NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 L_76;
		L_76 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC((void*)L_73, L_75, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m7BA23DE8D084CC54FCBC238132BD26D78EE99CAC_RuntimeMethod_var);
		V_15 = L_76;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_77 = V_0;
		uint64_t* L_78 = L_77->___sceneCullingMask;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_79 = V_0;
		int32_t L_80 = L_79->___rendererCount;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_81;
		L_81 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC((void*)L_78, L_80, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_RuntimeMethod_var);
		V_16 = L_81;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_82 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_83 = L_82->___material;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_84 = V_0;
		int32_t L_85 = L_84->___materialCount;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_86;
		L_86 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541((void*)L_83, L_85, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		V_17 = L_86;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_87 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_88 = L_87->___invalidRenderer;
		GPUDrivenMeshRendererDataNative_tF7F2A25B82E96BD78FA6A5B3124231EC15B4245D* L_89 = V_0;
		int32_t L_90 = L_89->___invalidRendererCount;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_91;
		L_91 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541((void*)L_88, L_90, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		V_18 = L_91;
		il2cpp_codegen_initobj((&V_20), sizeof(GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906));
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_92 = V_1;
		(&V_20)->___renderer = L_92;
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_93 = V_2;
		(&V_20)->___localBounds = L_93;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_94 = V_3;
		(&V_20)->___lightmapScaleOffset = L_94;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_95 = V_4;
		(&V_20)->___lodGroup = L_95;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_96 = V_5;
		(&V_20)->___lodMask = L_96;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_97 = V_6;
		(&V_20)->___lightmapIndex = L_97;
		NativeArray_1_t7DA1A8B0792A5D6C71B6CD155C25CB188057FAB1 L_98 = V_7;
		(&V_20)->___rendererSettings = L_98;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_99 = V_8;
		(&V_20)->___rendererUserValues = L_99;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_100 = V_9;
		(&V_20)->___rendererPriority = L_100;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_101 = V_10;
		(&V_20)->___localToWorldMatrix = L_101;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_102 = V_11;
		(&V_20)->___prevLocalToWorldMatrix = L_102;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_103 = V_12;
		(&V_20)->___mesh = L_103;
		NativeArray_1_t6DF90EFCAE24D07B524BA756F17FA2FE72D11A46 L_104 = V_13;
		(&V_20)->___meshLodSettings = L_104;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_105 = V_14;
		(&V_20)->___subMeshStartIndex = L_105;
		NativeArray_1_t5A95C09E69493A633A9543326E74D2FE73F00395 L_106 = V_15;
		(&V_20)->___subMaterialRange = L_106;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_107 = V_16;
		(&V_20)->___sceneCullingMask = L_107;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_108 = V_17;
		(&V_20)->___material = L_108;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_109 = V_18;
		(&V_20)->___invalidRenderer = L_109;
		GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906 L_110 = V_20;
		V_19 = L_110;
	}
	try
	{
		GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* L_111 = ___1_callback;
		GPUDrivenRendererDataCallback_Invoke_m3B6D42F73FD65B7F49717E8B36A15CBD21F87BF0_inline(L_111, (&V_19), NULL);
		goto IL_0228;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0221;
		}
		throw e;
	}

CATCH_0221:
	{
		Exception_t* L_112 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_112, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0228;
	}

IL_0228:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenCallbacks_InvokeOnFetchMeshesData_m7FBC3ABED77A5184124F8769CC3637AF72841E74 (intptr_t ___0_nativeDataPtr, GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mCFE79109FB3E05DEE1856FF8AB8633F95A23B7CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m44F26E1A4DDE9B7C55F1CE197B39949684DEB9FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D* V_0 = NULL;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A V_4;
	memset((&V_4), 0, sizeof(V_4));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		intptr_t L_0 = ___0_nativeDataPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D*)L_1;
		GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D* L_2 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3 = L_2->___meshPtr;
		GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D* L_4 = V_0;
		int32_t L_5 = L_4->___meshCount;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541((void*)L_3, L_5, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m1C9C6EB3CA730F7910703C11AF98A41FDEFB3541_RuntimeMethod_var);
		V_1 = L_6;
		GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D* L_7 = V_0;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_8 = L_7->___meshDataPtr;
		GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D* L_9 = V_0;
		int32_t L_10 = L_9->___meshCount;
		NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 L_11;
		L_11 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mCFE79109FB3E05DEE1856FF8AB8633F95A23B7CB((void*)L_8, L_10, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_mCFE79109FB3E05DEE1856FF8AB8633F95A23B7CB_RuntimeMethod_var);
		V_2 = L_11;
		GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D* L_12 = V_0;
		int32_t* L_13 = L_12->___subMeshBufferOffsetPtr;
		GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D* L_14 = V_0;
		int32_t L_15 = L_14->___meshCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_16;
		L_16 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_13, L_15, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_3 = L_16;
		GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D* L_17 = V_0;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_18 = L_17->___subMeshDataPtr;
		GPUDrivenFetchMeshesDataNative_t427329752FE9CE6F72CA7DF402C96A740A6E635D* L_19 = V_0;
		int32_t L_20 = L_19->___subMeshDataCount;
		NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A L_21;
		L_21 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m44F26E1A4DDE9B7C55F1CE197B39949684DEB9FC((void*)L_18, L_20, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_m44F26E1A4DDE9B7C55F1CE197B39949684DEB9FC_RuntimeMethod_var);
		V_4 = L_21;
	}
	try
	{
		GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* L_22 = ___1_callback;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_23 = V_1;
		NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 L_24 = V_2;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_25 = V_3;
		NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A L_26 = V_4;
		GPUDrivenFetchMeshesDataCallback_Invoke_mED54F20D9972FB20B3E4E773DCD197EE350EBDF8_inline(L_22, L_23, L_24, L_25, L_26, NULL);
		goto IL_0068;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0061;
		}
		throw e;
	}

CATCH_0061:
	{
		Exception_t* L_27 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0068;
	}

IL_0068:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C void GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshal_pinvoke(const GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1& unmarshaled, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshaled_pinvoke& marshaled)
{
	marshaled.___lodGroup = unmarshaled.___lodGroup;
	marshaled.___worldSpaceReferencePoint = unmarshaled.___worldSpaceReferencePoint;
	marshaled.___worldSpaceSize = unmarshaled.___worldSpaceSize;
	marshaled.___groupSettings = unmarshaled.___groupSettings;
	marshaled.___forceLODMask = unmarshaled.___forceLODMask;
	marshaled.___lodBuffer = unmarshaled.___lodBuffer;
	marshaled.___lodGroupCount = unmarshaled.___lodGroupCount;
	marshaled.___invalidLODGroups = unmarshaled.___invalidLODGroups;
	marshaled.___invalidLODGroupCount = unmarshaled.___invalidLODGroupCount;
	marshaled.___transformOnly = static_cast<int32_t>(unmarshaled.___transformOnly);
}
IL2CPP_EXTERN_C void GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshal_pinvoke_back(const GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshaled_pinvoke& marshaled, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1& unmarshaled)
{
	unmarshaled.___lodGroup = marshaled.___lodGroup;
	unmarshaled.___worldSpaceReferencePoint = marshaled.___worldSpaceReferencePoint;
	unmarshaled.___worldSpaceSize = marshaled.___worldSpaceSize;
	unmarshaled.___groupSettings = marshaled.___groupSettings;
	unmarshaled.___forceLODMask = marshaled.___forceLODMask;
	unmarshaled.___lodBuffer = marshaled.___lodBuffer;
	int32_t unmarshaledlodGroupCount_temp_6 = 0;
	unmarshaledlodGroupCount_temp_6 = marshaled.___lodGroupCount;
	unmarshaled.___lodGroupCount = unmarshaledlodGroupCount_temp_6;
	unmarshaled.___invalidLODGroups = marshaled.___invalidLODGroups;
	int32_t unmarshaledinvalidLODGroupCount_temp_8 = 0;
	unmarshaledinvalidLODGroupCount_temp_8 = marshaled.___invalidLODGroupCount;
	unmarshaled.___invalidLODGroupCount = unmarshaledinvalidLODGroupCount_temp_8;
	bool unmarshaledtransformOnly_temp_9 = false;
	unmarshaledtransformOnly_temp_9 = static_cast<bool>(marshaled.___transformOnly);
	unmarshaled.___transformOnly = unmarshaledtransformOnly_temp_9;
}
IL2CPP_EXTERN_C void GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshal_pinvoke_cleanup(GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshal_com(const GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1& unmarshaled, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshaled_com& marshaled)
{
	marshaled.___lodGroup = unmarshaled.___lodGroup;
	marshaled.___worldSpaceReferencePoint = unmarshaled.___worldSpaceReferencePoint;
	marshaled.___worldSpaceSize = unmarshaled.___worldSpaceSize;
	marshaled.___groupSettings = unmarshaled.___groupSettings;
	marshaled.___forceLODMask = unmarshaled.___forceLODMask;
	marshaled.___lodBuffer = unmarshaled.___lodBuffer;
	marshaled.___lodGroupCount = unmarshaled.___lodGroupCount;
	marshaled.___invalidLODGroups = unmarshaled.___invalidLODGroups;
	marshaled.___invalidLODGroupCount = unmarshaled.___invalidLODGroupCount;
	marshaled.___transformOnly = static_cast<int32_t>(unmarshaled.___transformOnly);
}
IL2CPP_EXTERN_C void GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshal_com_back(const GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshaled_com& marshaled, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1& unmarshaled)
{
	unmarshaled.___lodGroup = marshaled.___lodGroup;
	unmarshaled.___worldSpaceReferencePoint = marshaled.___worldSpaceReferencePoint;
	unmarshaled.___worldSpaceSize = marshaled.___worldSpaceSize;
	unmarshaled.___groupSettings = marshaled.___groupSettings;
	unmarshaled.___forceLODMask = marshaled.___forceLODMask;
	unmarshaled.___lodBuffer = marshaled.___lodBuffer;
	int32_t unmarshaledlodGroupCount_temp_6 = 0;
	unmarshaledlodGroupCount_temp_6 = marshaled.___lodGroupCount;
	unmarshaled.___lodGroupCount = unmarshaledlodGroupCount_temp_6;
	unmarshaled.___invalidLODGroups = marshaled.___invalidLODGroups;
	int32_t unmarshaledinvalidLODGroupCount_temp_8 = 0;
	unmarshaledinvalidLODGroupCount_temp_8 = marshaled.___invalidLODGroupCount;
	unmarshaled.___invalidLODGroupCount = unmarshaledinvalidLODGroupCount_temp_8;
	bool unmarshaledtransformOnly_temp_9 = false;
	unmarshaledtransformOnly_temp_9 = static_cast<bool>(marshaled.___transformOnly);
	unmarshaled.___transformOnly = unmarshaledtransformOnly_temp_9;
}
IL2CPP_EXTERN_C void GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshal_com_cleanup(GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUDrivenSubMesh_Equals_m1F72396FE40AB3C48BA91CCAC548F6830F3B0DF2 (GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* __this, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___0_other, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___topology;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_1 = ___0_other;
		int32_t L_2 = L_1.___topology;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0039;
		}
	}
	{
		uint32_t L_3 = __this->___baseVertex;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_4 = ___0_other;
		uint32_t L_5 = L_4.___baseVertex;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		uint32_t L_6 = __this->___indexStart;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_7 = ___0_other;
		uint32_t L_8 = L_7.___indexStart;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0039;
		}
	}
	{
		uint32_t L_9 = __this->___indexCount;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B L_10 = ___0_other;
		uint32_t L_11 = L_10.___indexCount;
		return (bool)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GPUDrivenSubMesh_Equals_m1F72396FE40AB3C48BA91CCAC548F6830F3B0DF2_AdjustorThunk (RuntimeObject* __this, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B ___0_other, const RuntimeMethod* method)
{
	GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B>(__this);
	bool _returnValue;
	_returnValue = GPUDrivenSubMesh_Equals_m1F72396FE40AB3C48BA91CCAC548F6830F3B0DF2(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshal_pinvoke(const GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7& unmarshaled, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke& marshaled)
{
	marshaled.___lodGroup = unmarshaled.___lodGroup;
	marshaled.___worldSpaceReferencePoint = unmarshaled.___worldSpaceReferencePoint;
	marshaled.___worldSpaceSize = unmarshaled.___worldSpaceSize;
	marshaled.___groupSettings = unmarshaled.___groupSettings;
	marshaled.___forceLODMask = unmarshaled.___forceLODMask;
	marshaled.___lodBuffer = unmarshaled.___lodBuffer;
	marshaled.___invalidLODGroup = unmarshaled.___invalidLODGroup;
	marshaled.___transformOnly = static_cast<int32_t>(unmarshaled.___transformOnly);
}
IL2CPP_EXTERN_C void GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshal_pinvoke_back(const GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke& marshaled, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7& unmarshaled)
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 unmarshaledlodGroup_temp_0;
	memset((&unmarshaledlodGroup_temp_0), 0, sizeof(unmarshaledlodGroup_temp_0));
	unmarshaledlodGroup_temp_0 = marshaled.___lodGroup;
	unmarshaled.___lodGroup = unmarshaledlodGroup_temp_0;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD unmarshaledworldSpaceReferencePoint_temp_1;
	memset((&unmarshaledworldSpaceReferencePoint_temp_1), 0, sizeof(unmarshaledworldSpaceReferencePoint_temp_1));
	unmarshaledworldSpaceReferencePoint_temp_1 = marshaled.___worldSpaceReferencePoint;
	unmarshaled.___worldSpaceReferencePoint = unmarshaledworldSpaceReferencePoint_temp_1;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF unmarshaledworldSpaceSize_temp_2;
	memset((&unmarshaledworldSpaceSize_temp_2), 0, sizeof(unmarshaledworldSpaceSize_temp_2));
	unmarshaledworldSpaceSize_temp_2 = marshaled.___worldSpaceSize;
	unmarshaled.___worldSpaceSize = unmarshaledworldSpaceSize_temp_2;
	NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D unmarshaledgroupSettings_temp_3;
	memset((&unmarshaledgroupSettings_temp_3), 0, sizeof(unmarshaledgroupSettings_temp_3));
	unmarshaledgroupSettings_temp_3 = marshaled.___groupSettings;
	unmarshaled.___groupSettings = unmarshaledgroupSettings_temp_3;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF unmarshaledforceLODMask_temp_4;
	memset((&unmarshaledforceLODMask_temp_4), 0, sizeof(unmarshaledforceLODMask_temp_4));
	unmarshaledforceLODMask_temp_4 = marshaled.___forceLODMask;
	unmarshaled.___forceLODMask = unmarshaledforceLODMask_temp_4;
	NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 unmarshaledlodBuffer_temp_5;
	memset((&unmarshaledlodBuffer_temp_5), 0, sizeof(unmarshaledlodBuffer_temp_5));
	unmarshaledlodBuffer_temp_5 = marshaled.___lodBuffer;
	unmarshaled.___lodBuffer = unmarshaledlodBuffer_temp_5;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 unmarshaledinvalidLODGroup_temp_6;
	memset((&unmarshaledinvalidLODGroup_temp_6), 0, sizeof(unmarshaledinvalidLODGroup_temp_6));
	unmarshaledinvalidLODGroup_temp_6 = marshaled.___invalidLODGroup;
	unmarshaled.___invalidLODGroup = unmarshaledinvalidLODGroup_temp_6;
	bool unmarshaledtransformOnly_temp_7 = false;
	unmarshaledtransformOnly_temp_7 = static_cast<bool>(marshaled.___transformOnly);
	unmarshaled.___transformOnly = unmarshaledtransformOnly_temp_7;
}
IL2CPP_EXTERN_C void GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshal_pinvoke_cleanup(GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshal_com(const GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7& unmarshaled, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_com& marshaled)
{
	marshaled.___lodGroup = unmarshaled.___lodGroup;
	marshaled.___worldSpaceReferencePoint = unmarshaled.___worldSpaceReferencePoint;
	marshaled.___worldSpaceSize = unmarshaled.___worldSpaceSize;
	marshaled.___groupSettings = unmarshaled.___groupSettings;
	marshaled.___forceLODMask = unmarshaled.___forceLODMask;
	marshaled.___lodBuffer = unmarshaled.___lodBuffer;
	marshaled.___invalidLODGroup = unmarshaled.___invalidLODGroup;
	marshaled.___transformOnly = static_cast<int32_t>(unmarshaled.___transformOnly);
}
IL2CPP_EXTERN_C void GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshal_com_back(const GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_com& marshaled, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7& unmarshaled)
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 unmarshaledlodGroup_temp_0;
	memset((&unmarshaledlodGroup_temp_0), 0, sizeof(unmarshaledlodGroup_temp_0));
	unmarshaledlodGroup_temp_0 = marshaled.___lodGroup;
	unmarshaled.___lodGroup = unmarshaledlodGroup_temp_0;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD unmarshaledworldSpaceReferencePoint_temp_1;
	memset((&unmarshaledworldSpaceReferencePoint_temp_1), 0, sizeof(unmarshaledworldSpaceReferencePoint_temp_1));
	unmarshaledworldSpaceReferencePoint_temp_1 = marshaled.___worldSpaceReferencePoint;
	unmarshaled.___worldSpaceReferencePoint = unmarshaledworldSpaceReferencePoint_temp_1;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF unmarshaledworldSpaceSize_temp_2;
	memset((&unmarshaledworldSpaceSize_temp_2), 0, sizeof(unmarshaledworldSpaceSize_temp_2));
	unmarshaledworldSpaceSize_temp_2 = marshaled.___worldSpaceSize;
	unmarshaled.___worldSpaceSize = unmarshaledworldSpaceSize_temp_2;
	NativeArray_1_t7F56059967157A5D934C461E3AB91500DD41EF4D unmarshaledgroupSettings_temp_3;
	memset((&unmarshaledgroupSettings_temp_3), 0, sizeof(unmarshaledgroupSettings_temp_3));
	unmarshaledgroupSettings_temp_3 = marshaled.___groupSettings;
	unmarshaled.___groupSettings = unmarshaledgroupSettings_temp_3;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF unmarshaledforceLODMask_temp_4;
	memset((&unmarshaledforceLODMask_temp_4), 0, sizeof(unmarshaledforceLODMask_temp_4));
	unmarshaledforceLODMask_temp_4 = marshaled.___forceLODMask;
	unmarshaled.___forceLODMask = unmarshaledforceLODMask_temp_4;
	NativeArray_1_t06AFE6BE12CC9AAFFABDF572FFC21DC2089A1B10 unmarshaledlodBuffer_temp_5;
	memset((&unmarshaledlodBuffer_temp_5), 0, sizeof(unmarshaledlodBuffer_temp_5));
	unmarshaledlodBuffer_temp_5 = marshaled.___lodBuffer;
	unmarshaled.___lodBuffer = unmarshaledlodBuffer_temp_5;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 unmarshaledinvalidLODGroup_temp_6;
	memset((&unmarshaledinvalidLODGroup_temp_6), 0, sizeof(unmarshaledinvalidLODGroup_temp_6));
	unmarshaledinvalidLODGroup_temp_6 = marshaled.___invalidLODGroup;
	unmarshaled.___invalidLODGroup = unmarshaledinvalidLODGroup_temp_6;
	bool unmarshaledtransformOnly_temp_7 = false;
	unmarshaledtransformOnly_temp_7 = static_cast<bool>(marshaled.___transformOnly);
	unmarshaled.___transformOnly = unmarshaledtransformOnly_temp_7;
}
IL2CPP_EXTERN_C void GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshal_com_cleanup(GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke(const SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044& unmarshaled, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name = il2cpp_codegen_marshal_string(unmarshaled.___m_Name);
	marshaled.___m_Guid = il2cpp_codegen_marshal_string(unmarshaled.___m_Guid);
	marshaled.___m_Position = unmarshaled.___m_Position;
	marshaled.___m_Rotation = unmarshaled.___m_Rotation;
	marshaled.___m_Length = unmarshaled.___m_Length;
	marshaled.___m_ParentId = unmarshaled.___m_ParentId;
	marshaled.___m_Color = unmarshaled.___m_Color;
}
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_back(const SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_pinvoke& marshaled, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044& unmarshaled)
{
	unmarshaled.___m_Name = il2cpp_codegen_marshal_string_result(marshaled.___m_Name);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name));
	unmarshaled.___m_Guid = il2cpp_codegen_marshal_string_result(marshaled.___m_Guid);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Guid), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Guid));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledm_Position_temp_2;
	memset((&unmarshaledm_Position_temp_2), 0, sizeof(unmarshaledm_Position_temp_2));
	unmarshaledm_Position_temp_2 = marshaled.___m_Position;
	unmarshaled.___m_Position = unmarshaledm_Position_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledm_Rotation_temp_3;
	memset((&unmarshaledm_Rotation_temp_3), 0, sizeof(unmarshaledm_Rotation_temp_3));
	unmarshaledm_Rotation_temp_3 = marshaled.___m_Rotation;
	unmarshaled.___m_Rotation = unmarshaledm_Rotation_temp_3;
	float unmarshaledm_Length_temp_4 = 0.0f;
	unmarshaledm_Length_temp_4 = marshaled.___m_Length;
	unmarshaled.___m_Length = unmarshaledm_Length_temp_4;
	int32_t unmarshaledm_ParentId_temp_5 = 0;
	unmarshaledm_ParentId_temp_5 = marshaled.___m_ParentId;
	unmarshaled.___m_ParentId = unmarshaledm_ParentId_temp_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledm_Color_temp_6;
	memset((&unmarshaledm_Color_temp_6), 0, sizeof(unmarshaledm_Color_temp_6));
	unmarshaledm_Color_temp_6 = marshaled.___m_Color;
	unmarshaled.___m_Color = unmarshaledm_Color_temp_6;
}
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_cleanup(SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name);
	marshaled.___m_Name = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_Guid);
	marshaled.___m_Guid = NULL;
}
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_com(const SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044& unmarshaled, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_com& marshaled)
{
	marshaled.___m_Name = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name);
	marshaled.___m_Guid = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Guid);
	marshaled.___m_Position = unmarshaled.___m_Position;
	marshaled.___m_Rotation = unmarshaled.___m_Rotation;
	marshaled.___m_Length = unmarshaled.___m_Length;
	marshaled.___m_ParentId = unmarshaled.___m_ParentId;
	marshaled.___m_Color = unmarshaled.___m_Color;
}
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_com_back(const SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_com& marshaled, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044& unmarshaled)
{
	unmarshaled.___m_Name = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name));
	unmarshaled.___m_Guid = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Guid);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Guid), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Guid));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledm_Position_temp_2;
	memset((&unmarshaledm_Position_temp_2), 0, sizeof(unmarshaledm_Position_temp_2));
	unmarshaledm_Position_temp_2 = marshaled.___m_Position;
	unmarshaled.___m_Position = unmarshaledm_Position_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledm_Rotation_temp_3;
	memset((&unmarshaledm_Rotation_temp_3), 0, sizeof(unmarshaledm_Rotation_temp_3));
	unmarshaledm_Rotation_temp_3 = marshaled.___m_Rotation;
	unmarshaled.___m_Rotation = unmarshaledm_Rotation_temp_3;
	float unmarshaledm_Length_temp_4 = 0.0f;
	unmarshaledm_Length_temp_4 = marshaled.___m_Length;
	unmarshaled.___m_Length = unmarshaledm_Length_temp_4;
	int32_t unmarshaledm_ParentId_temp_5 = 0;
	unmarshaledm_ParentId_temp_5 = marshaled.___m_ParentId;
	unmarshaled.___m_ParentId = unmarshaledm_ParentId_temp_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledm_Color_temp_6;
	memset((&unmarshaledm_Color_temp_6), 0, sizeof(unmarshaledm_Color_temp_6));
	unmarshaledm_Color_temp_6 = marshaled.___m_Color;
	unmarshaled.___m_Color = unmarshaledm_Color_temp_6;
}
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_com_cleanup(SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name);
	marshaled.___m_Name = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Guid);
	marshaled.___m_Guid = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteAtlasManager_RequestAtlas_mE6D9398ADA0A5CB1A76407B59511779F2DAA2593 (String_t* ___0_tag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteAtlasManager_Register_m44D4E9341918EA32BEC92A77E851FF9A3BC21505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3EO_tA034329A8280E6B5294656F6423C2AC6C2067162_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Action_2_t39F9A40857E06142231322CA3632F32C6926572A* G_B3_2 = NULL;
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Action_2_t39F9A40857E06142231322CA3632F32C6926572A* G_B2_2 = NULL;
	{
		Action_2_t39F9A40857E06142231322CA3632F32C6926572A* L_0 = ((SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var))->___atlasRequested;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		Action_2_t39F9A40857E06142231322CA3632F32C6926572A* L_1 = ((SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var))->___atlasRequested;
		String_t* L_2 = ___0_tag;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_3 = ((U3CU3EO_tA034329A8280E6B5294656F6423C2AC6C2067162_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_tA034329A8280E6B5294656F6423C2AC6C2067162_il2cpp_TypeInfo_var))->___U3C0U3E__Register;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_4 = L_3;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			G_B3_2 = L_1;
			goto IL_0028;
		}
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		G_B2_2 = L_1;
	}
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_5 = (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)il2cpp_codegen_object_new(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3(L_5, NULL, (intptr_t)((void*)SpriteAtlasManager_Register_m44D4E9341918EA32BEC92A77E851FF9A3BC21505_RuntimeMethod_var), NULL);
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_6 = L_5;
		((U3CU3EO_tA034329A8280E6B5294656F6423C2AC6C2067162_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_tA034329A8280E6B5294656F6423C2AC6C2067162_il2cpp_TypeInfo_var))->___U3C0U3E__Register = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tA034329A8280E6B5294656F6423C2AC6C2067162_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_tA034329A8280E6B5294656F6423C2AC6C2067162_il2cpp_TypeInfo_var))->___U3C0U3E__Register), (void*)L_6);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0028:
	{
		Action_2_Invoke_mA430E6535AAD3C65C12911DAF89C62ACC8592846_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_PostRegisteredAtlas_mEBA789EAA074F9C6450ADF50722343BEF4509110 (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_spriteAtlas, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* G_B2_0 = NULL;
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* G_B1_0 = NULL;
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_0 = ((SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var))->___atlasRegistered;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_000a:
	{
		SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* L_2 = ___0_spriteAtlas;
		Action_1_Invoke_m9C0FDD39CBEA968B10871576A8DAFEEC5360339F_inline(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_Register_m44D4E9341918EA32BEC92A77E851FF9A3BC21505 (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_spriteAtlas, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* L_0 = ___0_spriteAtlas;
		intptr_t L_1;
		L_1 = MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_inline(L_0, MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_RuntimeMethod_var);
		SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212 (intptr_t ___0_spriteAtlas, const RuntimeMethod* method) 
{
	typedef void (*SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212_ftn) (intptr_t);
	static SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteAtlasManager::Register_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0_spriteAtlas);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BatchPackedCullingViewID__ctor_m7AB9AC0B1DBF4C3B0E7C943DB9EC4CDF34B81C8D_inline (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, uint64_t ___0_viewID, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_viewID;
		__this->___handle = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_inline (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method) 
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_inline (OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_customCullingResult, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_inline (GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_lodGroupData, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenRendererDataCallback_Invoke_m3B6D42F73FD65B7F49717E8B36A15CBD21F87BF0_inline (GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906* ___0_rendererData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenMeshRendererData_t09428F64D616CAB6D39DAA8BA4E0BA34C60D5906*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_rendererData, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenFetchMeshesDataCallback_Invoke_mED54F20D9972FB20B3E4E773DCD197EE350EBDF8_inline (GPUDrivenFetchMeshesDataCallback_t50DFB22CF906BAD71D0B6D065EE4F747599064CB* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_meshIDs, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83 ___1_meshDatas, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_subMeshOffsets, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A ___3_subMeshDatas, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, NativeArray_1_t01C47EA180F92B578CDA1C84550DB725622D4F83, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, NativeArray_1_t0B5665F0B416FC2E42C9E2074FB22D0F04E19B1A, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_meshIDs, ___1_meshDatas, ___2_subMeshOffsets, ___3_subMeshDatas, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mDD1D2A12580DDBEFF089E3D42B404DBB3E2EE3DA_gshared_inline (Action_2_tD10F5E6177A537BA8FBA8AE4D5CE75EA7503049A* __this, Il2CppSharedGenericObject* ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Il2CppSharedGenericObject* L_1 = ___0_obj;
		intptr_t L_2;
		L_2 = MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
