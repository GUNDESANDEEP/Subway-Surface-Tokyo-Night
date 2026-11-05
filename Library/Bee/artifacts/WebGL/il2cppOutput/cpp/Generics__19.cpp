#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C;
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4;
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80;
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D;
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralEBAA23633770B89931ABB5730B524910907A5C7B;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C  : public RuntimeObject
{
};
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4  : public RuntimeObject
{
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80  : public RuntimeObject
{
};
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D  : public RuntimeObject
{
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E  : public RuntimeObject
{
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
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
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
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
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VectorSizeHelper_tC26CEAD1B0D88F765A24D653A74900C4C7FEBD18 
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ____placeholder;
	uint8_t ____byte;
};
struct VectorSizeHelper_tF54ACCE947CB8A38047BEB642392A4E7345A157D 
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ____placeholder;
	uint8_t ____byte;
};
struct VectorSizeHelper_tAB183E4966E0B97A19A75D213EDAE51037A6BF3C 
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ____placeholder;
	uint8_t ____byte;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C_StaticFields
{
	Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C* ___defaultComparer;
};
struct Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4_StaticFields
{
	Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* ___defaultComparer;
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80_StaticFields
{
	Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* ___defaultComparer;
};
struct Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D_StaticFields
{
	Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* ___defaultComparer;
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E_StaticFields
{
	EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* ___defaultComparer;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields
{
	EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_8__ctor_m65C6D6AE9B99424EBAC2DB9E7E5D4FDB29B07748_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, intptr_t ___0_item1, int32_t ___1_item2, intptr_t ___2_item3, int32_t ___3_item4, intptr_t ___4_item5, int32_t ___5_item6, bool ___6_item7, ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___7_rest, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_mECED4E3BABD25B7D37C4225EDBF510F9C6BA39F7_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_m15EC2CE19E00130DC73C8F2A74CD07B0E94AEADB_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* EqualityComparer_1_get_Default_mB667824601441002EC96E1C190DC4BA2D348E1A4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_mFD09823F20BE6317118EDFABE8786EC15839A791_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_CompareTo_mF8DB4DAA4DE6C5A270A624695E16D4FE1ADF08A3_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IComparable_CompareTo_m82CD634644B2D034943E4F4462F5FCE5617BEB0D_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* Comparer_1_get_Default_mCFD1A9E7464C248AC312558B9D4F772D8BE3B07C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C* Comparer_1_get_Default_mFD754DF7CD22E9F6E0577EC41D26553139959EF2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m14F8BFF1B0043D0EC9944E532163828B510D4FE8_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCode_mD3CEE903C35BC93C01F9C27EF3BD96167653C777_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCodeCore_mA1BD6FA11FF8AB180DCC2F1DD669F5FEA61BC089_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_m3858509F915D1D409C26DDDB5C554B4791F4C5A8_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_mA055ED839C8603A04BC1AF1549B04EEB42CFAC03_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_1_ToString_m5747BAF62664DF8F228D5AE10377433797691E2E_gshared (ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_ToString_mB526711BD0646398E33625812DC4DA38177CD97A_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m1D56A955F70929A48AD600B6E4CCA809A719C99C_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mA8C1F2C9D0DDC6DAFD752FA5C8C5BDB2A96ED49C_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_8__ctor_m456CD331E19E16CE692E636499DF94A47061A7E9_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, Il2CppFullySharedGenericAny ___5_item6, Il2CppFullySharedGenericAny ___6_item7, Il2CppFullySharedGenericStruct ___7_rest, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_m6E9EB22F4F990C711D38C5929488A47E32204C5A_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_m81A7442A1DCE82EB1C3D46334D42A88B21F92274_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m8EC26DEDFFB4B136ADB2AF17FA7E9395B7E948A0_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IComparable_CompareTo_m876067CC3338F81C90DFD2DD51CF451CDB5DDDC1_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_CompareTo_m7BA5E274F0F612A33415A48FBBD329877F6CA1CC_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_mDA0F007332659CDA6ED3E2156DE347F91EB9EBB9_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCode_mFFB8FC3075672FDEC47412793447ACDA1DB90FC1_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mBBB3278470E2465A6B3F9EBB77231B7749837D84_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCodeCore_mD6AC6CAEA9F3BB1951814E084AC3E8C6C803577A_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_mEDB78B450BFD722ED3A333CBBF3CBE862F445EDE_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_ToString_mCBC8EEE6DF5982B972AEC0CAF758197B2CDE7E3E_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m5413C9CBCCC7063A9FEADA1E0B07CB2E522B708D_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mCEC9AD927A3B4A0BF8150A2FC47A62375090D949_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_CreateComparer_mB1324B20A8BC571BB3CBACC5E41F1A4D2F420632_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* EqualityComparer_1_CreateComparer_m059DA5E43AA85F81DEF3471D19BE64B208FEB408_gshared (const RuntimeMethod* method) ;

inline void ValueTuple_8__ctor_m65C6D6AE9B99424EBAC2DB9E7E5D4FDB29B07748 (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, intptr_t ___0_item1, int32_t ___1_item2, intptr_t ___2_item3, int32_t ___3_item4, intptr_t ___4_item5, int32_t ___5_item6, bool ___6_item7, ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___7_rest, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, intptr_t, int32_t, intptr_t, int32_t, intptr_t, int32_t, bool, ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75, const RuntimeMethod*))ValueTuple_8__ctor_m65C6D6AE9B99424EBAC2DB9E7E5D4FDB29B07748_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, ___3_item4, ___4_item5, ___5_item6, ___6_item7, ___7_rest, method);
}
inline bool ValueTuple_8_Equals_mECED4E3BABD25B7D37C4225EDBF510F9C6BA39F7 (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*))ValueTuple_8_Equals_mECED4E3BABD25B7D37C4225EDBF510F9C6BA39F7_gshared)(__this, ___0_other, method);
}
inline bool ValueTuple_8_Equals_m15EC2CE19E00130DC73C8F2A74CD07B0E94AEADB (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_Equals_m15EC2CE19E00130DC73C8F2A74CD07B0E94AEADB_gshared)(__this, ___0_obj, method);
}
inline EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_gshared_inline)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline)(method);
}
inline EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* EqualityComparer_1_get_Default_mB667824601441002EC96E1C190DC4BA2D348E1A4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB667824601441002EC96E1C190DC4BA2D348E1A4_gshared_inline)(method);
}
inline bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_mFD09823F20BE6317118EDFABE8786EC15839A791 (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_Collections_IStructuralEquatable_Equals_mFD09823F20BE6317118EDFABE8786EC15839A791_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline int32_t ValueTuple_8_CompareTo_mF8DB4DAA4DE6C5A270A624695E16D4FE1ADF08A3 (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*))ValueTuple_8_CompareTo_mF8DB4DAA4DE6C5A270A624695E16D4FE1ADF08A3_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_8_System_IComparable_CompareTo_m82CD634644B2D034943E4F4462F5FCE5617BEB0D (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_IComparable_CompareTo_m82CD634644B2D034943E4F4462F5FCE5617BEB0D_gshared)(__this, ___0_other, method);
}
inline Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A (const RuntimeMethod* method)
{
	return ((  Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* (*) (const RuntimeMethod*))Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A_gshared)(method);
}
inline Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* (*) (const RuntimeMethod*))Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051_gshared)(method);
}
inline Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* Comparer_1_get_Default_mCFD1A9E7464C248AC312558B9D4F772D8BE3B07C (const RuntimeMethod* method)
{
	return ((  Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* (*) (const RuntimeMethod*))Comparer_1_get_Default_mCFD1A9E7464C248AC312558B9D4F772D8BE3B07C_gshared)(method);
}
inline Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C* Comparer_1_get_Default_mFD754DF7CD22E9F6E0577EC41D26553139959EF2 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C* (*) (const RuntimeMethod*))Comparer_1_get_Default_mFD754DF7CD22E9F6E0577EC41D26553139959EF2_gshared)(method);
}
inline int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m14F8BFF1B0043D0EC9944E532163828B510D4FE8 (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m14F8BFF1B0043D0EC9944E532163828B510D4FE8_gshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m6E1DDA7CEC83A1504A5210BA9F61BF00E7ACFD49 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, int32_t ___4_h5, int32_t ___5_h6, int32_t ___6_h7, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, int32_t ___4_h5, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m62423C878D7CB18B74DAA96483AD008367FF6BF8 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, int32_t ___4_h5, int32_t ___5_h6, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mAFEBA974A670843200DC9DA7DEF8280FCD19E05E (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, int32_t ___4_h5, int32_t ___5_h6, int32_t ___6_h7, int32_t ___7_h8, const RuntimeMethod* method) ;
inline int32_t ValueTuple_8_GetHashCode_mD3CEE903C35BC93C01F9C27EF3BD96167653C777 (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, const RuntimeMethod*))ValueTuple_8_GetHashCode_mD3CEE903C35BC93C01F9C27EF3BD96167653C777_gshared)(__this, method);
}
inline int32_t ValueTuple_8_GetHashCodeCore_mA1BD6FA11FF8AB180DCC2F1DD669F5FEA61BC089 (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_GetHashCodeCore_mA1BD6FA11FF8AB180DCC2F1DD669F5FEA61BC089_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_m3858509F915D1D409C26DDDB5C554B4791F4C5A8 (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_m3858509F915D1D409C26DDDB5C554B4791F4C5A8_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_mA055ED839C8603A04BC1AF1549B04EEB42CFAC03 (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_IValueTupleInternal_GetHashCode_mA055ED839C8603A04BC1AF1549B04EEB42CFAC03_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C (intptr_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
inline String_t* ValueTuple_1_ToString_m5747BAF62664DF8F228D5AE10377433797691E2E (ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75*, const RuntimeMethod*))ValueTuple_1_ToString_m5747BAF62664DF8F228D5AE10377433797691E2E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
inline String_t* ValueTuple_8_ToString_mB526711BD0646398E33625812DC4DA38177CD97A (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, const RuntimeMethod*))ValueTuple_8_ToString_mB526711BD0646398E33625812DC4DA38177CD97A_gshared)(__this, method);
}
inline String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m1D56A955F70929A48AD600B6E4CCA809A719C99C (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, const RuntimeMethod*))ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m1D56A955F70929A48AD600B6E4CCA809A719C99C_gshared)(__this, method);
}
inline int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mA8C1F2C9D0DDC6DAFD752FA5C8C5BDB2A96ED49C (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*, const RuntimeMethod*))ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mA8C1F2C9D0DDC6DAFD752FA5C8C5BDB2A96ED49C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void ValueTuple_8__ctor_m456CD331E19E16CE692E636499DF94A47061A7E9 (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, Il2CppFullySharedGenericAny ___5_item6, Il2CppFullySharedGenericAny ___6_item7, Il2CppFullySharedGenericStruct ___7_rest, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, const RuntimeMethod*))ValueTuple_8__ctor_m456CD331E19E16CE692E636499DF94A47061A7E9_gshared)((ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*)__this, ___0_item1, ___1_item2, ___2_item3, ___3_item4, ___4_item5, ___5_item6, ___6_item7, ___7_rest, method);
}
inline bool ValueTuple_8_Equals_m6E9EB22F4F990C711D38C5929488A47E32204C5A (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_Equals_m6E9EB22F4F990C711D38C5929488A47E32204C5A_gshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_8_Equals_m81A7442A1DCE82EB1C3D46334D42A88B21F92274 (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0, const RuntimeMethod*))ValueTuple_8_Equals_m81A7442A1DCE82EB1C3D46334D42A88B21F92274_gshared)((ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*)__this, ___0_other, method);
}
inline bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m8EC26DEDFFB4B136ADB2AF17FA7E9395B7E948A0 (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m8EC26DEDFFB4B136ADB2AF17FA7E9395B7E948A0_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_8_System_IComparable_CompareTo_m876067CC3338F81C90DFD2DD51CF451CDB5DDDC1 (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_IComparable_CompareTo_m876067CC3338F81C90DFD2DD51CF451CDB5DDDC1_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_8_CompareTo_m7BA5E274F0F612A33415A48FBBD329877F6CA1CC (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0, const RuntimeMethod*))ValueTuple_8_CompareTo_m7BA5E274F0F612A33415A48FBBD329877F6CA1CC_gshared)((ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*)__this, ___0_other, method);
}
inline int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_mDA0F007332659CDA6ED3E2156DE347F91EB9EBB9 (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_mDA0F007332659CDA6ED3E2156DE347F91EB9EBB9_gshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_8_GetHashCode_mFFB8FC3075672FDEC47412793447ACDA1DB90FC1 (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, const RuntimeMethod*))ValueTuple_8_GetHashCode_mFFB8FC3075672FDEC47412793447ACDA1DB90FC1_gshared)(__this, method);
}
inline int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mBBB3278470E2465A6B3F9EBB77231B7749837D84 (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mBBB3278470E2465A6B3F9EBB77231B7749837D84_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_8_GetHashCodeCore_mD6AC6CAEA9F3BB1951814E084AC3E8C6C803577A (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_GetHashCodeCore_mD6AC6CAEA9F3BB1951814E084AC3E8C6C803577A_gshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_mEDB78B450BFD722ED3A333CBBF3CBE862F445EDE (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, RuntimeObject*, const RuntimeMethod*))ValueTuple_8_System_IValueTupleInternal_GetHashCode_mEDB78B450BFD722ED3A333CBBF3CBE862F445EDE_gshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_8_ToString_mCBC8EEE6DF5982B972AEC0CAF758197B2CDE7E3E (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, const RuntimeMethod*))ValueTuple_8_ToString_mCBC8EEE6DF5982B972AEC0CAF758197B2CDE7E3E_gshared)(__this, method);
}
inline String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m5413C9CBCCC7063A9FEADA1E0B07CB2E522B708D (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, const RuntimeMethod*))ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m5413C9CBCCC7063A9FEADA1E0B07CB2E522B708D_gshared)(__this, method);
}
inline int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mCEC9AD927A3B4A0BF8150A2FC47A62375090D949 (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, const RuntimeMethod*))ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mCEC9AD927A3B4A0BF8150A2FC47A62375090D949_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
inline int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline)(method);
}
inline void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, uint16_t, const RuntimeMethod*))Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427_gshared)(__this, ___0_value, method);
}
inline void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, void*, int32_t, const RuntimeMethod*))Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359_gshared)(__this, ___0_dataPointer, ___1_offset, method);
}
inline void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, void*, const RuntimeMethod*))Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared)(__this, ___0_dataPointer, method);
}
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, int32_t, const RuntimeMethod*))Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared)(__this, ___0_index, method);
}
inline bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_gshared)(__this, ___0_other, method);
}
inline bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, RuntimeObject*, const RuntimeMethod*))Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_gshared_inline)(__this, ___0_obj, method);
}
inline bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t, uint16_t, const RuntimeMethod*))Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
inline int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, const RuntimeMethod*))Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
inline String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, String_t*, RuntimeObject*, const RuntimeMethod*))Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_gshared)(__this, ___0_format, ___1_formatProvider, method);
}
inline String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, const RuntimeMethod*))Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521 (uint16_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_gshared_inline)(___0_left, ___1_right, method);
}
inline void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
inline int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83_gshared)(method);
}
inline uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline (const RuntimeMethod* method)
{
	return ((  uint16_t (*) (const RuntimeMethod*))Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_gshared_inline)(method);
}
inline uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline (const RuntimeMethod* method)
{
	return ((  uint16_t (*) (const RuntimeMethod*))Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_gshared_inline)(method);
}
inline EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_CreateComparer_mB1324B20A8BC571BB3CBACC5E41F1A4D2F420632 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mB1324B20A8BC571BB3CBACC5E41F1A4D2F420632_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared)(method);
}
inline EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* EqualityComparer_1_CreateComparer_m059DA5E43AA85F81DEF3471D19BE64B208FEB408 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m059DA5E43AA85F81DEF3471D19BE64B208FEB408_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_8__ctor_m65C6D6AE9B99424EBAC2DB9E7E5D4FDB29B07748_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, intptr_t ___0_item1, int32_t ___1_item2, intptr_t ___2_item3, int32_t ___3_item4, intptr_t ___4_item5, int32_t ___5_item6, bool ___6_item7, ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___7_rest, const RuntimeMethod* method) 
{
	{
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_0 = ___7_rest;
		goto IL_0019;
	}

IL_0019:
	{
		intptr_t L_1 = ___0_item1;
		__this->___Item1 = L_1;
		int32_t L_2 = ___1_item2;
		__this->___Item2 = L_2;
		intptr_t L_3 = ___2_item3;
		__this->___Item3 = L_3;
		int32_t L_4 = ___3_item4;
		__this->___Item4 = L_4;
		intptr_t L_5 = ___4_item5;
		__this->___Item5 = L_5;
		int32_t L_6 = ___5_item6;
		__this->___Item6 = L_6;
		bool L_7 = ___6_item7;
		__this->___Item7 = L_7;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_8 = ___7_rest;
		__this->___Rest = L_8;
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_8__ctor_m65C6D6AE9B99424EBAC2DB9E7E5D4FDB29B07748_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_item1, int32_t ___1_item2, intptr_t ___2_item3, int32_t ___3_item4, intptr_t ___4_item5, int32_t ___5_item6, bool ___6_item7, ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___7_rest, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	ValueTuple_8__ctor_m65C6D6AE9B99424EBAC2DB9E7E5D4FDB29B07748(_thisAdjusted, ___0_item1, ___1_item2, ___2_item3, ___3_item4, ___4_item5, ___5_item6, ___6_item7, ___7_rest, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_m15EC2CE19E00130DC73C8F2A74CD07B0E94AEADB_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ValueTuple_8_Equals_mECED4E3BABD25B7D37C4225EDBF510F9C6BA39F7(__this, ((*(ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_8_Equals_m15EC2CE19E00130DC73C8F2A74CD07B0E94AEADB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_8_Equals_m15EC2CE19E00130DC73C8F2A74CD07B0E94AEADB(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_mECED4E3BABD25B7D37C4225EDBF510F9C6BA39F7_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___0_other, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_0;
		L_0 = EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		intptr_t L_1 = __this->___Item1;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_2 = ___0_other;
		intptr_t L_3 = L_2.___Item1;
		bool L_4;
		L_4 = VirtualFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(8, L_0, L_1, L_3);
		if (!L_4)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		int32_t L_6 = __this->___Item2;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_7 = ___0_other;
		int32_t L_8 = L_7.___Item2;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_5, L_6, L_8);
		if (!L_9)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_10;
		L_10 = EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		intptr_t L_11 = __this->___Item3;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_12 = ___0_other;
		intptr_t L_13 = L_12.___Item3;
		bool L_14;
		L_14 = VirtualFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(8, L_10, L_11, L_13);
		if (!L_14)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_15;
		L_15 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		int32_t L_16 = __this->___Item4;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_17 = ___0_other;
		int32_t L_18 = L_17.___Item4;
		bool L_19;
		L_19 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_15, L_16, L_18);
		if (!L_19)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_20;
		L_20 = EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		intptr_t L_21 = __this->___Item5;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_22 = ___0_other;
		intptr_t L_23 = L_22.___Item5;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(8, L_20, L_21, L_23);
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_25;
		L_25 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		int32_t L_26 = __this->___Item6;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_27 = ___0_other;
		int32_t L_28 = L_27.___Item6;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_25, L_26, L_28);
		if (!L_29)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_30;
		L_30 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		bool L_31 = __this->___Item7;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_32 = ___0_other;
		bool L_33 = L_32.___Item7;
		bool L_34;
		L_34 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_30, L_31, L_33);
		if (!L_34)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* L_35;
		L_35 = EqualityComparer_1_get_Default_mB667824601441002EC96E1C190DC4BA2D348E1A4_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39));
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_36 = __this->___Rest;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_37 = ___0_other;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_38 = L_37.___Rest;
		bool L_39;
		L_39 = VirtualFuncInvoker2< bool, ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75, ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 >::Invoke(8, L_35, L_36, L_38);
		return L_39;
	}

IL_00c5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_8_Equals_mECED4E3BABD25B7D37C4225EDBF510F9C6BA39F7_AdjustorThunk (RuntimeObject* __this, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_8_Equals_mECED4E3BABD25B7D37C4225EDBF510F9C6BA39F7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_mFD09823F20BE6317118EDFABE8786EC15839A791_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		V_0 = ((*(ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*)UnBox(L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))));
		RuntimeObject* L_3 = ___1_comparer;
		intptr_t L_4 = __this->___Item1;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_5);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_7 = V_0;
		intptr_t L_8 = L_7.___Item1;
		intptr_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		int32_t L_13 = __this->___Item2;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_14);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_16 = V_0;
		int32_t L_17 = L_16.___Item2;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_18);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		if (!L_20)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_21 = ___1_comparer;
		intptr_t L_22 = __this->___Item3;
		intptr_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_23);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_25 = V_0;
		intptr_t L_26 = L_25.___Item3;
		intptr_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_27);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		if (!L_29)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_30 = ___1_comparer;
		int32_t L_31 = __this->___Item4;
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), &L_32);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_34 = V_0;
		int32_t L_35 = L_34.___Item4;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), &L_36);
		bool L_38;
		L_38 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_30, L_33, L_37);
		if (!L_38)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_39 = ___1_comparer;
		intptr_t L_40 = __this->___Item5;
		intptr_t L_41 = L_40;
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_41);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_43 = V_0;
		intptr_t L_44 = L_43.___Item5;
		intptr_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_45);
		bool L_47;
		L_47 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_39, L_42, L_46);
		if (!L_47)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_48 = ___1_comparer;
		int32_t L_49 = __this->___Item6;
		int32_t L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_50);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_52 = V_0;
		int32_t L_53 = L_52.___Item6;
		int32_t L_54 = L_53;
		RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_54);
		bool L_56;
		L_56 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_48, L_51, L_55);
		if (!L_56)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_57 = ___1_comparer;
		bool L_58 = __this->___Item7;
		bool L_59 = L_58;
		RuntimeObject* L_60 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_59);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_61 = V_0;
		bool L_62 = L_61.___Item7;
		bool L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_63);
		bool L_65;
		L_65 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_57, L_60, L_64);
		if (!L_65)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_66 = ___1_comparer;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_67 = __this->___Rest;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_68 = L_67;
		RuntimeObject* L_69 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_68);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_70 = V_0;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_71 = L_70.___Rest;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_72 = L_71;
		RuntimeObject* L_73 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_72);
		bool L_74;
		L_74 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_66, L_69, L_73);
		return L_74;
	}

IL_010c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_mFD09823F20BE6317118EDFABE8786EC15839A791_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_8_System_Collections_IStructuralEquatable_Equals_mFD09823F20BE6317118EDFABE8786EC15839A791(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IComparable_CompareTo_m82CD634644B2D034943E4F4462F5FCE5617BEB0D_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_2 = (*(ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*)__this);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_8_CompareTo_mF8DB4DAA4DE6C5A270A624695E16D4FE1ADF08A3(__this, ((*(ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*)UnBox(L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_IComparable_CompareTo_m82CD634644B2D034943E4F4462F5FCE5617BEB0D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_IComparable_CompareTo_m82CD634644B2D034943E4F4462F5FCE5617BEB0D(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_CompareTo_mF8DB4DAA4DE6C5A270A624695E16D4FE1ADF08A3_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* L_0;
		L_0 = Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 44));
		intptr_t L_1 = __this->___Item1;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_2 = ___0_other;
		intptr_t L_3 = L_2.___Item1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(6, L_0, L_1, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_7;
		L_7 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 48));
		int32_t L_8 = __this->___Item2;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_9 = ___0_other;
		int32_t L_10 = L_9.___Item2;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_7, L_8, L_10);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* L_14;
		L_14 = Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 52));
		intptr_t L_15 = __this->___Item3;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_16 = ___0_other;
		intptr_t L_17 = L_16.___Item3;
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(6, L_14, L_15, L_17);
		V_0 = L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0054:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_21;
		L_21 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		int32_t L_22 = __this->___Item4;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_23 = ___0_other;
		int32_t L_24 = L_23.___Item4;
		int32_t L_25;
		L_25 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_21, L_22, L_24);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_0070:
	{
		Comparer_1_t91B2382B439BF4E331D0FFB1C6F386A825BCD68D* L_28;
		L_28 = Comparer_1_get_Default_m18BA95A661D7F8B2A998F3AF7ED5DC746AE7008A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
		intptr_t L_29 = __this->___Item5;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_30 = ___0_other;
		intptr_t L_31 = L_30.___Item5;
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(6, L_28, L_29, L_31);
		V_0 = L_32;
		int32_t L_33 = V_0;
		if (!L_33)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_34 = V_0;
		return L_34;
	}

IL_008c:
	{
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_35;
		L_35 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 64));
		int32_t L_36 = __this->___Item6;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_37 = ___0_other;
		int32_t L_38 = L_37.___Item6;
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_35, L_36, L_38);
		V_0 = L_39;
		int32_t L_40 = V_0;
		if (!L_40)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_41 = V_0;
		return L_41;
	}

IL_00a8:
	{
		Comparer_1_t075B18A0921F760D040E0D8BFE6637CE0E1587E4* L_42;
		L_42 = Comparer_1_get_Default_mCFD1A9E7464C248AC312558B9D4F772D8BE3B07C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 68));
		bool L_43 = __this->___Item7;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_44 = ___0_other;
		bool L_45 = L_44.___Item7;
		int32_t L_46;
		L_46 = VirtualFuncInvoker2< int32_t, bool, bool >::Invoke(6, L_42, L_43, L_45);
		V_0 = L_46;
		int32_t L_47 = V_0;
		if (!L_47)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_48 = V_0;
		return L_48;
	}

IL_00c4:
	{
		Comparer_1_tDE744FF9BEB76BB8CC9B1B390EF8A47F374DAB6C* L_49;
		L_49 = Comparer_1_get_Default_mFD754DF7CD22E9F6E0577EC41D26553139959EF2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 72));
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_50 = __this->___Rest;
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_51 = ___0_other;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_52 = L_51.___Rest;
		int32_t L_53;
		L_53 = VirtualFuncInvoker2< int32_t, ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75, ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 >::Invoke(6, L_49, L_50, L_52);
		return L_53;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_CompareTo_mF8DB4DAA4DE6C5A270A624695E16D4FE1ADF08A3_AdjustorThunk (RuntimeObject* __this, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_CompareTo_mF8DB4DAA4DE6C5A270A624695E16D4FE1ADF08A3(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m14F8BFF1B0043D0EC9944E532163828B510D4FE8_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_2 = (*(ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*)__this);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_3);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_5);
		String_t* L_7;
		L_7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		RuntimeObject* L_9 = ___0_other;
		V_0 = ((*(ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85*)UnBox(L_9, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))));
		RuntimeObject* L_10 = ___1_comparer;
		intptr_t L_11 = __this->___Item1;
		intptr_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_12);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_14 = V_0;
		intptr_t L_15 = L_14.___Item1;
		intptr_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_10, L_13, L_17);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0060:
	{
		RuntimeObject* L_21 = ___1_comparer;
		int32_t L_22 = __this->___Item2;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_23);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_25 = V_0;
		int32_t L_26 = L_25.___Item2;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_27);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_21, L_24, L_28);
		V_1 = L_29;
		int32_t L_30 = V_1;
		if (!L_30)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_31 = V_1;
		return L_31;
	}

IL_0082:
	{
		RuntimeObject* L_32 = ___1_comparer;
		intptr_t L_33 = __this->___Item3;
		intptr_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_34);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_36 = V_0;
		intptr_t L_37 = L_36.___Item3;
		intptr_t L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_38);
		int32_t L_40;
		L_40 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_32, L_35, L_39);
		V_1 = L_40;
		int32_t L_41 = V_1;
		if (!L_41)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_42 = V_1;
		return L_42;
	}

IL_00a4:
	{
		RuntimeObject* L_43 = ___1_comparer;
		int32_t L_44 = __this->___Item4;
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), &L_45);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_47 = V_0;
		int32_t L_48 = L_47.___Item4;
		int32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), &L_49);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_43, L_46, L_50);
		V_1 = L_51;
		int32_t L_52 = V_1;
		if (!L_52)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_53 = V_1;
		return L_53;
	}

IL_00c6:
	{
		RuntimeObject* L_54 = ___1_comparer;
		intptr_t L_55 = __this->___Item5;
		intptr_t L_56 = L_55;
		RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_56);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_58 = V_0;
		intptr_t L_59 = L_58.___Item5;
		intptr_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_60);
		int32_t L_62;
		L_62 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_54, L_57, L_61);
		V_1 = L_62;
		int32_t L_63 = V_1;
		if (!L_63)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_64 = V_1;
		return L_64;
	}

IL_00e8:
	{
		RuntimeObject* L_65 = ___1_comparer;
		int32_t L_66 = __this->___Item6;
		int32_t L_67 = L_66;
		RuntimeObject* L_68 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_67);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_69 = V_0;
		int32_t L_70 = L_69.___Item6;
		int32_t L_71 = L_70;
		RuntimeObject* L_72 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_71);
		int32_t L_73;
		L_73 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_65, L_68, L_72);
		V_1 = L_73;
		int32_t L_74 = V_1;
		if (!L_74)
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_75 = V_1;
		return L_75;
	}

IL_010a:
	{
		RuntimeObject* L_76 = ___1_comparer;
		bool L_77 = __this->___Item7;
		bool L_78 = L_77;
		RuntimeObject* L_79 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_78);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_80 = V_0;
		bool L_81 = L_80.___Item7;
		bool L_82 = L_81;
		RuntimeObject* L_83 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_82);
		int32_t L_84;
		L_84 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_76, L_79, L_83);
		V_1 = L_84;
		int32_t L_85 = V_1;
		if (!L_85)
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_86 = V_1;
		return L_86;
	}

IL_012c:
	{
		RuntimeObject* L_87 = ___1_comparer;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_88 = __this->___Rest;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_89);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_91 = V_0;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_92 = L_91.___Rest;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_93 = L_92;
		RuntimeObject* L_94 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_93);
		int32_t L_95;
		L_95 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_87, L_90, L_94);
		return L_95;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m14F8BFF1B0043D0EC9944E532163828B510D4FE8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_m14F8BFF1B0043D0EC9944E532163828B510D4FE8(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCode_mD3CEE903C35BC93C01F9C27EF3BD96167653C777_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	bool V_9 = false;
	intptr_t* G_B4_0 = NULL;
	int32_t G_B5_0 = 0;
	int32_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	intptr_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	intptr_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B21_2 = 0;
	int32_t G_B21_3 = 0;
	int32_t G_B21_4 = 0;
	int32_t* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	int32_t G_B24_2 = 0;
	int32_t G_B24_3 = 0;
	int32_t G_B24_4 = 0;
	int32_t G_B24_5 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	int32_t G_B25_2 = 0;
	int32_t G_B25_3 = 0;
	int32_t G_B25_4 = 0;
	int32_t G_B25_5 = 0;
	bool* G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	int32_t G_B28_2 = 0;
	int32_t G_B28_3 = 0;
	int32_t G_B28_4 = 0;
	int32_t G_B28_5 = 0;
	int32_t G_B28_6 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B29_1 = 0;
	int32_t G_B29_2 = 0;
	int32_t G_B29_3 = 0;
	int32_t G_B29_4 = 0;
	int32_t G_B29_5 = 0;
	int32_t G_B29_6 = 0;
	bool* G_B37_0 = NULL;
	int32_t G_B38_0 = 0;
	int32_t* G_B42_0 = NULL;
	int32_t G_B43_0 = 0;
	bool* G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B47_1 = 0;
	intptr_t* G_B51_0 = NULL;
	int32_t G_B52_0 = 0;
	int32_t* G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B56_1 = 0;
	bool* G_B59_0 = NULL;
	int32_t G_B59_1 = 0;
	int32_t G_B59_2 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B60_1 = 0;
	int32_t G_B60_2 = 0;
	int32_t* G_B64_0 = NULL;
	int32_t G_B65_0 = 0;
	intptr_t* G_B68_0 = NULL;
	int32_t G_B68_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B69_1 = 0;
	int32_t* G_B72_0 = NULL;
	int32_t G_B72_1 = 0;
	int32_t G_B72_2 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B73_2 = 0;
	bool* G_B76_0 = NULL;
	int32_t G_B76_1 = 0;
	int32_t G_B76_2 = 0;
	int32_t G_B76_3 = 0;
	int32_t G_B77_0 = 0;
	int32_t G_B77_1 = 0;
	int32_t G_B77_2 = 0;
	int32_t G_B77_3 = 0;
	intptr_t* G_B81_0 = NULL;
	int32_t G_B82_0 = 0;
	int32_t* G_B85_0 = NULL;
	int32_t G_B85_1 = 0;
	int32_t G_B86_0 = 0;
	int32_t G_B86_1 = 0;
	intptr_t* G_B89_0 = NULL;
	int32_t G_B89_1 = 0;
	int32_t G_B89_2 = 0;
	int32_t G_B90_0 = 0;
	int32_t G_B90_1 = 0;
	int32_t G_B90_2 = 0;
	int32_t* G_B93_0 = NULL;
	int32_t G_B93_1 = 0;
	int32_t G_B93_2 = 0;
	int32_t G_B93_3 = 0;
	int32_t G_B94_0 = 0;
	int32_t G_B94_1 = 0;
	int32_t G_B94_2 = 0;
	int32_t G_B94_3 = 0;
	bool* G_B97_0 = NULL;
	int32_t G_B97_1 = 0;
	int32_t G_B97_2 = 0;
	int32_t G_B97_3 = 0;
	int32_t G_B97_4 = 0;
	int32_t G_B98_0 = 0;
	int32_t G_B98_1 = 0;
	int32_t G_B98_2 = 0;
	int32_t G_B98_3 = 0;
	int32_t G_B98_4 = 0;
	int32_t* G_B102_0 = NULL;
	int32_t G_B103_0 = 0;
	intptr_t* G_B106_0 = NULL;
	int32_t G_B106_1 = 0;
	int32_t G_B107_0 = 0;
	int32_t G_B107_1 = 0;
	int32_t* G_B110_0 = NULL;
	int32_t G_B110_1 = 0;
	int32_t G_B110_2 = 0;
	int32_t G_B111_0 = 0;
	int32_t G_B111_1 = 0;
	int32_t G_B111_2 = 0;
	intptr_t* G_B114_0 = NULL;
	int32_t G_B114_1 = 0;
	int32_t G_B114_2 = 0;
	int32_t G_B114_3 = 0;
	int32_t G_B115_0 = 0;
	int32_t G_B115_1 = 0;
	int32_t G_B115_2 = 0;
	int32_t G_B115_3 = 0;
	int32_t* G_B118_0 = NULL;
	int32_t G_B118_1 = 0;
	int32_t G_B118_2 = 0;
	int32_t G_B118_3 = 0;
	int32_t G_B118_4 = 0;
	int32_t G_B119_0 = 0;
	int32_t G_B119_1 = 0;
	int32_t G_B119_2 = 0;
	int32_t G_B119_3 = 0;
	int32_t G_B119_4 = 0;
	bool* G_B122_0 = NULL;
	int32_t G_B122_1 = 0;
	int32_t G_B122_2 = 0;
	int32_t G_B122_3 = 0;
	int32_t G_B122_4 = 0;
	int32_t G_B122_5 = 0;
	int32_t G_B123_0 = 0;
	int32_t G_B123_1 = 0;
	int32_t G_B123_2 = 0;
	int32_t G_B123_3 = 0;
	int32_t G_B123_4 = 0;
	int32_t G_B123_5 = 0;
	intptr_t* G_B127_0 = NULL;
	int32_t G_B128_0 = 0;
	int32_t* G_B131_0 = NULL;
	int32_t G_B131_1 = 0;
	int32_t G_B132_0 = 0;
	int32_t G_B132_1 = 0;
	intptr_t* G_B135_0 = NULL;
	int32_t G_B135_1 = 0;
	int32_t G_B135_2 = 0;
	int32_t G_B136_0 = 0;
	int32_t G_B136_1 = 0;
	int32_t G_B136_2 = 0;
	int32_t* G_B139_0 = NULL;
	int32_t G_B139_1 = 0;
	int32_t G_B139_2 = 0;
	int32_t G_B139_3 = 0;
	int32_t G_B140_0 = 0;
	int32_t G_B140_1 = 0;
	int32_t G_B140_2 = 0;
	int32_t G_B140_3 = 0;
	intptr_t* G_B143_0 = NULL;
	int32_t G_B143_1 = 0;
	int32_t G_B143_2 = 0;
	int32_t G_B143_3 = 0;
	int32_t G_B143_4 = 0;
	int32_t G_B144_0 = 0;
	int32_t G_B144_1 = 0;
	int32_t G_B144_2 = 0;
	int32_t G_B144_3 = 0;
	int32_t G_B144_4 = 0;
	int32_t* G_B147_0 = NULL;
	int32_t G_B147_1 = 0;
	int32_t G_B147_2 = 0;
	int32_t G_B147_3 = 0;
	int32_t G_B147_4 = 0;
	int32_t G_B147_5 = 0;
	int32_t G_B148_0 = 0;
	int32_t G_B148_1 = 0;
	int32_t G_B148_2 = 0;
	int32_t G_B148_3 = 0;
	int32_t G_B148_4 = 0;
	int32_t G_B148_5 = 0;
	bool* G_B151_0 = NULL;
	int32_t G_B151_1 = 0;
	int32_t G_B151_2 = 0;
	int32_t G_B151_3 = 0;
	int32_t G_B151_4 = 0;
	int32_t G_B151_5 = 0;
	int32_t G_B151_6 = 0;
	int32_t G_B152_0 = 0;
	int32_t G_B152_1 = 0;
	int32_t G_B152_2 = 0;
	int32_t G_B152_3 = 0;
	int32_t G_B152_4 = 0;
	int32_t G_B152_5 = 0;
	int32_t G_B152_6 = 0;
	{
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_0 = __this->___Rest;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_01a2;
		}
	}
	{
		intptr_t* L_4 = (intptr_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_3), sizeof(intptr_t));
		G_B4_0 = L_4;
		goto IL_0041;
	}

IL_0041:
	{
		int32_t L_6;
		L_6 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B4_0, NULL);
		G_B5_0 = L_6;
	}

IL_004c:
	{
		int32_t* L_7 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		G_B8_0 = L_7;
		G_B8_1 = G_B5_0;
		goto IL_0079;
	}

IL_0079:
	{
		int32_t L_9;
		L_9 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B8_0, NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_1;
	}

IL_0084:
	{
		intptr_t* L_10 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_5), sizeof(intptr_t));
		G_B12_0 = L_10;
		G_B12_1 = G_B9_0;
		G_B12_2 = G_B9_1;
		goto IL_00b1;
	}

IL_00b1:
	{
		int32_t L_12;
		L_12 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B12_0, NULL);
		G_B13_0 = L_12;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
	}

IL_00bc:
	{
		int32_t* L_13 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		G_B16_0 = L_13;
		G_B16_1 = G_B13_0;
		G_B16_2 = G_B13_1;
		G_B16_3 = G_B13_2;
		goto IL_00e9;
	}

IL_00e9:
	{
		int32_t L_15;
		L_15 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B16_0, NULL);
		G_B17_0 = L_15;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_00f4:
	{
		intptr_t* L_16 = (intptr_t*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_7), sizeof(intptr_t));
		G_B20_0 = L_16;
		G_B20_1 = G_B17_0;
		G_B20_2 = G_B17_1;
		G_B20_3 = G_B17_2;
		G_B20_4 = G_B17_3;
		goto IL_0121;
	}

IL_0121:
	{
		int32_t L_18;
		L_18 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B20_0, NULL);
		G_B21_0 = L_18;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
		G_B21_4 = G_B20_4;
	}

IL_012c:
	{
		int32_t* L_19 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_8), sizeof(int32_t));
		G_B24_0 = L_19;
		G_B24_1 = G_B21_0;
		G_B24_2 = G_B21_1;
		G_B24_3 = G_B21_2;
		G_B24_4 = G_B21_3;
		G_B24_5 = G_B21_4;
		goto IL_0159;
	}

IL_0159:
	{
		int32_t L_21;
		L_21 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B24_0, NULL);
		G_B25_0 = L_21;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
		G_B25_3 = G_B24_3;
		G_B25_4 = G_B24_4;
		G_B25_5 = G_B24_5;
	}

IL_0164:
	{
		bool* L_22 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_9), sizeof(bool));
		G_B28_0 = L_22;
		G_B28_1 = G_B25_0;
		G_B28_2 = G_B25_1;
		G_B28_3 = G_B25_2;
		G_B28_4 = G_B25_3;
		G_B28_5 = G_B25_4;
		G_B28_6 = G_B25_5;
		goto IL_0191;
	}

IL_0191:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_24;
		L_24 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B28_0, NULL);
		G_B29_0 = L_24;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		G_B29_3 = G_B28_3;
		G_B29_4 = G_B28_4;
		G_B29_5 = G_B28_5;
		G_B29_6 = G_B28_6;
	}

IL_019c:
	{
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_m6E1DDA7CEC83A1504A5210BA9F61BF00E7ACFD49(G_B29_6, G_B29_5, G_B29_4, G_B29_3, G_B29_2, G_B29_1, G_B29_0, NULL);
		return L_25;
	}

IL_01a2:
	{
		RuntimeObject* L_26 = V_0;
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var, (RuntimeObject*)L_26);
		V_1 = L_27;
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) < ((int32_t)8)))
		{
			goto IL_01b4;
		}
	}
	{
		RuntimeObject* L_29 = V_0;
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_29);
		return L_30;
	}

IL_01b4:
	{
		int32_t L_31 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(8, L_31));
		int32_t L_32 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract(L_32, 1)))
		{
			case 0:
			{
				goto IL_01e5;
			}
			case 1:
			{
				goto IL_0229;
			}
			case 2:
			{
				goto IL_02a5;
			}
			case 3:
			{
				goto IL_0359;
			}
			case 4:
			{
				goto IL_0445;
			}
			case 5:
			{
				goto IL_0569;
			}
			case 6:
			{
				goto IL_06c5;
			}
			case 7:
			{
				goto IL_06c5;
			}
		}
	}
	{
		goto IL_0856;
	}

IL_01e5:
	{
		bool* L_33 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_9), sizeof(bool));
		G_B37_0 = L_33;
		goto IL_0212;
	}

IL_0212:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_35;
		L_35 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B37_0, NULL);
		G_B38_0 = L_35;
	}

IL_021d:
	{
		RuntimeObject* L_36 = V_0;
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_36);
		int32_t L_38;
		L_38 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(G_B38_0, L_37, NULL);
		return L_38;
	}

IL_0229:
	{
		int32_t* L_39 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_8), sizeof(int32_t));
		G_B42_0 = L_39;
		goto IL_0256;
	}

IL_0256:
	{
		int32_t L_41;
		L_41 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B42_0, NULL);
		G_B43_0 = L_41;
	}

IL_0261:
	{
		bool* L_42 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_9), sizeof(bool));
		G_B46_0 = L_42;
		G_B46_1 = G_B43_0;
		goto IL_028e;
	}

IL_028e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_44;
		L_44 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B46_0, NULL);
		G_B47_0 = L_44;
		G_B47_1 = G_B46_1;
	}

IL_0299:
	{
		RuntimeObject* L_45 = V_0;
		int32_t L_46;
		L_46 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_45);
		int32_t L_47;
		L_47 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(G_B47_1, G_B47_0, L_46, NULL);
		return L_47;
	}

IL_02a5:
	{
		intptr_t* L_48 = (intptr_t*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_7), sizeof(intptr_t));
		G_B51_0 = L_48;
		goto IL_02d2;
	}

IL_02d2:
	{
		int32_t L_50;
		L_50 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B51_0, NULL);
		G_B52_0 = L_50;
	}

IL_02dd:
	{
		int32_t* L_51 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_8), sizeof(int32_t));
		G_B55_0 = L_51;
		G_B55_1 = G_B52_0;
		goto IL_030a;
	}

IL_030a:
	{
		int32_t L_53;
		L_53 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B55_0, NULL);
		G_B56_0 = L_53;
		G_B56_1 = G_B55_1;
	}

IL_0315:
	{
		bool* L_54 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_9), sizeof(bool));
		G_B59_0 = L_54;
		G_B59_1 = G_B56_0;
		G_B59_2 = G_B56_1;
		goto IL_0342;
	}

IL_0342:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_56;
		L_56 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B59_0, NULL);
		G_B60_0 = L_56;
		G_B60_1 = G_B59_1;
		G_B60_2 = G_B59_2;
	}

IL_034d:
	{
		RuntimeObject* L_57 = V_0;
		int32_t L_58;
		L_58 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_57);
		int32_t L_59;
		L_59 = ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813(G_B60_2, G_B60_1, G_B60_0, L_58, NULL);
		return L_59;
	}

IL_0359:
	{
		int32_t* L_60 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		G_B64_0 = L_60;
		goto IL_0386;
	}

IL_0386:
	{
		int32_t L_62;
		L_62 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B64_0, NULL);
		G_B65_0 = L_62;
	}

IL_0391:
	{
		intptr_t* L_63 = (intptr_t*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_7), sizeof(intptr_t));
		G_B68_0 = L_63;
		G_B68_1 = G_B65_0;
		goto IL_03be;
	}

IL_03be:
	{
		int32_t L_65;
		L_65 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B68_0, NULL);
		G_B69_0 = L_65;
		G_B69_1 = G_B68_1;
	}

IL_03c9:
	{
		int32_t* L_66 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_8), sizeof(int32_t));
		G_B72_0 = L_66;
		G_B72_1 = G_B69_0;
		G_B72_2 = G_B69_1;
		goto IL_03f6;
	}

IL_03f6:
	{
		int32_t L_68;
		L_68 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B72_0, NULL);
		G_B73_0 = L_68;
		G_B73_1 = G_B72_1;
		G_B73_2 = G_B72_2;
	}

IL_0401:
	{
		bool* L_69 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_9), sizeof(bool));
		G_B76_0 = L_69;
		G_B76_1 = G_B73_0;
		G_B76_2 = G_B73_1;
		G_B76_3 = G_B73_2;
		goto IL_042e;
	}

IL_042e:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_71;
		L_71 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B76_0, NULL);
		G_B77_0 = L_71;
		G_B77_1 = G_B76_1;
		G_B77_2 = G_B76_2;
		G_B77_3 = G_B76_3;
	}

IL_0439:
	{
		RuntimeObject* L_72 = V_0;
		int32_t L_73;
		L_73 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_72);
		int32_t L_74;
		L_74 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(G_B77_3, G_B77_2, G_B77_1, G_B77_0, L_73, NULL);
		return L_74;
	}

IL_0445:
	{
		intptr_t* L_75 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_5), sizeof(intptr_t));
		G_B81_0 = L_75;
		goto IL_0472;
	}

IL_0472:
	{
		int32_t L_77;
		L_77 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B81_0, NULL);
		G_B82_0 = L_77;
	}

IL_047d:
	{
		int32_t* L_78 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		G_B85_0 = L_78;
		G_B85_1 = G_B82_0;
		goto IL_04aa;
	}

IL_04aa:
	{
		int32_t L_80;
		L_80 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B85_0, NULL);
		G_B86_0 = L_80;
		G_B86_1 = G_B85_1;
	}

IL_04b5:
	{
		intptr_t* L_81 = (intptr_t*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_7), sizeof(intptr_t));
		G_B89_0 = L_81;
		G_B89_1 = G_B86_0;
		G_B89_2 = G_B86_1;
		goto IL_04e2;
	}

IL_04e2:
	{
		int32_t L_83;
		L_83 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B89_0, NULL);
		G_B90_0 = L_83;
		G_B90_1 = G_B89_1;
		G_B90_2 = G_B89_2;
	}

IL_04ed:
	{
		int32_t* L_84 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_8), sizeof(int32_t));
		G_B93_0 = L_84;
		G_B93_1 = G_B90_0;
		G_B93_2 = G_B90_1;
		G_B93_3 = G_B90_2;
		goto IL_051a;
	}

IL_051a:
	{
		int32_t L_86;
		L_86 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B93_0, NULL);
		G_B94_0 = L_86;
		G_B94_1 = G_B93_1;
		G_B94_2 = G_B93_2;
		G_B94_3 = G_B93_3;
	}

IL_0525:
	{
		bool* L_87 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_9), sizeof(bool));
		G_B97_0 = L_87;
		G_B97_1 = G_B94_0;
		G_B97_2 = G_B94_1;
		G_B97_3 = G_B94_2;
		G_B97_4 = G_B94_3;
		goto IL_0552;
	}

IL_0552:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_89;
		L_89 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B97_0, NULL);
		G_B98_0 = L_89;
		G_B98_1 = G_B97_1;
		G_B98_2 = G_B97_2;
		G_B98_3 = G_B97_3;
		G_B98_4 = G_B97_4;
	}

IL_055d:
	{
		RuntimeObject* L_90 = V_0;
		int32_t L_91;
		L_91 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_90);
		int32_t L_92;
		L_92 = ValueTuple_CombineHashCodes_m62423C878D7CB18B74DAA96483AD008367FF6BF8(G_B98_4, G_B98_3, G_B98_2, G_B98_1, G_B98_0, L_91, NULL);
		return L_92;
	}

IL_0569:
	{
		int32_t* L_93 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		G_B102_0 = L_93;
		goto IL_0596;
	}

IL_0596:
	{
		int32_t L_95;
		L_95 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B102_0, NULL);
		G_B103_0 = L_95;
	}

IL_05a1:
	{
		intptr_t* L_96 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_5), sizeof(intptr_t));
		G_B106_0 = L_96;
		G_B106_1 = G_B103_0;
		goto IL_05ce;
	}

IL_05ce:
	{
		int32_t L_98;
		L_98 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B106_0, NULL);
		G_B107_0 = L_98;
		G_B107_1 = G_B106_1;
	}

IL_05d9:
	{
		int32_t* L_99 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		G_B110_0 = L_99;
		G_B110_1 = G_B107_0;
		G_B110_2 = G_B107_1;
		goto IL_0606;
	}

IL_0606:
	{
		int32_t L_101;
		L_101 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B110_0, NULL);
		G_B111_0 = L_101;
		G_B111_1 = G_B110_1;
		G_B111_2 = G_B110_2;
	}

IL_0611:
	{
		intptr_t* L_102 = (intptr_t*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_7), sizeof(intptr_t));
		G_B114_0 = L_102;
		G_B114_1 = G_B111_0;
		G_B114_2 = G_B111_1;
		G_B114_3 = G_B111_2;
		goto IL_063e;
	}

IL_063e:
	{
		int32_t L_104;
		L_104 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B114_0, NULL);
		G_B115_0 = L_104;
		G_B115_1 = G_B114_1;
		G_B115_2 = G_B114_2;
		G_B115_3 = G_B114_3;
	}

IL_0649:
	{
		int32_t* L_105 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_8), sizeof(int32_t));
		G_B118_0 = L_105;
		G_B118_1 = G_B115_0;
		G_B118_2 = G_B115_1;
		G_B118_3 = G_B115_2;
		G_B118_4 = G_B115_3;
		goto IL_0676;
	}

IL_0676:
	{
		int32_t L_107;
		L_107 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B118_0, NULL);
		G_B119_0 = L_107;
		G_B119_1 = G_B118_1;
		G_B119_2 = G_B118_2;
		G_B119_3 = G_B118_3;
		G_B119_4 = G_B118_4;
	}

IL_0681:
	{
		bool* L_108 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_9), sizeof(bool));
		G_B122_0 = L_108;
		G_B122_1 = G_B119_0;
		G_B122_2 = G_B119_1;
		G_B122_3 = G_B119_2;
		G_B122_4 = G_B119_3;
		G_B122_5 = G_B119_4;
		goto IL_06ae;
	}

IL_06ae:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_110;
		L_110 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B122_0, NULL);
		G_B123_0 = L_110;
		G_B123_1 = G_B122_1;
		G_B123_2 = G_B122_2;
		G_B123_3 = G_B122_3;
		G_B123_4 = G_B122_4;
		G_B123_5 = G_B122_5;
	}

IL_06b9:
	{
		RuntimeObject* L_111 = V_0;
		int32_t L_112;
		L_112 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_111);
		int32_t L_113;
		L_113 = ValueTuple_CombineHashCodes_m6E1DDA7CEC83A1504A5210BA9F61BF00E7ACFD49(G_B123_5, G_B123_4, G_B123_3, G_B123_2, G_B123_1, G_B123_0, L_112, NULL);
		return L_113;
	}

IL_06c5:
	{
		intptr_t* L_114 = (intptr_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_3), sizeof(intptr_t));
		G_B127_0 = L_114;
		goto IL_06ef;
	}

IL_06ef:
	{
		int32_t L_116;
		L_116 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B127_0, NULL);
		G_B128_0 = L_116;
	}

IL_06fa:
	{
		int32_t* L_117 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		G_B131_0 = L_117;
		G_B131_1 = G_B128_0;
		goto IL_0727;
	}

IL_0727:
	{
		int32_t L_119;
		L_119 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B131_0, NULL);
		G_B132_0 = L_119;
		G_B132_1 = G_B131_1;
	}

IL_0732:
	{
		intptr_t* L_120 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_5), sizeof(intptr_t));
		G_B135_0 = L_120;
		G_B135_1 = G_B132_0;
		G_B135_2 = G_B132_1;
		goto IL_075f;
	}

IL_075f:
	{
		int32_t L_122;
		L_122 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B135_0, NULL);
		G_B136_0 = L_122;
		G_B136_1 = G_B135_1;
		G_B136_2 = G_B135_2;
	}

IL_076a:
	{
		int32_t* L_123 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		G_B139_0 = L_123;
		G_B139_1 = G_B136_0;
		G_B139_2 = G_B136_1;
		G_B139_3 = G_B136_2;
		goto IL_0797;
	}

IL_0797:
	{
		int32_t L_125;
		L_125 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B139_0, NULL);
		G_B140_0 = L_125;
		G_B140_1 = G_B139_1;
		G_B140_2 = G_B139_2;
		G_B140_3 = G_B139_3;
	}

IL_07a2:
	{
		intptr_t* L_126 = (intptr_t*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_7), sizeof(intptr_t));
		G_B143_0 = L_126;
		G_B143_1 = G_B140_0;
		G_B143_2 = G_B140_1;
		G_B143_3 = G_B140_2;
		G_B143_4 = G_B140_3;
		goto IL_07cf;
	}

IL_07cf:
	{
		int32_t L_128;
		L_128 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(G_B143_0, NULL);
		G_B144_0 = L_128;
		G_B144_1 = G_B143_1;
		G_B144_2 = G_B143_2;
		G_B144_3 = G_B143_3;
		G_B144_4 = G_B143_4;
	}

IL_07da:
	{
		int32_t* L_129 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_8), sizeof(int32_t));
		G_B147_0 = L_129;
		G_B147_1 = G_B144_0;
		G_B147_2 = G_B144_1;
		G_B147_3 = G_B144_2;
		G_B147_4 = G_B144_3;
		G_B147_5 = G_B144_4;
		goto IL_0807;
	}

IL_0807:
	{
		int32_t L_131;
		L_131 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B147_0, NULL);
		G_B148_0 = L_131;
		G_B148_1 = G_B147_1;
		G_B148_2 = G_B147_2;
		G_B148_3 = G_B147_3;
		G_B148_4 = G_B147_4;
		G_B148_5 = G_B147_5;
	}

IL_0812:
	{
		bool* L_132 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_9), sizeof(bool));
		G_B151_0 = L_132;
		G_B151_1 = G_B148_0;
		G_B151_2 = G_B148_1;
		G_B151_3 = G_B148_2;
		G_B151_4 = G_B148_3;
		G_B151_5 = G_B148_4;
		G_B151_6 = G_B148_5;
		goto IL_083f;
	}

IL_083f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_134;
		L_134 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B151_0, NULL);
		G_B152_0 = L_134;
		G_B152_1 = G_B151_1;
		G_B152_2 = G_B151_2;
		G_B152_3 = G_B151_3;
		G_B152_4 = G_B151_4;
		G_B152_5 = G_B151_5;
		G_B152_6 = G_B151_6;
	}

IL_084a:
	{
		RuntimeObject* L_135 = V_0;
		int32_t L_136;
		L_136 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_135);
		int32_t L_137;
		L_137 = ValueTuple_CombineHashCodes_mAFEBA974A670843200DC9DA7DEF8280FCD19E05E(G_B152_6, G_B152_5, G_B152_4, G_B152_3, G_B152_2, G_B152_1, G_B152_0, L_136, NULL);
		return L_137;
	}

IL_0856:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_GetHashCode_mD3CEE903C35BC93C01F9C27EF3BD96167653C777_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_GetHashCode_mD3CEE903C35BC93C01F9C27EF3BD96167653C777(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_m3858509F915D1D409C26DDDB5C554B4791F4C5A8_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_8_GetHashCodeCore_mA1BD6FA11FF8AB180DCC2F1DD669F5FEA61BC089(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 83));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_m3858509F915D1D409C26DDDB5C554B4791F4C5A8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_m3858509F915D1D409C26DDDB5C554B4791F4C5A8(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCodeCore_mA1BD6FA11FF8AB180DCC2F1DD669F5FEA61BC089_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_0 = __this->___Rest;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_4 = ___0_comparer;
		intptr_t L_5 = __this->___Item1;
		intptr_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_7);
		RuntimeObject* L_9 = ___0_comparer;
		int32_t L_10 = __this->___Item2;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_11);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_9, L_12);
		RuntimeObject* L_14 = ___0_comparer;
		intptr_t L_15 = __this->___Item3;
		intptr_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_14, L_17);
		RuntimeObject* L_19 = ___0_comparer;
		int32_t L_20 = __this->___Item4;
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), &L_21);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_19, L_22);
		RuntimeObject* L_24 = ___0_comparer;
		intptr_t L_25 = __this->___Item5;
		intptr_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_26);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_24, L_27);
		RuntimeObject* L_29 = ___0_comparer;
		int32_t L_30 = __this->___Item6;
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_29, L_32);
		RuntimeObject* L_34 = ___0_comparer;
		bool L_35 = __this->___Item7;
		bool L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_36);
		int32_t L_38;
		L_38 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_34, L_37);
		int32_t L_39;
		L_39 = ValueTuple_CombineHashCodes_m6E1DDA7CEC83A1504A5210BA9F61BF00E7ACFD49(L_8, L_13, L_18, L_23, L_28, L_33, L_38, NULL);
		return L_39;
	}

IL_0091:
	{
		RuntimeObject* L_40 = V_0;
		int32_t L_41;
		L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		V_1 = L_41;
		int32_t L_42 = V_1;
		if ((((int32_t)L_42) < ((int32_t)8)))
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_43 = V_0;
		RuntimeObject* L_44 = ___0_comparer;
		int32_t L_45;
		L_45 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_43, L_44);
		return L_45;
	}

IL_00a4:
	{
		int32_t L_46 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(8, L_46));
		int32_t L_47 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract(L_47, 1)))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00f3;
			}
			case 2:
			{
				goto IL_0122;
			}
			case 3:
			{
				goto IL_0162;
			}
			case 4:
			{
				goto IL_01b3;
			}
			case 5:
			{
				goto IL_0215;
			}
			case 6:
			{
				goto IL_0288;
			}
			case 7:
			{
				goto IL_0288;
			}
		}
	}
	{
		goto IL_030c;
	}

IL_00d5:
	{
		RuntimeObject* L_48 = ___0_comparer;
		bool L_49 = __this->___Item7;
		bool L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_48, L_51);
		RuntimeObject* L_53 = V_0;
		RuntimeObject* L_54 = ___0_comparer;
		int32_t L_55;
		L_55 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_53, L_54);
		int32_t L_56;
		L_56 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(L_52, L_55, NULL);
		return L_56;
	}

IL_00f3:
	{
		RuntimeObject* L_57 = ___0_comparer;
		int32_t L_58 = __this->___Item6;
		int32_t L_59 = L_58;
		RuntimeObject* L_60 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_59);
		int32_t L_61;
		L_61 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_57, L_60);
		RuntimeObject* L_62 = ___0_comparer;
		bool L_63 = __this->___Item7;
		bool L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_64);
		int32_t L_66;
		L_66 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_62, L_65);
		RuntimeObject* L_67 = V_0;
		RuntimeObject* L_68 = ___0_comparer;
		int32_t L_69;
		L_69 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_67, L_68);
		int32_t L_70;
		L_70 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(L_61, L_66, L_69, NULL);
		return L_70;
	}

IL_0122:
	{
		RuntimeObject* L_71 = ___0_comparer;
		intptr_t L_72 = __this->___Item5;
		intptr_t L_73 = L_72;
		RuntimeObject* L_74 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_73);
		int32_t L_75;
		L_75 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_71, L_74);
		RuntimeObject* L_76 = ___0_comparer;
		int32_t L_77 = __this->___Item6;
		int32_t L_78 = L_77;
		RuntimeObject* L_79 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_78);
		int32_t L_80;
		L_80 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_76, L_79);
		RuntimeObject* L_81 = ___0_comparer;
		bool L_82 = __this->___Item7;
		bool L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_83);
		int32_t L_85;
		L_85 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_81, L_84);
		RuntimeObject* L_86 = V_0;
		RuntimeObject* L_87 = ___0_comparer;
		int32_t L_88;
		L_88 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_86, L_87);
		int32_t L_89;
		L_89 = ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813(L_75, L_80, L_85, L_88, NULL);
		return L_89;
	}

IL_0162:
	{
		RuntimeObject* L_90 = ___0_comparer;
		int32_t L_91 = __this->___Item4;
		int32_t L_92 = L_91;
		RuntimeObject* L_93 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), &L_92);
		int32_t L_94;
		L_94 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_90, L_93);
		RuntimeObject* L_95 = ___0_comparer;
		intptr_t L_96 = __this->___Item5;
		intptr_t L_97 = L_96;
		RuntimeObject* L_98 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_97);
		int32_t L_99;
		L_99 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_95, L_98);
		RuntimeObject* L_100 = ___0_comparer;
		int32_t L_101 = __this->___Item6;
		int32_t L_102 = L_101;
		RuntimeObject* L_103 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_102);
		int32_t L_104;
		L_104 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_100, L_103);
		RuntimeObject* L_105 = ___0_comparer;
		bool L_106 = __this->___Item7;
		bool L_107 = L_106;
		RuntimeObject* L_108 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_107);
		int32_t L_109;
		L_109 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_105, L_108);
		RuntimeObject* L_110 = V_0;
		RuntimeObject* L_111 = ___0_comparer;
		int32_t L_112;
		L_112 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_110, L_111);
		int32_t L_113;
		L_113 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(L_94, L_99, L_104, L_109, L_112, NULL);
		return L_113;
	}

IL_01b3:
	{
		RuntimeObject* L_114 = ___0_comparer;
		intptr_t L_115 = __this->___Item3;
		intptr_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_116);
		int32_t L_118;
		L_118 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_114, L_117);
		RuntimeObject* L_119 = ___0_comparer;
		int32_t L_120 = __this->___Item4;
		int32_t L_121 = L_120;
		RuntimeObject* L_122 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), &L_121);
		int32_t L_123;
		L_123 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_119, L_122);
		RuntimeObject* L_124 = ___0_comparer;
		intptr_t L_125 = __this->___Item5;
		intptr_t L_126 = L_125;
		RuntimeObject* L_127 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_126);
		int32_t L_128;
		L_128 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_124, L_127);
		RuntimeObject* L_129 = ___0_comparer;
		int32_t L_130 = __this->___Item6;
		int32_t L_131 = L_130;
		RuntimeObject* L_132 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_131);
		int32_t L_133;
		L_133 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_129, L_132);
		RuntimeObject* L_134 = ___0_comparer;
		bool L_135 = __this->___Item7;
		bool L_136 = L_135;
		RuntimeObject* L_137 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_136);
		int32_t L_138;
		L_138 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_134, L_137);
		RuntimeObject* L_139 = V_0;
		RuntimeObject* L_140 = ___0_comparer;
		int32_t L_141;
		L_141 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_139, L_140);
		int32_t L_142;
		L_142 = ValueTuple_CombineHashCodes_m62423C878D7CB18B74DAA96483AD008367FF6BF8(L_118, L_123, L_128, L_133, L_138, L_141, NULL);
		return L_142;
	}

IL_0215:
	{
		RuntimeObject* L_143 = ___0_comparer;
		int32_t L_144 = __this->___Item2;
		int32_t L_145 = L_144;
		RuntimeObject* L_146 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_145);
		int32_t L_147;
		L_147 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_143, L_146);
		RuntimeObject* L_148 = ___0_comparer;
		intptr_t L_149 = __this->___Item3;
		intptr_t L_150 = L_149;
		RuntimeObject* L_151 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_150);
		int32_t L_152;
		L_152 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_148, L_151);
		RuntimeObject* L_153 = ___0_comparer;
		int32_t L_154 = __this->___Item4;
		int32_t L_155 = L_154;
		RuntimeObject* L_156 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), &L_155);
		int32_t L_157;
		L_157 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_153, L_156);
		RuntimeObject* L_158 = ___0_comparer;
		intptr_t L_159 = __this->___Item5;
		intptr_t L_160 = L_159;
		RuntimeObject* L_161 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_160);
		int32_t L_162;
		L_162 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_158, L_161);
		RuntimeObject* L_163 = ___0_comparer;
		int32_t L_164 = __this->___Item6;
		int32_t L_165 = L_164;
		RuntimeObject* L_166 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_165);
		int32_t L_167;
		L_167 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_163, L_166);
		RuntimeObject* L_168 = ___0_comparer;
		bool L_169 = __this->___Item7;
		bool L_170 = L_169;
		RuntimeObject* L_171 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_170);
		int32_t L_172;
		L_172 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_168, L_171);
		RuntimeObject* L_173 = V_0;
		RuntimeObject* L_174 = ___0_comparer;
		int32_t L_175;
		L_175 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_173, L_174);
		int32_t L_176;
		L_176 = ValueTuple_CombineHashCodes_m6E1DDA7CEC83A1504A5210BA9F61BF00E7ACFD49(L_147, L_152, L_157, L_162, L_167, L_172, L_175, NULL);
		return L_176;
	}

IL_0288:
	{
		RuntimeObject* L_177 = ___0_comparer;
		intptr_t L_178 = __this->___Item1;
		intptr_t L_179 = L_178;
		RuntimeObject* L_180 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_179);
		int32_t L_181;
		L_181 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_177, L_180);
		RuntimeObject* L_182 = ___0_comparer;
		int32_t L_183 = __this->___Item2;
		int32_t L_184 = L_183;
		RuntimeObject* L_185 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_184);
		int32_t L_186;
		L_186 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_182, L_185);
		RuntimeObject* L_187 = ___0_comparer;
		intptr_t L_188 = __this->___Item3;
		intptr_t L_189 = L_188;
		RuntimeObject* L_190 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_189);
		int32_t L_191;
		L_191 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_187, L_190);
		RuntimeObject* L_192 = ___0_comparer;
		int32_t L_193 = __this->___Item4;
		int32_t L_194 = L_193;
		RuntimeObject* L_195 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), &L_194);
		int32_t L_196;
		L_196 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_192, L_195);
		RuntimeObject* L_197 = ___0_comparer;
		intptr_t L_198 = __this->___Item5;
		intptr_t L_199 = L_198;
		RuntimeObject* L_200 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_199);
		int32_t L_201;
		L_201 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_197, L_200);
		RuntimeObject* L_202 = ___0_comparer;
		int32_t L_203 = __this->___Item6;
		int32_t L_204 = L_203;
		RuntimeObject* L_205 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_204);
		int32_t L_206;
		L_206 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_202, L_205);
		RuntimeObject* L_207 = ___0_comparer;
		bool L_208 = __this->___Item7;
		bool L_209 = L_208;
		RuntimeObject* L_210 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), &L_209);
		int32_t L_211;
		L_211 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_207, L_210);
		RuntimeObject* L_212 = V_0;
		RuntimeObject* L_213 = ___0_comparer;
		int32_t L_214;
		L_214 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_212, L_213);
		int32_t L_215;
		L_215 = ValueTuple_CombineHashCodes_mAFEBA974A670843200DC9DA7DEF8280FCD19E05E(L_181, L_186, L_191, L_196, L_201, L_206, L_211, L_214, NULL);
		return L_215;
	}

IL_030c:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_GetHashCodeCore_mA1BD6FA11FF8AB180DCC2F1DD669F5FEA61BC089_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_GetHashCodeCore_mA1BD6FA11FF8AB180DCC2F1DD669F5FEA61BC089(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_mA055ED839C8603A04BC1AF1549B04EEB42CFAC03_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_8_GetHashCodeCore_mA1BD6FA11FF8AB180DCC2F1DD669F5FEA61BC089(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 83));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_mA055ED839C8603A04BC1AF1549B04EEB42CFAC03_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_IValueTupleInternal_GetHashCode_mA055ED839C8603A04BC1AF1549B04EEB42CFAC03(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_ToString_mB526711BD0646398E33625812DC4DA38177CD97A_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	bool V_7 = false;
	intptr_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	int32_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	intptr_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	int32_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	String_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	intptr_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	String_t* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_3 = NULL;
	int32_t* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_3 = NULL;
	String_t* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B25_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B25_3 = NULL;
	bool* G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B28_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B28_3 = NULL;
	String_t* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B29_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B29_3 = NULL;
	intptr_t* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B33_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B33_3 = NULL;
	String_t* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B34_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B34_3 = NULL;
	int32_t* G_B37_0 = NULL;
	int32_t G_B37_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B37_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B37_3 = NULL;
	String_t* G_B38_0 = NULL;
	int32_t G_B38_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B38_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B38_3 = NULL;
	intptr_t* G_B41_0 = NULL;
	int32_t G_B41_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B41_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B41_3 = NULL;
	String_t* G_B42_0 = NULL;
	int32_t G_B42_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B42_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B42_3 = NULL;
	int32_t* G_B45_0 = NULL;
	int32_t G_B45_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B45_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B45_3 = NULL;
	String_t* G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B46_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B46_3 = NULL;
	intptr_t* G_B49_0 = NULL;
	int32_t G_B49_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B49_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B49_3 = NULL;
	String_t* G_B50_0 = NULL;
	int32_t G_B50_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_3 = NULL;
	int32_t* G_B53_0 = NULL;
	int32_t G_B53_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_3 = NULL;
	String_t* G_B54_0 = NULL;
	int32_t G_B54_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_3 = NULL;
	bool* G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_3 = NULL;
	String_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_3 = NULL;
	{
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_0 = __this->___Rest;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_021c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		intptr_t* L_7 = (intptr_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
		G_B4_0 = L_7;
		G_B4_1 = 1;
		G_B4_2 = L_6;
		G_B4_3 = L_6;
		goto IL_0052;
	}

IL_0052:
	{
		String_t* L_9;
		L_9 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B4_0, NULL);
		G_B5_0 = L_9;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_005d:
	{
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = G_B5_3;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		int32_t* L_12 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B8_0 = L_12;
		G_B8_1 = 3;
		G_B8_2 = L_11;
		G_B8_3 = L_11;
		goto IL_0092;
	}

IL_0092:
	{
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B8_0, NULL);
		G_B9_0 = L_14;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_009d:
	{
		(G_B9_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B9_3;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		intptr_t* L_17 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_3), sizeof(intptr_t));
		G_B12_0 = L_17;
		G_B12_1 = 5;
		G_B12_2 = L_16;
		G_B12_3 = L_16;
		goto IL_00d2;
	}

IL_00d2:
	{
		String_t* L_19;
		L_19 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B12_0, NULL);
		G_B13_0 = L_19;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
	}

IL_00dd:
	{
		(G_B13_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B13_1), (String_t*)G_B13_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = G_B13_3;
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		int32_t* L_22 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		G_B16_0 = L_22;
		G_B16_1 = 7;
		G_B16_2 = L_21;
		G_B16_3 = L_21;
		goto IL_0115;
	}

IL_0115:
	{
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B16_0, NULL);
		G_B17_0 = L_24;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_0120:
	{
		(G_B17_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B17_1), (String_t*)G_B17_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B17_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		intptr_t* L_27 = (intptr_t*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_5), sizeof(intptr_t));
		G_B20_0 = L_27;
		G_B20_1 = ((int32_t)9);
		G_B20_2 = L_26;
		G_B20_3 = L_26;
		goto IL_0159;
	}

IL_0159:
	{
		String_t* L_29;
		L_29 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B20_0, NULL);
		G_B21_0 = L_29;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
	}

IL_0164:
	{
		(G_B21_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B21_1), (String_t*)G_B21_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = G_B21_3;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		int32_t* L_32 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		G_B24_0 = L_32;
		G_B24_1 = ((int32_t)11);
		G_B24_2 = L_31;
		G_B24_3 = L_31;
		goto IL_019e;
	}

IL_019e:
	{
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B24_0, NULL);
		G_B25_0 = L_34;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
		G_B25_3 = G_B24_3;
	}

IL_01a9:
	{
		(G_B25_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B25_1), (String_t*)G_B25_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = G_B25_3;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		bool* L_37 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_7), sizeof(bool));
		G_B28_0 = L_37;
		G_B28_1 = ((int32_t)13);
		G_B28_2 = L_36;
		G_B28_3 = L_36;
		goto IL_01e3;
	}

IL_01e3:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_39;
		L_39 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(G_B28_0, NULL);
		G_B29_0 = L_39;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		G_B29_3 = G_B28_3;
	}

IL_01ee:
	{
		(G_B29_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B29_1), (String_t*)G_B29_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = G_B29_3;
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75* L_42 = (ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75*)(&__this->___Rest);
		String_t* L_43;
		L_43 = ValueTuple_1_ToString_m5747BAF62664DF8F228D5AE10377433797691E2E(L_42, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 91));
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_43);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_41;
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_45;
		L_45 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_44, NULL);
		return L_45;
	}

IL_021c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
		intptr_t* L_49 = (intptr_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
		G_B33_0 = L_49;
		G_B33_1 = 1;
		G_B33_2 = L_48;
		G_B33_3 = L_48;
		goto IL_0257;
	}

IL_0257:
	{
		String_t* L_51;
		L_51 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B33_0, NULL);
		G_B34_0 = L_51;
		G_B34_1 = G_B33_1;
		G_B34_2 = G_B33_2;
		G_B34_3 = G_B33_3;
	}

IL_0262:
	{
		(G_B34_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B34_1), (String_t*)G_B34_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = G_B34_3;
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		int32_t* L_54 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B37_0 = L_54;
		G_B37_1 = 3;
		G_B37_2 = L_53;
		G_B37_3 = L_53;
		goto IL_0297;
	}

IL_0297:
	{
		String_t* L_56;
		L_56 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B37_0, NULL);
		G_B38_0 = L_56;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
		G_B38_3 = G_B37_3;
	}

IL_02a2:
	{
		(G_B38_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B38_1), (String_t*)G_B38_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = G_B38_3;
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57;
		intptr_t* L_59 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_3), sizeof(intptr_t));
		G_B41_0 = L_59;
		G_B41_1 = 5;
		G_B41_2 = L_58;
		G_B41_3 = L_58;
		goto IL_02d7;
	}

IL_02d7:
	{
		String_t* L_61;
		L_61 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B41_0, NULL);
		G_B42_0 = L_61;
		G_B42_1 = G_B41_1;
		G_B42_2 = G_B41_2;
		G_B42_3 = G_B41_3;
	}

IL_02e2:
	{
		(G_B42_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B42_1), (String_t*)G_B42_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = G_B42_3;
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_62;
		int32_t* L_64 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		G_B45_0 = L_64;
		G_B45_1 = 7;
		G_B45_2 = L_63;
		G_B45_3 = L_63;
		goto IL_031a;
	}

IL_031a:
	{
		String_t* L_66;
		L_66 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B45_0, NULL);
		G_B46_0 = L_66;
		G_B46_1 = G_B45_1;
		G_B46_2 = G_B45_2;
		G_B46_3 = G_B45_3;
	}

IL_0325:
	{
		(G_B46_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B46_1), (String_t*)G_B46_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = G_B46_3;
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_67;
		intptr_t* L_69 = (intptr_t*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_5), sizeof(intptr_t));
		G_B49_0 = L_69;
		G_B49_1 = ((int32_t)9);
		G_B49_2 = L_68;
		G_B49_3 = L_68;
		goto IL_035e;
	}

IL_035e:
	{
		String_t* L_71;
		L_71 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B49_0, NULL);
		G_B50_0 = L_71;
		G_B50_1 = G_B49_1;
		G_B50_2 = G_B49_2;
		G_B50_3 = G_B49_3;
	}

IL_0369:
	{
		(G_B50_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B50_1), (String_t*)G_B50_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = G_B50_3;
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_72;
		int32_t* L_74 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		G_B53_0 = L_74;
		G_B53_1 = ((int32_t)11);
		G_B53_2 = L_73;
		G_B53_3 = L_73;
		goto IL_03a3;
	}

IL_03a3:
	{
		String_t* L_76;
		L_76 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B53_0, NULL);
		G_B54_0 = L_76;
		G_B54_1 = G_B53_1;
		G_B54_2 = G_B53_2;
		G_B54_3 = G_B53_3;
	}

IL_03ae:
	{
		(G_B54_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B54_1), (String_t*)G_B54_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = G_B54_3;
		(L_77)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_77;
		bool* L_79 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_7), sizeof(bool));
		G_B57_0 = L_79;
		G_B57_1 = ((int32_t)13);
		G_B57_2 = L_78;
		G_B57_3 = L_78;
		goto IL_03e8;
	}

IL_03e8:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_81;
		L_81 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(G_B57_0, NULL);
		G_B58_0 = L_81;
		G_B58_1 = G_B57_1;
		G_B58_2 = G_B57_2;
		G_B58_3 = G_B57_3;
	}

IL_03f3:
	{
		(G_B58_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B58_1), (String_t*)G_B58_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = G_B58_3;
		(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_82;
		RuntimeObject* L_84 = V_0;
		String_t* L_85;
		L_85 = InterfaceFuncInvoker0< String_t* >::Invoke(1, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_84);
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_85);
		String_t* L_86;
		L_86 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_83, NULL);
		return L_86;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_8_ToString_mB526711BD0646398E33625812DC4DA38177CD97A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_8_ToString_mB526711BD0646398E33625812DC4DA38177CD97A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m1D56A955F70929A48AD600B6E4CCA809A719C99C_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	bool V_7 = false;
	intptr_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	int32_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	intptr_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	int32_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	String_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	intptr_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	String_t* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_3 = NULL;
	int32_t* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_3 = NULL;
	String_t* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B25_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B25_3 = NULL;
	bool* G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B28_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B28_3 = NULL;
	String_t* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B29_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B29_3 = NULL;
	intptr_t* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B33_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B33_3 = NULL;
	String_t* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B34_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B34_3 = NULL;
	int32_t* G_B37_0 = NULL;
	int32_t G_B37_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B37_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B37_3 = NULL;
	String_t* G_B38_0 = NULL;
	int32_t G_B38_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B38_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B38_3 = NULL;
	intptr_t* G_B41_0 = NULL;
	int32_t G_B41_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B41_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B41_3 = NULL;
	String_t* G_B42_0 = NULL;
	int32_t G_B42_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B42_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B42_3 = NULL;
	int32_t* G_B45_0 = NULL;
	int32_t G_B45_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B45_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B45_3 = NULL;
	String_t* G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B46_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B46_3 = NULL;
	intptr_t* G_B49_0 = NULL;
	int32_t G_B49_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B49_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B49_3 = NULL;
	String_t* G_B50_0 = NULL;
	int32_t G_B50_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_3 = NULL;
	int32_t* G_B53_0 = NULL;
	int32_t G_B53_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_3 = NULL;
	String_t* G_B54_0 = NULL;
	int32_t G_B54_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_3 = NULL;
	bool* G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_3 = NULL;
	String_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_3 = NULL;
	{
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_0 = __this->___Rest;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_0213;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		intptr_t* L_6 = (intptr_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
		G_B4_0 = L_6;
		G_B4_1 = 0;
		G_B4_2 = L_5;
		G_B4_3 = L_5;
		goto IL_004a;
	}

IL_004a:
	{
		String_t* L_8;
		L_8 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B4_0, NULL);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_0055:
	{
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = G_B5_3;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		int32_t* L_11 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B8_0 = L_11;
		G_B8_1 = 2;
		G_B8_2 = L_10;
		G_B8_3 = L_10;
		goto IL_008a;
	}

IL_008a:
	{
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B8_0, NULL);
		G_B9_0 = L_13;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0095:
	{
		(G_B9_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = G_B9_3;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		intptr_t* L_16 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_3), sizeof(intptr_t));
		G_B12_0 = L_16;
		G_B12_1 = 4;
		G_B12_2 = L_15;
		G_B12_3 = L_15;
		goto IL_00ca;
	}

IL_00ca:
	{
		String_t* L_18;
		L_18 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B12_0, NULL);
		G_B13_0 = L_18;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
	}

IL_00d5:
	{
		(G_B13_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B13_1), (String_t*)G_B13_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = G_B13_3;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		int32_t* L_21 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		G_B16_0 = L_21;
		G_B16_1 = 6;
		G_B16_2 = L_20;
		G_B16_3 = L_20;
		goto IL_010d;
	}

IL_010d:
	{
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B16_0, NULL);
		G_B17_0 = L_23;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_0118:
	{
		(G_B17_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B17_1), (String_t*)G_B17_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = G_B17_3;
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		intptr_t* L_26 = (intptr_t*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_5), sizeof(intptr_t));
		G_B20_0 = L_26;
		G_B20_1 = 8;
		G_B20_2 = L_25;
		G_B20_3 = L_25;
		goto IL_0150;
	}

IL_0150:
	{
		String_t* L_28;
		L_28 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B20_0, NULL);
		G_B21_0 = L_28;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
	}

IL_015b:
	{
		(G_B21_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B21_1), (String_t*)G_B21_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = G_B21_3;
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		int32_t* L_31 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		G_B24_0 = L_31;
		G_B24_1 = ((int32_t)10);
		G_B24_2 = L_30;
		G_B24_3 = L_30;
		goto IL_0195;
	}

IL_0195:
	{
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B24_0, NULL);
		G_B25_0 = L_33;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
		G_B25_3 = G_B24_3;
	}

IL_01a0:
	{
		(G_B25_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B25_1), (String_t*)G_B25_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = G_B25_3;
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		bool* L_36 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_7), sizeof(bool));
		G_B28_0 = L_36;
		G_B28_1 = ((int32_t)12);
		G_B28_2 = L_35;
		G_B28_3 = L_35;
		goto IL_01da;
	}

IL_01da:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_38;
		L_38 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(G_B28_0, NULL);
		G_B29_0 = L_38;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		G_B29_3 = G_B28_3;
	}

IL_01e5:
	{
		(G_B29_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B29_1), (String_t*)G_B29_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = G_B29_3;
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75* L_41 = (ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75*)(&__this->___Rest);
		String_t* L_42;
		L_42 = ValueTuple_1_ToString_m5747BAF62664DF8F228D5AE10377433797691E2E(L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 91));
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_42);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_40;
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_44;
		L_44 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_43, NULL);
		return L_44;
	}

IL_0213:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		intptr_t* L_47 = (intptr_t*)(&__this->___Item1);
		il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
		G_B33_0 = L_47;
		G_B33_1 = 0;
		G_B33_2 = L_46;
		G_B33_3 = L_46;
		goto IL_0246;
	}

IL_0246:
	{
		String_t* L_49;
		L_49 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B33_0, NULL);
		G_B34_0 = L_49;
		G_B34_1 = G_B33_1;
		G_B34_2 = G_B33_2;
		G_B34_3 = G_B33_3;
	}

IL_0251:
	{
		(G_B34_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B34_1), (String_t*)G_B34_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = G_B34_3;
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_50;
		int32_t* L_52 = (int32_t*)(&__this->___Item2);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		G_B37_0 = L_52;
		G_B37_1 = 2;
		G_B37_2 = L_51;
		G_B37_3 = L_51;
		goto IL_0286;
	}

IL_0286:
	{
		String_t* L_54;
		L_54 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B37_0, NULL);
		G_B38_0 = L_54;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
		G_B38_3 = G_B37_3;
	}

IL_0291:
	{
		(G_B38_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B38_1), (String_t*)G_B38_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = G_B38_3;
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_55;
		intptr_t* L_57 = (intptr_t*)(&__this->___Item3);
		il2cpp_codegen_initobj((&V_3), sizeof(intptr_t));
		G_B41_0 = L_57;
		G_B41_1 = 4;
		G_B41_2 = L_56;
		G_B41_3 = L_56;
		goto IL_02c6;
	}

IL_02c6:
	{
		String_t* L_59;
		L_59 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B41_0, NULL);
		G_B42_0 = L_59;
		G_B42_1 = G_B41_1;
		G_B42_2 = G_B41_2;
		G_B42_3 = G_B41_3;
	}

IL_02d1:
	{
		(G_B42_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B42_1), (String_t*)G_B42_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = G_B42_3;
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_60;
		int32_t* L_62 = (int32_t*)(&__this->___Item4);
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		G_B45_0 = L_62;
		G_B45_1 = 6;
		G_B45_2 = L_61;
		G_B45_3 = L_61;
		goto IL_0309;
	}

IL_0309:
	{
		String_t* L_64;
		L_64 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B45_0, NULL);
		G_B46_0 = L_64;
		G_B46_1 = G_B45_1;
		G_B46_2 = G_B45_2;
		G_B46_3 = G_B45_3;
	}

IL_0314:
	{
		(G_B46_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B46_1), (String_t*)G_B46_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = G_B46_3;
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65;
		intptr_t* L_67 = (intptr_t*)(&__this->___Item5);
		il2cpp_codegen_initobj((&V_5), sizeof(intptr_t));
		G_B49_0 = L_67;
		G_B49_1 = 8;
		G_B49_2 = L_66;
		G_B49_3 = L_66;
		goto IL_034c;
	}

IL_034c:
	{
		String_t* L_69;
		L_69 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(G_B49_0, NULL);
		G_B50_0 = L_69;
		G_B50_1 = G_B49_1;
		G_B50_2 = G_B49_2;
		G_B50_3 = G_B49_3;
	}

IL_0357:
	{
		(G_B50_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B50_1), (String_t*)G_B50_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = G_B50_3;
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_70;
		int32_t* L_72 = (int32_t*)(&__this->___Item6);
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		G_B53_0 = L_72;
		G_B53_1 = ((int32_t)10);
		G_B53_2 = L_71;
		G_B53_3 = L_71;
		goto IL_0391;
	}

IL_0391:
	{
		String_t* L_74;
		L_74 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(G_B53_0, NULL);
		G_B54_0 = L_74;
		G_B54_1 = G_B53_1;
		G_B54_2 = G_B53_2;
		G_B54_3 = G_B53_3;
	}

IL_039c:
	{
		(G_B54_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B54_1), (String_t*)G_B54_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = G_B54_3;
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = L_75;
		bool* L_77 = (bool*)(&__this->___Item7);
		il2cpp_codegen_initobj((&V_7), sizeof(bool));
		G_B57_0 = L_77;
		G_B57_1 = ((int32_t)12);
		G_B57_2 = L_76;
		G_B57_3 = L_76;
		goto IL_03d6;
	}

IL_03d6:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_79;
		L_79 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(G_B57_0, NULL);
		G_B58_0 = L_79;
		G_B58_1 = G_B57_1;
		G_B58_2 = G_B57_2;
		G_B58_3 = G_B57_3;
	}

IL_03e1:
	{
		(G_B58_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B58_1), (String_t*)G_B58_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = G_B58_3;
		(L_80)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = L_80;
		RuntimeObject* L_82 = V_0;
		String_t* L_83;
		L_83 = InterfaceFuncInvoker0< String_t* >::Invoke(1, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_82);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_83);
		String_t* L_84;
		L_84 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_81, NULL);
		return L_84;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m1D56A955F70929A48AD600B6E4CCA809A719C99C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m1D56A955F70929A48AD600B6E4CCA809A719C99C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mA8C1F2C9D0DDC6DAFD752FA5C8C5BDB2A96ED49C_gshared (ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_0 = __this->___Rest;
		ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_1);
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		return ((int32_t)il2cpp_codegen_add(7, L_5));
	}

IL_001d:
	{
		return 8;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mA8C1F2C9D0DDC6DAFD752FA5C8C5BDB2A96ED49C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mA8C1F2C9D0DDC6DAFD752FA5C8C5BDB2A96ED49C(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_8__ctor_m456CD331E19E16CE692E636499DF94A47061A7E9_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, Il2CppFullySharedGenericAny ___5_item6, Il2CppFullySharedGenericAny ___6_item7, Il2CppFullySharedGenericStruct ___7_rest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	const Il2CppFullySharedGenericStruct L_10 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, ___7_rest, SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		bool L_1 = il2cpp_codegen_isinst_runtime_check(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBAA23633770B89931ABB5730B524910907A5C7B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? ___0_item1 : &___0_item1), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0), L_3, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1), L_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? ___2_item3 : &___2_item3), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2), L_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? ___3_item4 : &___3_item4), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3), L_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? ___4_item5 : &___4_item5), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4), L_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)) ? ___5_item6 : &___5_item6), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5), L_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? ___6_item7 : &___6_item7), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6), L_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_10, ___7_rest, SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7), L_10, SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_8__ctor_m456CD331E19E16CE692E636499DF94A47061A7E9_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, Il2CppFullySharedGenericAny ___5_item6, Il2CppFullySharedGenericAny ___6_item7, Il2CppFullySharedGenericStruct ___7_rest, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	ValueTuple_8__ctor_m456CD331E19E16CE692E636499DF94A47061A7E9(_thisAdjusted, ___0_item1, ___1_item2, ___2_item3, ___3_item4, ___4_item5, ___5_item6, ___6_item7, ___7_rest, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_m6E9EB22F4F990C711D38C5929488A47E32204C5A_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), __this, (((ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0)(ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_8_Equals_m6E9EB22F4F990C711D38C5929488A47E32204C5A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_8_Equals_m6E9EB22F4F990C711D38C5929488A47E32204C5A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_Equals_m81A7442A1DCE82EB1C3D46334D42A88B21F92274_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericStruct L_36 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	const Il2CppFullySharedGenericStruct L_38 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_2 = alloca(SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_7 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_12 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_17 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_22 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_27 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_32 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_37 = L_2;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_15;
		L_15 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_17, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_19;
		L_19 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_20;
		L_20 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_22, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_24;
		L_24 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_23: *(void**)L_23));
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_25;
		L_25 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_27, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_29;
		L_29 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)) ? L_26: *(void**)L_26), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)) ? L_28: *(void**)L_28));
		if (!L_29)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_30;
		L_30 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_32, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_33, il2cpp_codegen_get_instance_field_data_pointer(L_32, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_34;
		L_34 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_31: *(void**)L_31), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_33: *(void**)L_33));
		if (!L_34)
		{
			goto IL_00c5;
		}
	}
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_35;
		L_35 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 39));
		il2cpp_codegen_memcpy(L_36, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		il2cpp_codegen_memcpy(L_37, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_38, il2cpp_codegen_get_instance_field_data_pointer(L_37, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		bool L_39;
		L_39 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_35, L_36, L_38);
		return L_39;
	}

IL_00c5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_8_Equals_m81A7442A1DCE82EB1C3D46334D42A88B21F92274_AdjustorThunk (RuntimeObject* __this, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_8_Equals_m81A7442A1DCE82EB1C3D46334D42A88B21F92274(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m8EC26DEDFFB4B136ADB2AF17FA7E9395B7E948A0_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_49 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericStruct L_53 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	const Il2CppFullySharedGenericStruct L_56 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_6 = alloca(SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_13 = L_6;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_20 = L_6;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_27 = L_6;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_34 = L_6;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_41 = L_6;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_48 = L_6;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_55 = L_6;
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 V_0 = alloca(SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
	memset(V_0, 0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0)(ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*)UnBox(L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))), SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_21);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		if (!L_23)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_24 = ___1_comparer;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_25);
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_28);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_24, L_26, L_29);
		if (!L_30)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_31 = ___1_comparer;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_32);
		il2cpp_codegen_memcpy(L_34, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_instance_field_data_pointer(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_35);
		bool L_37;
		L_37 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_31, L_33, L_36);
		if (!L_37)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_38 = ___1_comparer;
		il2cpp_codegen_memcpy(L_39, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_39);
		il2cpp_codegen_memcpy(L_41, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_42, il2cpp_codegen_get_instance_field_data_pointer(L_41, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_42);
		bool L_44;
		L_44 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_38, L_40, L_43);
		if (!L_44)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_45 = ___1_comparer;
		il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_46);
		il2cpp_codegen_memcpy(L_48, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(L_48, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_50 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_49);
		bool L_51;
		L_51 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_45, L_47, L_50);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		RuntimeObject* L_52 = ___1_comparer;
		il2cpp_codegen_memcpy(L_53, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_53);
		il2cpp_codegen_memcpy(L_55, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_56, il2cpp_codegen_get_instance_field_data_pointer(L_55, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_56);
		bool L_58;
		L_58 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_52, L_54, L_57);
		return L_58;
	}

IL_010c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m8EC26DEDFFB4B136ADB2AF17FA7E9395B7E948A0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_8_System_Collections_IStructuralEquatable_Equals_m8EC26DEDFFB4B136ADB2AF17FA7E9395B7E948A0(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IComparable_CompareTo_m876067CC3338F81C90DFD2DD51CF451CDB5DDDC1_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_2 = alloca(SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_9;
		L_9 = InvokerFuncInvoker1< int32_t, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43), __this, (((ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0)(ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*)UnBox(L_8, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_IComparable_CompareTo_m876067CC3338F81C90DFD2DD51CF451CDB5DDDC1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_IComparable_CompareTo_m876067CC3338F81C90DFD2DD51CF451CDB5DDDC1(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_CompareTo_m7BA5E274F0F612A33415A48FBBD329877F6CA1CC_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericStruct L_50 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	const Il2CppFullySharedGenericStruct L_52 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_2 = alloca(SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_9 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_16 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_23 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_30 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_37 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_44 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_51 = L_2;
	int32_t V_0 = 0;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 44)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 44));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 48)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 48));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 52)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 52));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_17: *(void**)L_17));
		V_0 = L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0054:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_21;
		L_21 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 56)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_23, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		int32_t L_25;
		L_25 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_24: *(void**)L_24));
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_0070:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_28;
		L_28 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
		il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_30, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_29: *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)) ? L_31: *(void**)L_31));
		V_0 = L_32;
		int32_t L_33 = V_0;
		if (!L_33)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_34 = V_0;
		return L_34;
	}

IL_008c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_35;
		L_35 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 64)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 64));
		il2cpp_codegen_memcpy(L_36, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_37, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_38, il2cpp_codegen_get_instance_field_data_pointer(L_37, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)) ? L_38: *(void**)L_38));
		V_0 = L_39;
		int32_t L_40 = V_0;
		if (!L_40)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_41 = V_0;
		return L_41;
	}

IL_00a8:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_42;
		L_42 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 68)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 68));
		il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_44, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		int32_t L_46;
		L_46 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_43: *(void**)L_43), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)) ? L_45: *(void**)L_45));
		V_0 = L_46;
		int32_t L_47 = V_0;
		if (!L_47)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_48 = V_0;
		return L_48;
	}

IL_00c4:
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_49;
		L_49 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 72)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 72));
		il2cpp_codegen_memcpy(L_50, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		il2cpp_codegen_memcpy(L_51, ___0_other, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		int32_t L_53;
		L_53 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_49, L_50, L_52);
		return L_53;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_CompareTo_m7BA5E274F0F612A33415A48FBBD329877F6CA1CC_AdjustorThunk (RuntimeObject* __this, ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_CompareTo_m7BA5E274F0F612A33415A48FBBD329877F6CA1CC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_mDA0F007332659CDA6ED3E2156DE347F91EB9EBB9_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const uint32_t SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_49 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_55 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_58 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_64 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_67 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericStruct L_73 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	const Il2CppFullySharedGenericStruct L_76 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_2 = alloca(SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_12 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_21 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_30 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_39 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_48 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_57 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_66 = L_2;
	const ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 L_75 = L_2;
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0 V_0 = alloca(SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
	memset(V_0, 0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject*)L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0)(ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*)UnBox(L_8, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))), SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if (!L_34)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_35 = V_1;
		return L_35;
	}

IL_00a4:
	{
		RuntimeObject* L_36 = ___1_comparer;
		il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_37);
		il2cpp_codegen_memcpy(L_39, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_instance_field_data_pointer(L_39, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_40);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_36, L_38, L_41);
		V_1 = L_42;
		int32_t L_43 = V_1;
		if (!L_43)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_44 = V_1;
		return L_44;
	}

IL_00c6:
	{
		RuntimeObject* L_45 = ___1_comparer;
		il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_46);
		il2cpp_codegen_memcpy(L_48, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(L_48, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		RuntimeObject* L_50 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_49);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_45, L_47, L_50);
		V_1 = L_51;
		int32_t L_52 = V_1;
		if (!L_52)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_53 = V_1;
		return L_53;
	}

IL_00e8:
	{
		RuntimeObject* L_54 = ___1_comparer;
		il2cpp_codegen_memcpy(L_55, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_56 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_55);
		il2cpp_codegen_memcpy(L_57, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_58, il2cpp_codegen_get_instance_field_data_pointer(L_57, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_59 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_58);
		int32_t L_60;
		L_60 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_54, L_56, L_59);
		V_1 = L_60;
		int32_t L_61 = V_1;
		if (!L_61)
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_62 = V_1;
		return L_62;
	}

IL_010a:
	{
		RuntimeObject* L_63 = ___1_comparer;
		il2cpp_codegen_memcpy(L_64, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_64);
		il2cpp_codegen_memcpy(L_66, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_67, il2cpp_codegen_get_instance_field_data_pointer(L_66, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_68 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_67);
		int32_t L_69;
		L_69 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_63, L_65, L_68);
		V_1 = L_69;
		int32_t L_70 = V_1;
		if (!L_70)
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_71 = V_1;
		return L_71;
	}

IL_012c:
	{
		RuntimeObject* L_72 = ___1_comparer;
		il2cpp_codegen_memcpy(L_73, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		RuntimeObject* L_74 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_73);
		il2cpp_codegen_memcpy(L_75, V_0, SizeOf_ValueTuple_8_t3C21099E0A4DA1FA49F0CF6F4D77E4A5389DFBBD);
		il2cpp_codegen_memcpy(L_76, il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_76);
		int32_t L_78;
		L_78 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_72, L_74, L_77);
		return L_78;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_mDA0F007332659CDA6ED3E2156DE347F91EB9EBB9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_Collections_IStructuralComparable_CompareTo_mDA0F007332659CDA6ED3E2156DE347F91EB9EBB9(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCode_mFFB8FC3075672FDEC47412793447ACDA1DB90FC1_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_28 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_38 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	void* L_48 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	void* L_58 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_68 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	void* L_86 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	void* L_99 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_109 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	void* L_122 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	void* L_132 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_142 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	void* L_155 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	void* L_165 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	void* L_175 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_185 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	void* L_198 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_208 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	void* L_218 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	void* L_228 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_238 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	void* L_251 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_261 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_271 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	void* L_281 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	void* L_291 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_301 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	void* L_314 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	void* L_324 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_334 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_344 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	void* L_354 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	void* L_364 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_374 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_309 = L_3;
	const Il2CppFullySharedGenericAny L_311 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_312 = L_6;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_15 = L_13;
	const Il2CppFullySharedGenericAny L_246 = L_13;
	const Il2CppFullySharedGenericAny L_248 = L_13;
	const Il2CppFullySharedGenericAny L_319 = L_13;
	const Il2CppFullySharedGenericAny L_321 = L_13;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_249 = L_16;
	const Il2CppFullySharedGenericAny L_322 = L_16;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_25 = L_23;
	const Il2CppFullySharedGenericAny L_193 = L_23;
	const Il2CppFullySharedGenericAny L_195 = L_23;
	const Il2CppFullySharedGenericAny L_256 = L_23;
	const Il2CppFullySharedGenericAny L_258 = L_23;
	const Il2CppFullySharedGenericAny L_329 = L_23;
	const Il2CppFullySharedGenericAny L_331 = L_23;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_196 = L_26;
	const Il2CppFullySharedGenericAny L_259 = L_26;
	const Il2CppFullySharedGenericAny L_332 = L_26;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_35 = L_33;
	const Il2CppFullySharedGenericAny L_150 = L_33;
	const Il2CppFullySharedGenericAny L_152 = L_33;
	const Il2CppFullySharedGenericAny L_203 = L_33;
	const Il2CppFullySharedGenericAny L_205 = L_33;
	const Il2CppFullySharedGenericAny L_266 = L_33;
	const Il2CppFullySharedGenericAny L_268 = L_33;
	const Il2CppFullySharedGenericAny L_339 = L_33;
	const Il2CppFullySharedGenericAny L_341 = L_33;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_153 = L_36;
	const Il2CppFullySharedGenericAny L_206 = L_36;
	const Il2CppFullySharedGenericAny L_269 = L_36;
	const Il2CppFullySharedGenericAny L_342 = L_36;
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_45 = L_43;
	const Il2CppFullySharedGenericAny L_117 = L_43;
	const Il2CppFullySharedGenericAny L_119 = L_43;
	const Il2CppFullySharedGenericAny L_160 = L_43;
	const Il2CppFullySharedGenericAny L_162 = L_43;
	const Il2CppFullySharedGenericAny L_213 = L_43;
	const Il2CppFullySharedGenericAny L_215 = L_43;
	const Il2CppFullySharedGenericAny L_276 = L_43;
	const Il2CppFullySharedGenericAny L_278 = L_43;
	const Il2CppFullySharedGenericAny L_349 = L_43;
	const Il2CppFullySharedGenericAny L_351 = L_43;
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_120 = L_46;
	const Il2CppFullySharedGenericAny L_163 = L_46;
	const Il2CppFullySharedGenericAny L_216 = L_46;
	const Il2CppFullySharedGenericAny L_279 = L_46;
	const Il2CppFullySharedGenericAny L_352 = L_46;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_55 = L_53;
	const Il2CppFullySharedGenericAny L_94 = L_53;
	const Il2CppFullySharedGenericAny L_96 = L_53;
	const Il2CppFullySharedGenericAny L_127 = L_53;
	const Il2CppFullySharedGenericAny L_129 = L_53;
	const Il2CppFullySharedGenericAny L_170 = L_53;
	const Il2CppFullySharedGenericAny L_172 = L_53;
	const Il2CppFullySharedGenericAny L_223 = L_53;
	const Il2CppFullySharedGenericAny L_225 = L_53;
	const Il2CppFullySharedGenericAny L_286 = L_53;
	const Il2CppFullySharedGenericAny L_288 = L_53;
	const Il2CppFullySharedGenericAny L_359 = L_53;
	const Il2CppFullySharedGenericAny L_361 = L_53;
	const Il2CppFullySharedGenericAny L_56 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_97 = L_56;
	const Il2CppFullySharedGenericAny L_130 = L_56;
	const Il2CppFullySharedGenericAny L_173 = L_56;
	const Il2CppFullySharedGenericAny L_226 = L_56;
	const Il2CppFullySharedGenericAny L_289 = L_56;
	const Il2CppFullySharedGenericAny L_362 = L_56;
	const Il2CppFullySharedGenericAny L_63 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_65 = L_63;
	const Il2CppFullySharedGenericAny L_81 = L_63;
	const Il2CppFullySharedGenericAny L_83 = L_63;
	const Il2CppFullySharedGenericAny L_104 = L_63;
	const Il2CppFullySharedGenericAny L_106 = L_63;
	const Il2CppFullySharedGenericAny L_137 = L_63;
	const Il2CppFullySharedGenericAny L_139 = L_63;
	const Il2CppFullySharedGenericAny L_180 = L_63;
	const Il2CppFullySharedGenericAny L_182 = L_63;
	const Il2CppFullySharedGenericAny L_233 = L_63;
	const Il2CppFullySharedGenericAny L_235 = L_63;
	const Il2CppFullySharedGenericAny L_296 = L_63;
	const Il2CppFullySharedGenericAny L_298 = L_63;
	const Il2CppFullySharedGenericAny L_369 = L_63;
	const Il2CppFullySharedGenericAny L_371 = L_63;
	const Il2CppFullySharedGenericAny L_66 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_84 = L_66;
	const Il2CppFullySharedGenericAny L_107 = L_66;
	const Il2CppFullySharedGenericAny L_140 = L_66;
	const Il2CppFullySharedGenericAny L_183 = L_66;
	const Il2CppFullySharedGenericAny L_236 = L_66;
	const Il2CppFullySharedGenericAny L_299 = L_66;
	const Il2CppFullySharedGenericAny L_372 = L_66;
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	memset(V_3, 0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	memset(V_4, 0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(V_5, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(V_6, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(V_7, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(V_8, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(V_9, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	Il2CppFullySharedGenericAny* G_B4_0 = NULL;
	Il2CppFullySharedGenericAny* G_B2_0 = NULL;
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	memset(G_B3_0, 0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	int32_t G_B5_0 = 0;
	Il2CppFullySharedGenericAny* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	memset(G_B7_0, 0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	int32_t G_B7_1 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	Il2CppFullySharedGenericAny* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	Il2CppFullySharedGenericAny* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	Il2CppFullySharedGenericAny G_B11_0 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(G_B11_0, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	Il2CppFullySharedGenericAny* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	Il2CppFullySharedGenericAny* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	Il2CppFullySharedGenericAny G_B15_0 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(G_B15_0, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	Il2CppFullySharedGenericAny* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	Il2CppFullySharedGenericAny* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	Il2CppFullySharedGenericAny G_B19_0 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(G_B19_0, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B21_2 = 0;
	int32_t G_B21_3 = 0;
	int32_t G_B21_4 = 0;
	Il2CppFullySharedGenericAny* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	int32_t G_B24_2 = 0;
	int32_t G_B24_3 = 0;
	int32_t G_B24_4 = 0;
	int32_t G_B24_5 = 0;
	Il2CppFullySharedGenericAny* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	int32_t G_B22_2 = 0;
	int32_t G_B22_3 = 0;
	int32_t G_B22_4 = 0;
	int32_t G_B22_5 = 0;
	Il2CppFullySharedGenericAny G_B23_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B23_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t G_B23_3 = 0;
	int32_t G_B23_4 = 0;
	int32_t G_B23_5 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	int32_t G_B25_2 = 0;
	int32_t G_B25_3 = 0;
	int32_t G_B25_4 = 0;
	int32_t G_B25_5 = 0;
	Il2CppFullySharedGenericAny* G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	int32_t G_B28_2 = 0;
	int32_t G_B28_3 = 0;
	int32_t G_B28_4 = 0;
	int32_t G_B28_5 = 0;
	int32_t G_B28_6 = 0;
	Il2CppFullySharedGenericAny* G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	int32_t G_B26_2 = 0;
	int32_t G_B26_3 = 0;
	int32_t G_B26_4 = 0;
	int32_t G_B26_5 = 0;
	int32_t G_B26_6 = 0;
	Il2CppFullySharedGenericAny G_B27_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B27_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B27_1 = 0;
	int32_t G_B27_2 = 0;
	int32_t G_B27_3 = 0;
	int32_t G_B27_4 = 0;
	int32_t G_B27_5 = 0;
	int32_t G_B27_6 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B29_1 = 0;
	int32_t G_B29_2 = 0;
	int32_t G_B29_3 = 0;
	int32_t G_B29_4 = 0;
	int32_t G_B29_5 = 0;
	int32_t G_B29_6 = 0;
	Il2CppFullySharedGenericAny* G_B37_0 = NULL;
	Il2CppFullySharedGenericAny* G_B35_0 = NULL;
	Il2CppFullySharedGenericAny G_B36_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B36_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B38_0 = 0;
	Il2CppFullySharedGenericAny* G_B42_0 = NULL;
	Il2CppFullySharedGenericAny* G_B40_0 = NULL;
	Il2CppFullySharedGenericAny G_B41_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B41_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B43_0 = 0;
	Il2CppFullySharedGenericAny* G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	Il2CppFullySharedGenericAny* G_B44_0 = NULL;
	int32_t G_B44_1 = 0;
	Il2CppFullySharedGenericAny G_B45_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B45_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B45_1 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B47_1 = 0;
	Il2CppFullySharedGenericAny* G_B51_0 = NULL;
	Il2CppFullySharedGenericAny* G_B49_0 = NULL;
	Il2CppFullySharedGenericAny G_B50_0 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(G_B50_0, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	int32_t G_B52_0 = 0;
	Il2CppFullySharedGenericAny* G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	Il2CppFullySharedGenericAny* G_B53_0 = NULL;
	int32_t G_B53_1 = 0;
	Il2CppFullySharedGenericAny G_B54_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B54_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B54_1 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B56_1 = 0;
	Il2CppFullySharedGenericAny* G_B59_0 = NULL;
	int32_t G_B59_1 = 0;
	int32_t G_B59_2 = 0;
	Il2CppFullySharedGenericAny* G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	int32_t G_B57_2 = 0;
	Il2CppFullySharedGenericAny G_B58_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B58_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B58_1 = 0;
	int32_t G_B58_2 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B60_1 = 0;
	int32_t G_B60_2 = 0;
	Il2CppFullySharedGenericAny* G_B64_0 = NULL;
	Il2CppFullySharedGenericAny* G_B62_0 = NULL;
	Il2CppFullySharedGenericAny G_B63_0 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(G_B63_0, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	int32_t G_B65_0 = 0;
	Il2CppFullySharedGenericAny* G_B68_0 = NULL;
	int32_t G_B68_1 = 0;
	Il2CppFullySharedGenericAny* G_B66_0 = NULL;
	int32_t G_B66_1 = 0;
	Il2CppFullySharedGenericAny G_B67_0 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(G_B67_0, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	int32_t G_B67_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B69_1 = 0;
	Il2CppFullySharedGenericAny* G_B72_0 = NULL;
	int32_t G_B72_1 = 0;
	int32_t G_B72_2 = 0;
	Il2CppFullySharedGenericAny* G_B70_0 = NULL;
	int32_t G_B70_1 = 0;
	int32_t G_B70_2 = 0;
	Il2CppFullySharedGenericAny G_B71_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B71_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B71_1 = 0;
	int32_t G_B71_2 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B73_2 = 0;
	Il2CppFullySharedGenericAny* G_B76_0 = NULL;
	int32_t G_B76_1 = 0;
	int32_t G_B76_2 = 0;
	int32_t G_B76_3 = 0;
	Il2CppFullySharedGenericAny* G_B74_0 = NULL;
	int32_t G_B74_1 = 0;
	int32_t G_B74_2 = 0;
	int32_t G_B74_3 = 0;
	Il2CppFullySharedGenericAny G_B75_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B75_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B75_1 = 0;
	int32_t G_B75_2 = 0;
	int32_t G_B75_3 = 0;
	int32_t G_B77_0 = 0;
	int32_t G_B77_1 = 0;
	int32_t G_B77_2 = 0;
	int32_t G_B77_3 = 0;
	Il2CppFullySharedGenericAny* G_B81_0 = NULL;
	Il2CppFullySharedGenericAny* G_B79_0 = NULL;
	Il2CppFullySharedGenericAny G_B80_0 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(G_B80_0, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	int32_t G_B82_0 = 0;
	Il2CppFullySharedGenericAny* G_B85_0 = NULL;
	int32_t G_B85_1 = 0;
	Il2CppFullySharedGenericAny* G_B83_0 = NULL;
	int32_t G_B83_1 = 0;
	Il2CppFullySharedGenericAny G_B84_0 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(G_B84_0, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	int32_t G_B84_1 = 0;
	int32_t G_B86_0 = 0;
	int32_t G_B86_1 = 0;
	Il2CppFullySharedGenericAny* G_B89_0 = NULL;
	int32_t G_B89_1 = 0;
	int32_t G_B89_2 = 0;
	Il2CppFullySharedGenericAny* G_B87_0 = NULL;
	int32_t G_B87_1 = 0;
	int32_t G_B87_2 = 0;
	Il2CppFullySharedGenericAny G_B88_0 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(G_B88_0, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	int32_t G_B88_1 = 0;
	int32_t G_B88_2 = 0;
	int32_t G_B90_0 = 0;
	int32_t G_B90_1 = 0;
	int32_t G_B90_2 = 0;
	Il2CppFullySharedGenericAny* G_B93_0 = NULL;
	int32_t G_B93_1 = 0;
	int32_t G_B93_2 = 0;
	int32_t G_B93_3 = 0;
	Il2CppFullySharedGenericAny* G_B91_0 = NULL;
	int32_t G_B91_1 = 0;
	int32_t G_B91_2 = 0;
	int32_t G_B91_3 = 0;
	Il2CppFullySharedGenericAny G_B92_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B92_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B92_1 = 0;
	int32_t G_B92_2 = 0;
	int32_t G_B92_3 = 0;
	int32_t G_B94_0 = 0;
	int32_t G_B94_1 = 0;
	int32_t G_B94_2 = 0;
	int32_t G_B94_3 = 0;
	Il2CppFullySharedGenericAny* G_B97_0 = NULL;
	int32_t G_B97_1 = 0;
	int32_t G_B97_2 = 0;
	int32_t G_B97_3 = 0;
	int32_t G_B97_4 = 0;
	Il2CppFullySharedGenericAny* G_B95_0 = NULL;
	int32_t G_B95_1 = 0;
	int32_t G_B95_2 = 0;
	int32_t G_B95_3 = 0;
	int32_t G_B95_4 = 0;
	Il2CppFullySharedGenericAny G_B96_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B96_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B96_1 = 0;
	int32_t G_B96_2 = 0;
	int32_t G_B96_3 = 0;
	int32_t G_B96_4 = 0;
	int32_t G_B98_0 = 0;
	int32_t G_B98_1 = 0;
	int32_t G_B98_2 = 0;
	int32_t G_B98_3 = 0;
	int32_t G_B98_4 = 0;
	Il2CppFullySharedGenericAny* G_B102_0 = NULL;
	Il2CppFullySharedGenericAny* G_B100_0 = NULL;
	Il2CppFullySharedGenericAny G_B101_0 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	memset(G_B101_0, 0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	int32_t G_B103_0 = 0;
	Il2CppFullySharedGenericAny* G_B106_0 = NULL;
	int32_t G_B106_1 = 0;
	Il2CppFullySharedGenericAny* G_B104_0 = NULL;
	int32_t G_B104_1 = 0;
	Il2CppFullySharedGenericAny G_B105_0 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(G_B105_0, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	int32_t G_B105_1 = 0;
	int32_t G_B107_0 = 0;
	int32_t G_B107_1 = 0;
	Il2CppFullySharedGenericAny* G_B110_0 = NULL;
	int32_t G_B110_1 = 0;
	int32_t G_B110_2 = 0;
	Il2CppFullySharedGenericAny* G_B108_0 = NULL;
	int32_t G_B108_1 = 0;
	int32_t G_B108_2 = 0;
	Il2CppFullySharedGenericAny G_B109_0 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(G_B109_0, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	int32_t G_B109_1 = 0;
	int32_t G_B109_2 = 0;
	int32_t G_B111_0 = 0;
	int32_t G_B111_1 = 0;
	int32_t G_B111_2 = 0;
	Il2CppFullySharedGenericAny* G_B114_0 = NULL;
	int32_t G_B114_1 = 0;
	int32_t G_B114_2 = 0;
	int32_t G_B114_3 = 0;
	Il2CppFullySharedGenericAny* G_B112_0 = NULL;
	int32_t G_B112_1 = 0;
	int32_t G_B112_2 = 0;
	int32_t G_B112_3 = 0;
	Il2CppFullySharedGenericAny G_B113_0 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(G_B113_0, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	int32_t G_B113_1 = 0;
	int32_t G_B113_2 = 0;
	int32_t G_B113_3 = 0;
	int32_t G_B115_0 = 0;
	int32_t G_B115_1 = 0;
	int32_t G_B115_2 = 0;
	int32_t G_B115_3 = 0;
	Il2CppFullySharedGenericAny* G_B118_0 = NULL;
	int32_t G_B118_1 = 0;
	int32_t G_B118_2 = 0;
	int32_t G_B118_3 = 0;
	int32_t G_B118_4 = 0;
	Il2CppFullySharedGenericAny* G_B116_0 = NULL;
	int32_t G_B116_1 = 0;
	int32_t G_B116_2 = 0;
	int32_t G_B116_3 = 0;
	int32_t G_B116_4 = 0;
	Il2CppFullySharedGenericAny G_B117_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B117_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B117_1 = 0;
	int32_t G_B117_2 = 0;
	int32_t G_B117_3 = 0;
	int32_t G_B117_4 = 0;
	int32_t G_B119_0 = 0;
	int32_t G_B119_1 = 0;
	int32_t G_B119_2 = 0;
	int32_t G_B119_3 = 0;
	int32_t G_B119_4 = 0;
	Il2CppFullySharedGenericAny* G_B122_0 = NULL;
	int32_t G_B122_1 = 0;
	int32_t G_B122_2 = 0;
	int32_t G_B122_3 = 0;
	int32_t G_B122_4 = 0;
	int32_t G_B122_5 = 0;
	Il2CppFullySharedGenericAny* G_B120_0 = NULL;
	int32_t G_B120_1 = 0;
	int32_t G_B120_2 = 0;
	int32_t G_B120_3 = 0;
	int32_t G_B120_4 = 0;
	int32_t G_B120_5 = 0;
	Il2CppFullySharedGenericAny G_B121_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B121_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B121_1 = 0;
	int32_t G_B121_2 = 0;
	int32_t G_B121_3 = 0;
	int32_t G_B121_4 = 0;
	int32_t G_B121_5 = 0;
	int32_t G_B123_0 = 0;
	int32_t G_B123_1 = 0;
	int32_t G_B123_2 = 0;
	int32_t G_B123_3 = 0;
	int32_t G_B123_4 = 0;
	int32_t G_B123_5 = 0;
	Il2CppFullySharedGenericAny* G_B127_0 = NULL;
	Il2CppFullySharedGenericAny* G_B125_0 = NULL;
	Il2CppFullySharedGenericAny G_B126_0 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	memset(G_B126_0, 0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	int32_t G_B128_0 = 0;
	Il2CppFullySharedGenericAny* G_B131_0 = NULL;
	int32_t G_B131_1 = 0;
	Il2CppFullySharedGenericAny* G_B129_0 = NULL;
	int32_t G_B129_1 = 0;
	Il2CppFullySharedGenericAny G_B130_0 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	memset(G_B130_0, 0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	int32_t G_B130_1 = 0;
	int32_t G_B132_0 = 0;
	int32_t G_B132_1 = 0;
	Il2CppFullySharedGenericAny* G_B135_0 = NULL;
	int32_t G_B135_1 = 0;
	int32_t G_B135_2 = 0;
	Il2CppFullySharedGenericAny* G_B133_0 = NULL;
	int32_t G_B133_1 = 0;
	int32_t G_B133_2 = 0;
	Il2CppFullySharedGenericAny G_B134_0 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(G_B134_0, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	int32_t G_B134_1 = 0;
	int32_t G_B134_2 = 0;
	int32_t G_B136_0 = 0;
	int32_t G_B136_1 = 0;
	int32_t G_B136_2 = 0;
	Il2CppFullySharedGenericAny* G_B139_0 = NULL;
	int32_t G_B139_1 = 0;
	int32_t G_B139_2 = 0;
	int32_t G_B139_3 = 0;
	Il2CppFullySharedGenericAny* G_B137_0 = NULL;
	int32_t G_B137_1 = 0;
	int32_t G_B137_2 = 0;
	int32_t G_B137_3 = 0;
	Il2CppFullySharedGenericAny G_B138_0 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(G_B138_0, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	int32_t G_B138_1 = 0;
	int32_t G_B138_2 = 0;
	int32_t G_B138_3 = 0;
	int32_t G_B140_0 = 0;
	int32_t G_B140_1 = 0;
	int32_t G_B140_2 = 0;
	int32_t G_B140_3 = 0;
	Il2CppFullySharedGenericAny* G_B143_0 = NULL;
	int32_t G_B143_1 = 0;
	int32_t G_B143_2 = 0;
	int32_t G_B143_3 = 0;
	int32_t G_B143_4 = 0;
	Il2CppFullySharedGenericAny* G_B141_0 = NULL;
	int32_t G_B141_1 = 0;
	int32_t G_B141_2 = 0;
	int32_t G_B141_3 = 0;
	int32_t G_B141_4 = 0;
	Il2CppFullySharedGenericAny G_B142_0 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(G_B142_0, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	int32_t G_B142_1 = 0;
	int32_t G_B142_2 = 0;
	int32_t G_B142_3 = 0;
	int32_t G_B142_4 = 0;
	int32_t G_B144_0 = 0;
	int32_t G_B144_1 = 0;
	int32_t G_B144_2 = 0;
	int32_t G_B144_3 = 0;
	int32_t G_B144_4 = 0;
	Il2CppFullySharedGenericAny* G_B147_0 = NULL;
	int32_t G_B147_1 = 0;
	int32_t G_B147_2 = 0;
	int32_t G_B147_3 = 0;
	int32_t G_B147_4 = 0;
	int32_t G_B147_5 = 0;
	Il2CppFullySharedGenericAny* G_B145_0 = NULL;
	int32_t G_B145_1 = 0;
	int32_t G_B145_2 = 0;
	int32_t G_B145_3 = 0;
	int32_t G_B145_4 = 0;
	int32_t G_B145_5 = 0;
	Il2CppFullySharedGenericAny G_B146_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B146_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B146_1 = 0;
	int32_t G_B146_2 = 0;
	int32_t G_B146_3 = 0;
	int32_t G_B146_4 = 0;
	int32_t G_B146_5 = 0;
	int32_t G_B148_0 = 0;
	int32_t G_B148_1 = 0;
	int32_t G_B148_2 = 0;
	int32_t G_B148_3 = 0;
	int32_t G_B148_4 = 0;
	int32_t G_B148_5 = 0;
	Il2CppFullySharedGenericAny* G_B151_0 = NULL;
	int32_t G_B151_1 = 0;
	int32_t G_B151_2 = 0;
	int32_t G_B151_3 = 0;
	int32_t G_B151_4 = 0;
	int32_t G_B151_5 = 0;
	int32_t G_B151_6 = 0;
	Il2CppFullySharedGenericAny* G_B149_0 = NULL;
	int32_t G_B149_1 = 0;
	int32_t G_B149_2 = 0;
	int32_t G_B149_3 = 0;
	int32_t G_B149_4 = 0;
	int32_t G_B149_5 = 0;
	int32_t G_B149_6 = 0;
	Il2CppFullySharedGenericAny G_B150_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B150_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B150_1 = 0;
	int32_t G_B150_2 = 0;
	int32_t G_B150_3 = 0;
	int32_t G_B150_4 = 0;
	int32_t G_B150_5 = 0;
	int32_t G_B150_6 = 0;
	int32_t G_B152_0 = 0;
	int32_t G_B152_1 = 0;
	int32_t G_B152_2 = 0;
	int32_t G_B152_3 = 0;
	int32_t G_B152_4 = 0;
	int32_t G_B152_5 = 0;
	int32_t G_B152_6 = 0;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		RuntimeObject* L_1 = il2cpp_codegen_isinst_runtime(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_0);;
		V_0 = (RuntimeObject*)L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_01a2;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_3, V_3, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3);
		if (L_4)
		{
			G_B4_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
			goto IL_0041;
		}
		G_B2_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(V_3, L_5, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_6, V_3, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_6);
		if (L_7)
		{
			G_B4_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			goto IL_0041;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	}
	{
		G_B5_0 = 0;
		goto IL_004c;
	}

IL_0041:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 76), (void*)G_B4_0, &L_9, L_8);
		typedef int32_t ( *func_L_11)(void*,const RuntimeMethod*);
		int32_t L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B5_0 = L_12;
	}

IL_004c:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_13, V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_13);
		if (L_14)
		{
			G_B8_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
			G_B8_1 = G_B5_0;
			goto IL_0079;
		}
		G_B6_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
		G_B6_1 = G_B5_0;
	}
	{
		il2cpp_codegen_memcpy(L_15, G_B6_0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(V_4, L_15, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_16, V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_17 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_16);
		if (L_17)
		{
			G_B8_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B8_1 = G_B6_1;
			goto IL_0079;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		G_B7_1 = G_B6_1;
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_1;
		goto IL_0084;
	}

IL_0079:
	{
		Il2CppConstrainedCallData L_19;
		Il2CppMethodPointer L_20 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77), (void*)G_B8_0, &L_19, L_18);
		typedef int32_t ( *func_L_21)(void*,const RuntimeMethod*);
		int32_t L_22 = ((func_L_21)L_20)(L_19.thisPtr,L_19.method);
		G_B9_0 = L_22;
		G_B9_1 = G_B8_1;
	}

IL_0084:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_23, V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_23);
		if (L_24)
		{
			G_B12_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
			G_B12_1 = G_B9_0;
			G_B12_2 = G_B9_1;
			goto IL_00b1;
		}
		G_B10_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}
	{
		il2cpp_codegen_memcpy(L_25, G_B10_0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(V_5, L_25, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_26, V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_27 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_26);
		if (L_27)
		{
			G_B12_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_5);
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			goto IL_00b1;
		}
		il2cpp_codegen_memcpy(G_B11_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_1;
		G_B13_2 = G_B11_2;
		goto IL_00bc;
	}

IL_00b1:
	{
		Il2CppConstrainedCallData L_29;
		Il2CppMethodPointer L_30 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 78), (void*)G_B12_0, &L_29, L_28);
		typedef int32_t ( *func_L_31)(void*,const RuntimeMethod*);
		int32_t L_32 = ((func_L_31)L_30)(L_29.thisPtr,L_29.method);
		G_B13_0 = L_32;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
	}

IL_00bc:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_33, V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_34 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_33);
		if (L_34)
		{
			G_B16_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
			G_B16_1 = G_B13_0;
			G_B16_2 = G_B13_1;
			G_B16_3 = G_B13_2;
			goto IL_00e9;
		}
		G_B14_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
	}
	{
		il2cpp_codegen_memcpy(L_35, G_B14_0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(V_6, L_35, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_36, V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_37 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_36);
		if (L_37)
		{
			G_B16_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_6);
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			G_B16_3 = G_B14_3;
			goto IL_00e9;
		}
		il2cpp_codegen_memcpy(G_B15_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_1;
		G_B17_2 = G_B15_2;
		G_B17_3 = G_B15_3;
		goto IL_00f4;
	}

IL_00e9:
	{
		Il2CppConstrainedCallData L_39;
		Il2CppMethodPointer L_40 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 79), (void*)G_B16_0, &L_39, L_38);
		typedef int32_t ( *func_L_41)(void*,const RuntimeMethod*);
		int32_t L_42 = ((func_L_41)L_40)(L_39.thisPtr,L_39.method);
		G_B17_0 = L_42;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_00f4:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_43, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_44 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_43);
		if (L_44)
		{
			G_B20_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
			G_B20_1 = G_B17_0;
			G_B20_2 = G_B17_1;
			G_B20_3 = G_B17_2;
			G_B20_4 = G_B17_3;
			goto IL_0121;
		}
		G_B18_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
		G_B18_4 = G_B17_3;
	}
	{
		il2cpp_codegen_memcpy(L_45, G_B18_0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(V_7, L_45, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_46, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_47 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_46);
		if (L_47)
		{
			G_B20_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			G_B20_1 = G_B18_1;
			G_B20_2 = G_B18_2;
			G_B20_3 = G_B18_3;
			G_B20_4 = G_B18_4;
			goto IL_0121;
		}
		il2cpp_codegen_memcpy(G_B19_0, (Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
		G_B19_3 = G_B18_3;
		G_B19_4 = G_B18_4;
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_1;
		G_B21_2 = G_B19_2;
		G_B21_3 = G_B19_3;
		G_B21_4 = G_B19_4;
		goto IL_012c;
	}

IL_0121:
	{
		Il2CppConstrainedCallData L_49;
		Il2CppMethodPointer L_50 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 80), (void*)G_B20_0, &L_49, L_48);
		typedef int32_t ( *func_L_51)(void*,const RuntimeMethod*);
		int32_t L_52 = ((func_L_51)L_50)(L_49.thisPtr,L_49.method);
		G_B21_0 = L_52;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
		G_B21_4 = G_B20_4;
	}

IL_012c:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_53, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_54 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_53);
		if (L_54)
		{
			G_B24_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			G_B24_1 = G_B21_0;
			G_B24_2 = G_B21_1;
			G_B24_3 = G_B21_2;
			G_B24_4 = G_B21_3;
			G_B24_5 = G_B21_4;
			goto IL_0159;
		}
		G_B22_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
		G_B22_3 = G_B21_2;
		G_B22_4 = G_B21_3;
		G_B22_5 = G_B21_4;
	}
	{
		il2cpp_codegen_memcpy(L_55, G_B22_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_8, L_55, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_56, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_57 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_56);
		if (L_57)
		{
			G_B24_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_8);
			G_B24_1 = G_B22_1;
			G_B24_2 = G_B22_2;
			G_B24_3 = G_B22_3;
			G_B24_4 = G_B22_4;
			G_B24_5 = G_B22_5;
			goto IL_0159;
		}
		il2cpp_codegen_memcpy(G_B23_0, (Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		G_B23_3 = G_B22_3;
		G_B23_4 = G_B22_4;
		G_B23_5 = G_B22_5;
	}
	{
		G_B25_0 = 0;
		G_B25_1 = G_B23_1;
		G_B25_2 = G_B23_2;
		G_B25_3 = G_B23_3;
		G_B25_4 = G_B23_4;
		G_B25_5 = G_B23_5;
		goto IL_0164;
	}

IL_0159:
	{
		Il2CppConstrainedCallData L_59;
		Il2CppMethodPointer L_60 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 81), (void*)G_B24_0, &L_59, L_58);
		typedef int32_t ( *func_L_61)(void*,const RuntimeMethod*);
		int32_t L_62 = ((func_L_61)L_60)(L_59.thisPtr,L_59.method);
		G_B25_0 = L_62;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
		G_B25_3 = G_B24_3;
		G_B25_4 = G_B24_4;
		G_B25_5 = G_B24_5;
	}

IL_0164:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_63, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_64 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_63);
		if (L_64)
		{
			G_B28_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B28_1 = G_B25_0;
			G_B28_2 = G_B25_1;
			G_B28_3 = G_B25_2;
			G_B28_4 = G_B25_3;
			G_B28_5 = G_B25_4;
			G_B28_6 = G_B25_5;
			goto IL_0191;
		}
		G_B26_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
		G_B26_4 = G_B25_3;
		G_B26_5 = G_B25_4;
		G_B26_6 = G_B25_5;
	}
	{
		il2cpp_codegen_memcpy(L_65, G_B26_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_9, L_65, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_66, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_67 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_66);
		if (L_67)
		{
			G_B28_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_9);
			G_B28_1 = G_B26_1;
			G_B28_2 = G_B26_2;
			G_B28_3 = G_B26_3;
			G_B28_4 = G_B26_4;
			G_B28_5 = G_B26_5;
			G_B28_6 = G_B26_6;
			goto IL_0191;
		}
		il2cpp_codegen_memcpy(G_B27_0, (Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B27_1 = G_B26_1;
		G_B27_2 = G_B26_2;
		G_B27_3 = G_B26_3;
		G_B27_4 = G_B26_4;
		G_B27_5 = G_B26_5;
		G_B27_6 = G_B26_6;
	}
	{
		G_B29_0 = 0;
		G_B29_1 = G_B27_1;
		G_B29_2 = G_B27_2;
		G_B29_3 = G_B27_3;
		G_B29_4 = G_B27_4;
		G_B29_5 = G_B27_5;
		G_B29_6 = G_B27_6;
		goto IL_019c;
	}

IL_0191:
	{
		Il2CppConstrainedCallData L_69;
		Il2CppMethodPointer L_70 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 82), (void*)G_B28_0, &L_69, L_68);
		typedef int32_t ( *func_L_71)(void*,const RuntimeMethod*);
		int32_t L_72 = ((func_L_71)L_70)(L_69.thisPtr,L_69.method);
		G_B29_0 = L_72;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		G_B29_3 = G_B28_3;
		G_B29_4 = G_B28_4;
		G_B29_5 = G_B28_5;
		G_B29_6 = G_B28_6;
	}

IL_019c:
	{
		int32_t L_73;
		L_73 = ValueTuple_CombineHashCodes_m6E1DDA7CEC83A1504A5210BA9F61BF00E7ACFD49(G_B29_6, G_B29_5, G_B29_4, G_B29_3, G_B29_2, G_B29_1, G_B29_0, NULL);
		return L_73;
	}

IL_01a2:
	{
		RuntimeObject* L_74 = V_0;
		int32_t L_75;
		L_75 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var, (RuntimeObject*)L_74);
		V_1 = L_75;
		int32_t L_76 = V_1;
		if ((((int32_t)L_76) < ((int32_t)8)))
		{
			goto IL_01b4;
		}
	}
	{
		RuntimeObject* L_77 = V_0;
		int32_t L_78;
		L_78 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_77);
		return L_78;
	}

IL_01b4:
	{
		int32_t L_79 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(8, L_79));
		int32_t L_80 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract(L_80, 1)))
		{
			case 0:
			{
				goto IL_01e5;
			}
			case 1:
			{
				goto IL_0229;
			}
			case 2:
			{
				goto IL_02a5;
			}
			case 3:
			{
				goto IL_0359;
			}
			case 4:
			{
				goto IL_0445;
			}
			case 5:
			{
				goto IL_0569;
			}
			case 6:
			{
				goto IL_06c5;
			}
			case 7:
			{
				goto IL_06c5;
			}
		}
	}
	{
		goto IL_0856;
	}

IL_01e5:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_81, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_82 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_81);
		if (L_82)
		{
			G_B37_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			goto IL_0212;
		}
		G_B35_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
	}
	{
		il2cpp_codegen_memcpy(L_83, G_B35_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_9, L_83, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_84, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_85 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_84);
		if (L_85)
		{
			G_B37_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_9);
			goto IL_0212;
		}
		il2cpp_codegen_memcpy(G_B36_0, (Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	}
	{
		G_B38_0 = 0;
		goto IL_021d;
	}

IL_0212:
	{
		Il2CppConstrainedCallData L_87;
		Il2CppMethodPointer L_88 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 82), (void*)G_B37_0, &L_87, L_86);
		typedef int32_t ( *func_L_89)(void*,const RuntimeMethod*);
		int32_t L_90 = ((func_L_89)L_88)(L_87.thisPtr,L_87.method);
		G_B38_0 = L_90;
	}

IL_021d:
	{
		RuntimeObject* L_91 = V_0;
		int32_t L_92;
		L_92 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_91);
		int32_t L_93;
		L_93 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(G_B38_0, L_92, NULL);
		return L_93;
	}

IL_0229:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_94, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_95 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_94);
		if (L_95)
		{
			G_B42_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			goto IL_0256;
		}
		G_B40_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
	}
	{
		il2cpp_codegen_memcpy(L_96, G_B40_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_8, L_96, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_97, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_98 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_97);
		if (L_98)
		{
			G_B42_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_8);
			goto IL_0256;
		}
		il2cpp_codegen_memcpy(G_B41_0, (Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	}
	{
		G_B43_0 = 0;
		goto IL_0261;
	}

IL_0256:
	{
		Il2CppConstrainedCallData L_100;
		Il2CppMethodPointer L_101 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 81), (void*)G_B42_0, &L_100, L_99);
		typedef int32_t ( *func_L_102)(void*,const RuntimeMethod*);
		int32_t L_103 = ((func_L_102)L_101)(L_100.thisPtr,L_100.method);
		G_B43_0 = L_103;
	}

IL_0261:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_104, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_105 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_104);
		if (L_105)
		{
			G_B46_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B46_1 = G_B43_0;
			goto IL_028e;
		}
		G_B44_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B44_1 = G_B43_0;
	}
	{
		il2cpp_codegen_memcpy(L_106, G_B44_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_9, L_106, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_107, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_108 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_107);
		if (L_108)
		{
			G_B46_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_9);
			G_B46_1 = G_B44_1;
			goto IL_028e;
		}
		il2cpp_codegen_memcpy(G_B45_0, (Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B45_1 = G_B44_1;
	}
	{
		G_B47_0 = 0;
		G_B47_1 = G_B45_1;
		goto IL_0299;
	}

IL_028e:
	{
		Il2CppConstrainedCallData L_110;
		Il2CppMethodPointer L_111 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 82), (void*)G_B46_0, &L_110, L_109);
		typedef int32_t ( *func_L_112)(void*,const RuntimeMethod*);
		int32_t L_113 = ((func_L_112)L_111)(L_110.thisPtr,L_110.method);
		G_B47_0 = L_113;
		G_B47_1 = G_B46_1;
	}

IL_0299:
	{
		RuntimeObject* L_114 = V_0;
		int32_t L_115;
		L_115 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_114);
		int32_t L_116;
		L_116 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(G_B47_1, G_B47_0, L_115, NULL);
		return L_116;
	}

IL_02a5:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_117, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_118 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_117);
		if (L_118)
		{
			G_B51_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
			goto IL_02d2;
		}
		G_B49_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
	}
	{
		il2cpp_codegen_memcpy(L_119, G_B49_0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(V_7, L_119, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_120, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_121 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_120);
		if (L_121)
		{
			G_B51_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			goto IL_02d2;
		}
		il2cpp_codegen_memcpy(G_B50_0, (Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	}
	{
		G_B52_0 = 0;
		goto IL_02dd;
	}

IL_02d2:
	{
		Il2CppConstrainedCallData L_123;
		Il2CppMethodPointer L_124 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 80), (void*)G_B51_0, &L_123, L_122);
		typedef int32_t ( *func_L_125)(void*,const RuntimeMethod*);
		int32_t L_126 = ((func_L_125)L_124)(L_123.thisPtr,L_123.method);
		G_B52_0 = L_126;
	}

IL_02dd:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_127, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_128 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_127);
		if (L_128)
		{
			G_B55_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			G_B55_1 = G_B52_0;
			goto IL_030a;
		}
		G_B53_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
		G_B53_1 = G_B52_0;
	}
	{
		il2cpp_codegen_memcpy(L_129, G_B53_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_8, L_129, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_130, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_131 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_130);
		if (L_131)
		{
			G_B55_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_8);
			G_B55_1 = G_B53_1;
			goto IL_030a;
		}
		il2cpp_codegen_memcpy(G_B54_0, (Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		G_B54_1 = G_B53_1;
	}
	{
		G_B56_0 = 0;
		G_B56_1 = G_B54_1;
		goto IL_0315;
	}

IL_030a:
	{
		Il2CppConstrainedCallData L_133;
		Il2CppMethodPointer L_134 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 81), (void*)G_B55_0, &L_133, L_132);
		typedef int32_t ( *func_L_135)(void*,const RuntimeMethod*);
		int32_t L_136 = ((func_L_135)L_134)(L_133.thisPtr,L_133.method);
		G_B56_0 = L_136;
		G_B56_1 = G_B55_1;
	}

IL_0315:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_137, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_138 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_137);
		if (L_138)
		{
			G_B59_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B59_1 = G_B56_0;
			G_B59_2 = G_B56_1;
			goto IL_0342;
		}
		G_B57_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B57_1 = G_B56_0;
		G_B57_2 = G_B56_1;
	}
	{
		il2cpp_codegen_memcpy(L_139, G_B57_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_9, L_139, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_140, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_141 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_140);
		if (L_141)
		{
			G_B59_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_9);
			G_B59_1 = G_B57_1;
			G_B59_2 = G_B57_2;
			goto IL_0342;
		}
		il2cpp_codegen_memcpy(G_B58_0, (Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B58_1 = G_B57_1;
		G_B58_2 = G_B57_2;
	}
	{
		G_B60_0 = 0;
		G_B60_1 = G_B58_1;
		G_B60_2 = G_B58_2;
		goto IL_034d;
	}

IL_0342:
	{
		Il2CppConstrainedCallData L_143;
		Il2CppMethodPointer L_144 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 82), (void*)G_B59_0, &L_143, L_142);
		typedef int32_t ( *func_L_145)(void*,const RuntimeMethod*);
		int32_t L_146 = ((func_L_145)L_144)(L_143.thisPtr,L_143.method);
		G_B60_0 = L_146;
		G_B60_1 = G_B59_1;
		G_B60_2 = G_B59_2;
	}

IL_034d:
	{
		RuntimeObject* L_147 = V_0;
		int32_t L_148;
		L_148 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_147);
		int32_t L_149;
		L_149 = ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813(G_B60_2, G_B60_1, G_B60_0, L_148, NULL);
		return L_149;
	}

IL_0359:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_150, V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_151 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_150);
		if (L_151)
		{
			G_B64_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
			goto IL_0386;
		}
		G_B62_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
	}
	{
		il2cpp_codegen_memcpy(L_152, G_B62_0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(V_6, L_152, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_153, V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_154 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_153);
		if (L_154)
		{
			G_B64_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_6);
			goto IL_0386;
		}
		il2cpp_codegen_memcpy(G_B63_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	}
	{
		G_B65_0 = 0;
		goto IL_0391;
	}

IL_0386:
	{
		Il2CppConstrainedCallData L_156;
		Il2CppMethodPointer L_157 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 79), (void*)G_B64_0, &L_156, L_155);
		typedef int32_t ( *func_L_158)(void*,const RuntimeMethod*);
		int32_t L_159 = ((func_L_158)L_157)(L_156.thisPtr,L_156.method);
		G_B65_0 = L_159;
	}

IL_0391:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_160, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_161 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_160);
		if (L_161)
		{
			G_B68_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
			G_B68_1 = G_B65_0;
			goto IL_03be;
		}
		G_B66_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
		G_B66_1 = G_B65_0;
	}
	{
		il2cpp_codegen_memcpy(L_162, G_B66_0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(V_7, L_162, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_163, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_164 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_163);
		if (L_164)
		{
			G_B68_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			G_B68_1 = G_B66_1;
			goto IL_03be;
		}
		il2cpp_codegen_memcpy(G_B67_0, (Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		G_B67_1 = G_B66_1;
	}
	{
		G_B69_0 = 0;
		G_B69_1 = G_B67_1;
		goto IL_03c9;
	}

IL_03be:
	{
		Il2CppConstrainedCallData L_166;
		Il2CppMethodPointer L_167 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 80), (void*)G_B68_0, &L_166, L_165);
		typedef int32_t ( *func_L_168)(void*,const RuntimeMethod*);
		int32_t L_169 = ((func_L_168)L_167)(L_166.thisPtr,L_166.method);
		G_B69_0 = L_169;
		G_B69_1 = G_B68_1;
	}

IL_03c9:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_170, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_171 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_170);
		if (L_171)
		{
			G_B72_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			G_B72_1 = G_B69_0;
			G_B72_2 = G_B69_1;
			goto IL_03f6;
		}
		G_B70_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
		G_B70_1 = G_B69_0;
		G_B70_2 = G_B69_1;
	}
	{
		il2cpp_codegen_memcpy(L_172, G_B70_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_8, L_172, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_173, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_174 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_173);
		if (L_174)
		{
			G_B72_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_8);
			G_B72_1 = G_B70_1;
			G_B72_2 = G_B70_2;
			goto IL_03f6;
		}
		il2cpp_codegen_memcpy(G_B71_0, (Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		G_B71_1 = G_B70_1;
		G_B71_2 = G_B70_2;
	}
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_1;
		G_B73_2 = G_B71_2;
		goto IL_0401;
	}

IL_03f6:
	{
		Il2CppConstrainedCallData L_176;
		Il2CppMethodPointer L_177 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 81), (void*)G_B72_0, &L_176, L_175);
		typedef int32_t ( *func_L_178)(void*,const RuntimeMethod*);
		int32_t L_179 = ((func_L_178)L_177)(L_176.thisPtr,L_176.method);
		G_B73_0 = L_179;
		G_B73_1 = G_B72_1;
		G_B73_2 = G_B72_2;
	}

IL_0401:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_180, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_181 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_180);
		if (L_181)
		{
			G_B76_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B76_1 = G_B73_0;
			G_B76_2 = G_B73_1;
			G_B76_3 = G_B73_2;
			goto IL_042e;
		}
		G_B74_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B74_1 = G_B73_0;
		G_B74_2 = G_B73_1;
		G_B74_3 = G_B73_2;
	}
	{
		il2cpp_codegen_memcpy(L_182, G_B74_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_9, L_182, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_183, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_184 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_183);
		if (L_184)
		{
			G_B76_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_9);
			G_B76_1 = G_B74_1;
			G_B76_2 = G_B74_2;
			G_B76_3 = G_B74_3;
			goto IL_042e;
		}
		il2cpp_codegen_memcpy(G_B75_0, (Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B75_1 = G_B74_1;
		G_B75_2 = G_B74_2;
		G_B75_3 = G_B74_3;
	}
	{
		G_B77_0 = 0;
		G_B77_1 = G_B75_1;
		G_B77_2 = G_B75_2;
		G_B77_3 = G_B75_3;
		goto IL_0439;
	}

IL_042e:
	{
		Il2CppConstrainedCallData L_186;
		Il2CppMethodPointer L_187 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 82), (void*)G_B76_0, &L_186, L_185);
		typedef int32_t ( *func_L_188)(void*,const RuntimeMethod*);
		int32_t L_189 = ((func_L_188)L_187)(L_186.thisPtr,L_186.method);
		G_B77_0 = L_189;
		G_B77_1 = G_B76_1;
		G_B77_2 = G_B76_2;
		G_B77_3 = G_B76_3;
	}

IL_0439:
	{
		RuntimeObject* L_190 = V_0;
		int32_t L_191;
		L_191 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_190);
		int32_t L_192;
		L_192 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(G_B77_3, G_B77_2, G_B77_1, G_B77_0, L_191, NULL);
		return L_192;
	}

IL_0445:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_193, V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_194 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_193);
		if (L_194)
		{
			G_B81_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
			goto IL_0472;
		}
		G_B79_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
	}
	{
		il2cpp_codegen_memcpy(L_195, G_B79_0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(V_5, L_195, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_196, V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_197 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_196);
		if (L_197)
		{
			G_B81_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_5);
			goto IL_0472;
		}
		il2cpp_codegen_memcpy(G_B80_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	}
	{
		G_B82_0 = 0;
		goto IL_047d;
	}

IL_0472:
	{
		Il2CppConstrainedCallData L_199;
		Il2CppMethodPointer L_200 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 78), (void*)G_B81_0, &L_199, L_198);
		typedef int32_t ( *func_L_201)(void*,const RuntimeMethod*);
		int32_t L_202 = ((func_L_201)L_200)(L_199.thisPtr,L_199.method);
		G_B82_0 = L_202;
	}

IL_047d:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_203, V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_204 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_203);
		if (L_204)
		{
			G_B85_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
			G_B85_1 = G_B82_0;
			goto IL_04aa;
		}
		G_B83_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
		G_B83_1 = G_B82_0;
	}
	{
		il2cpp_codegen_memcpy(L_205, G_B83_0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(V_6, L_205, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_206, V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_207 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_206);
		if (L_207)
		{
			G_B85_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_6);
			G_B85_1 = G_B83_1;
			goto IL_04aa;
		}
		il2cpp_codegen_memcpy(G_B84_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		G_B84_1 = G_B83_1;
	}
	{
		G_B86_0 = 0;
		G_B86_1 = G_B84_1;
		goto IL_04b5;
	}

IL_04aa:
	{
		Il2CppConstrainedCallData L_209;
		Il2CppMethodPointer L_210 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 79), (void*)G_B85_0, &L_209, L_208);
		typedef int32_t ( *func_L_211)(void*,const RuntimeMethod*);
		int32_t L_212 = ((func_L_211)L_210)(L_209.thisPtr,L_209.method);
		G_B86_0 = L_212;
		G_B86_1 = G_B85_1;
	}

IL_04b5:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_213, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_214 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_213);
		if (L_214)
		{
			G_B89_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
			G_B89_1 = G_B86_0;
			G_B89_2 = G_B86_1;
			goto IL_04e2;
		}
		G_B87_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
		G_B87_1 = G_B86_0;
		G_B87_2 = G_B86_1;
	}
	{
		il2cpp_codegen_memcpy(L_215, G_B87_0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(V_7, L_215, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_216, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_217 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_216);
		if (L_217)
		{
			G_B89_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			G_B89_1 = G_B87_1;
			G_B89_2 = G_B87_2;
			goto IL_04e2;
		}
		il2cpp_codegen_memcpy(G_B88_0, (Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		G_B88_1 = G_B87_1;
		G_B88_2 = G_B87_2;
	}
	{
		G_B90_0 = 0;
		G_B90_1 = G_B88_1;
		G_B90_2 = G_B88_2;
		goto IL_04ed;
	}

IL_04e2:
	{
		Il2CppConstrainedCallData L_219;
		Il2CppMethodPointer L_220 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 80), (void*)G_B89_0, &L_219, L_218);
		typedef int32_t ( *func_L_221)(void*,const RuntimeMethod*);
		int32_t L_222 = ((func_L_221)L_220)(L_219.thisPtr,L_219.method);
		G_B90_0 = L_222;
		G_B90_1 = G_B89_1;
		G_B90_2 = G_B89_2;
	}

IL_04ed:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_223, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_224 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_223);
		if (L_224)
		{
			G_B93_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			G_B93_1 = G_B90_0;
			G_B93_2 = G_B90_1;
			G_B93_3 = G_B90_2;
			goto IL_051a;
		}
		G_B91_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
		G_B91_1 = G_B90_0;
		G_B91_2 = G_B90_1;
		G_B91_3 = G_B90_2;
	}
	{
		il2cpp_codegen_memcpy(L_225, G_B91_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_8, L_225, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_226, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_227 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_226);
		if (L_227)
		{
			G_B93_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_8);
			G_B93_1 = G_B91_1;
			G_B93_2 = G_B91_2;
			G_B93_3 = G_B91_3;
			goto IL_051a;
		}
		il2cpp_codegen_memcpy(G_B92_0, (Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		G_B92_1 = G_B91_1;
		G_B92_2 = G_B91_2;
		G_B92_3 = G_B91_3;
	}
	{
		G_B94_0 = 0;
		G_B94_1 = G_B92_1;
		G_B94_2 = G_B92_2;
		G_B94_3 = G_B92_3;
		goto IL_0525;
	}

IL_051a:
	{
		Il2CppConstrainedCallData L_229;
		Il2CppMethodPointer L_230 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 81), (void*)G_B93_0, &L_229, L_228);
		typedef int32_t ( *func_L_231)(void*,const RuntimeMethod*);
		int32_t L_232 = ((func_L_231)L_230)(L_229.thisPtr,L_229.method);
		G_B94_0 = L_232;
		G_B94_1 = G_B93_1;
		G_B94_2 = G_B93_2;
		G_B94_3 = G_B93_3;
	}

IL_0525:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_233, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_234 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_233);
		if (L_234)
		{
			G_B97_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B97_1 = G_B94_0;
			G_B97_2 = G_B94_1;
			G_B97_3 = G_B94_2;
			G_B97_4 = G_B94_3;
			goto IL_0552;
		}
		G_B95_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B95_1 = G_B94_0;
		G_B95_2 = G_B94_1;
		G_B95_3 = G_B94_2;
		G_B95_4 = G_B94_3;
	}
	{
		il2cpp_codegen_memcpy(L_235, G_B95_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_9, L_235, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_236, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_237 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_236);
		if (L_237)
		{
			G_B97_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_9);
			G_B97_1 = G_B95_1;
			G_B97_2 = G_B95_2;
			G_B97_3 = G_B95_3;
			G_B97_4 = G_B95_4;
			goto IL_0552;
		}
		il2cpp_codegen_memcpy(G_B96_0, (Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B96_1 = G_B95_1;
		G_B96_2 = G_B95_2;
		G_B96_3 = G_B95_3;
		G_B96_4 = G_B95_4;
	}
	{
		G_B98_0 = 0;
		G_B98_1 = G_B96_1;
		G_B98_2 = G_B96_2;
		G_B98_3 = G_B96_3;
		G_B98_4 = G_B96_4;
		goto IL_055d;
	}

IL_0552:
	{
		Il2CppConstrainedCallData L_239;
		Il2CppMethodPointer L_240 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 82), (void*)G_B97_0, &L_239, L_238);
		typedef int32_t ( *func_L_241)(void*,const RuntimeMethod*);
		int32_t L_242 = ((func_L_241)L_240)(L_239.thisPtr,L_239.method);
		G_B98_0 = L_242;
		G_B98_1 = G_B97_1;
		G_B98_2 = G_B97_2;
		G_B98_3 = G_B97_3;
		G_B98_4 = G_B97_4;
	}

IL_055d:
	{
		RuntimeObject* L_243 = V_0;
		int32_t L_244;
		L_244 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_243);
		int32_t L_245;
		L_245 = ValueTuple_CombineHashCodes_m62423C878D7CB18B74DAA96483AD008367FF6BF8(G_B98_4, G_B98_3, G_B98_2, G_B98_1, G_B98_0, L_244, NULL);
		return L_245;
	}

IL_0569:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_246, V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_247 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_246);
		if (L_247)
		{
			G_B102_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
			goto IL_0596;
		}
		G_B100_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
	}
	{
		il2cpp_codegen_memcpy(L_248, G_B100_0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(V_4, L_248, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_249, V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_250 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_249);
		if (L_250)
		{
			G_B102_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			goto IL_0596;
		}
		il2cpp_codegen_memcpy(G_B101_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	}
	{
		G_B103_0 = 0;
		goto IL_05a1;
	}

IL_0596:
	{
		Il2CppConstrainedCallData L_252;
		Il2CppMethodPointer L_253 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77), (void*)G_B102_0, &L_252, L_251);
		typedef int32_t ( *func_L_254)(void*,const RuntimeMethod*);
		int32_t L_255 = ((func_L_254)L_253)(L_252.thisPtr,L_252.method);
		G_B103_0 = L_255;
	}

IL_05a1:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_256, V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_257 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_256);
		if (L_257)
		{
			G_B106_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
			G_B106_1 = G_B103_0;
			goto IL_05ce;
		}
		G_B104_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
		G_B104_1 = G_B103_0;
	}
	{
		il2cpp_codegen_memcpy(L_258, G_B104_0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(V_5, L_258, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_259, V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_260 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_259);
		if (L_260)
		{
			G_B106_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_5);
			G_B106_1 = G_B104_1;
			goto IL_05ce;
		}
		il2cpp_codegen_memcpy(G_B105_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		G_B105_1 = G_B104_1;
	}
	{
		G_B107_0 = 0;
		G_B107_1 = G_B105_1;
		goto IL_05d9;
	}

IL_05ce:
	{
		Il2CppConstrainedCallData L_262;
		Il2CppMethodPointer L_263 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 78), (void*)G_B106_0, &L_262, L_261);
		typedef int32_t ( *func_L_264)(void*,const RuntimeMethod*);
		int32_t L_265 = ((func_L_264)L_263)(L_262.thisPtr,L_262.method);
		G_B107_0 = L_265;
		G_B107_1 = G_B106_1;
	}

IL_05d9:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_266, V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_267 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_266);
		if (L_267)
		{
			G_B110_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
			G_B110_1 = G_B107_0;
			G_B110_2 = G_B107_1;
			goto IL_0606;
		}
		G_B108_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
		G_B108_1 = G_B107_0;
		G_B108_2 = G_B107_1;
	}
	{
		il2cpp_codegen_memcpy(L_268, G_B108_0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(V_6, L_268, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_269, V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_270 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_269);
		if (L_270)
		{
			G_B110_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_6);
			G_B110_1 = G_B108_1;
			G_B110_2 = G_B108_2;
			goto IL_0606;
		}
		il2cpp_codegen_memcpy(G_B109_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		G_B109_1 = G_B108_1;
		G_B109_2 = G_B108_2;
	}
	{
		G_B111_0 = 0;
		G_B111_1 = G_B109_1;
		G_B111_2 = G_B109_2;
		goto IL_0611;
	}

IL_0606:
	{
		Il2CppConstrainedCallData L_272;
		Il2CppMethodPointer L_273 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 79), (void*)G_B110_0, &L_272, L_271);
		typedef int32_t ( *func_L_274)(void*,const RuntimeMethod*);
		int32_t L_275 = ((func_L_274)L_273)(L_272.thisPtr,L_272.method);
		G_B111_0 = L_275;
		G_B111_1 = G_B110_1;
		G_B111_2 = G_B110_2;
	}

IL_0611:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_276, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_277 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_276);
		if (L_277)
		{
			G_B114_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
			G_B114_1 = G_B111_0;
			G_B114_2 = G_B111_1;
			G_B114_3 = G_B111_2;
			goto IL_063e;
		}
		G_B112_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
		G_B112_1 = G_B111_0;
		G_B112_2 = G_B111_1;
		G_B112_3 = G_B111_2;
	}
	{
		il2cpp_codegen_memcpy(L_278, G_B112_0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(V_7, L_278, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_279, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_280 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_279);
		if (L_280)
		{
			G_B114_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			G_B114_1 = G_B112_1;
			G_B114_2 = G_B112_2;
			G_B114_3 = G_B112_3;
			goto IL_063e;
		}
		il2cpp_codegen_memcpy(G_B113_0, (Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		G_B113_1 = G_B112_1;
		G_B113_2 = G_B112_2;
		G_B113_3 = G_B112_3;
	}
	{
		G_B115_0 = 0;
		G_B115_1 = G_B113_1;
		G_B115_2 = G_B113_2;
		G_B115_3 = G_B113_3;
		goto IL_0649;
	}

IL_063e:
	{
		Il2CppConstrainedCallData L_282;
		Il2CppMethodPointer L_283 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 80), (void*)G_B114_0, &L_282, L_281);
		typedef int32_t ( *func_L_284)(void*,const RuntimeMethod*);
		int32_t L_285 = ((func_L_284)L_283)(L_282.thisPtr,L_282.method);
		G_B115_0 = L_285;
		G_B115_1 = G_B114_1;
		G_B115_2 = G_B114_2;
		G_B115_3 = G_B114_3;
	}

IL_0649:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_286, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_287 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_286);
		if (L_287)
		{
			G_B118_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			G_B118_1 = G_B115_0;
			G_B118_2 = G_B115_1;
			G_B118_3 = G_B115_2;
			G_B118_4 = G_B115_3;
			goto IL_0676;
		}
		G_B116_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
		G_B116_1 = G_B115_0;
		G_B116_2 = G_B115_1;
		G_B116_3 = G_B115_2;
		G_B116_4 = G_B115_3;
	}
	{
		il2cpp_codegen_memcpy(L_288, G_B116_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_8, L_288, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_289, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_290 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_289);
		if (L_290)
		{
			G_B118_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_8);
			G_B118_1 = G_B116_1;
			G_B118_2 = G_B116_2;
			G_B118_3 = G_B116_3;
			G_B118_4 = G_B116_4;
			goto IL_0676;
		}
		il2cpp_codegen_memcpy(G_B117_0, (Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		G_B117_1 = G_B116_1;
		G_B117_2 = G_B116_2;
		G_B117_3 = G_B116_3;
		G_B117_4 = G_B116_4;
	}
	{
		G_B119_0 = 0;
		G_B119_1 = G_B117_1;
		G_B119_2 = G_B117_2;
		G_B119_3 = G_B117_3;
		G_B119_4 = G_B117_4;
		goto IL_0681;
	}

IL_0676:
	{
		Il2CppConstrainedCallData L_292;
		Il2CppMethodPointer L_293 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 81), (void*)G_B118_0, &L_292, L_291);
		typedef int32_t ( *func_L_294)(void*,const RuntimeMethod*);
		int32_t L_295 = ((func_L_294)L_293)(L_292.thisPtr,L_292.method);
		G_B119_0 = L_295;
		G_B119_1 = G_B118_1;
		G_B119_2 = G_B118_2;
		G_B119_3 = G_B118_3;
		G_B119_4 = G_B118_4;
	}

IL_0681:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_296, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_297 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_296);
		if (L_297)
		{
			G_B122_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B122_1 = G_B119_0;
			G_B122_2 = G_B119_1;
			G_B122_3 = G_B119_2;
			G_B122_4 = G_B119_3;
			G_B122_5 = G_B119_4;
			goto IL_06ae;
		}
		G_B120_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B120_1 = G_B119_0;
		G_B120_2 = G_B119_1;
		G_B120_3 = G_B119_2;
		G_B120_4 = G_B119_3;
		G_B120_5 = G_B119_4;
	}
	{
		il2cpp_codegen_memcpy(L_298, G_B120_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_9, L_298, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_299, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_300 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_299);
		if (L_300)
		{
			G_B122_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_9);
			G_B122_1 = G_B120_1;
			G_B122_2 = G_B120_2;
			G_B122_3 = G_B120_3;
			G_B122_4 = G_B120_4;
			G_B122_5 = G_B120_5;
			goto IL_06ae;
		}
		il2cpp_codegen_memcpy(G_B121_0, (Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B121_1 = G_B120_1;
		G_B121_2 = G_B120_2;
		G_B121_3 = G_B120_3;
		G_B121_4 = G_B120_4;
		G_B121_5 = G_B120_5;
	}
	{
		G_B123_0 = 0;
		G_B123_1 = G_B121_1;
		G_B123_2 = G_B121_2;
		G_B123_3 = G_B121_3;
		G_B123_4 = G_B121_4;
		G_B123_5 = G_B121_5;
		goto IL_06b9;
	}

IL_06ae:
	{
		Il2CppConstrainedCallData L_302;
		Il2CppMethodPointer L_303 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 82), (void*)G_B122_0, &L_302, L_301);
		typedef int32_t ( *func_L_304)(void*,const RuntimeMethod*);
		int32_t L_305 = ((func_L_304)L_303)(L_302.thisPtr,L_302.method);
		G_B123_0 = L_305;
		G_B123_1 = G_B122_1;
		G_B123_2 = G_B122_2;
		G_B123_3 = G_B122_3;
		G_B123_4 = G_B122_4;
		G_B123_5 = G_B122_5;
	}

IL_06b9:
	{
		RuntimeObject* L_306 = V_0;
		int32_t L_307;
		L_307 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_306);
		int32_t L_308;
		L_308 = ValueTuple_CombineHashCodes_m6E1DDA7CEC83A1504A5210BA9F61BF00E7ACFD49(G_B123_5, G_B123_4, G_B123_3, G_B123_2, G_B123_1, G_B123_0, L_307, NULL);
		return L_308;
	}

IL_06c5:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_309, V_3, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_310 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_309);
		if (L_310)
		{
			G_B127_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
			goto IL_06ef;
		}
		G_B125_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
	}
	{
		il2cpp_codegen_memcpy(L_311, G_B125_0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(V_3, L_311, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_312, V_3, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_313 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_312);
		if (L_313)
		{
			G_B127_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			goto IL_06ef;
		}
		il2cpp_codegen_memcpy(G_B126_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	}
	{
		G_B128_0 = 0;
		goto IL_06fa;
	}

IL_06ef:
	{
		Il2CppConstrainedCallData L_315;
		Il2CppMethodPointer L_316 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 76), (void*)G_B127_0, &L_315, L_314);
		typedef int32_t ( *func_L_317)(void*,const RuntimeMethod*);
		int32_t L_318 = ((func_L_317)L_316)(L_315.thisPtr,L_315.method);
		G_B128_0 = L_318;
	}

IL_06fa:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_319, V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_320 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_319);
		if (L_320)
		{
			G_B131_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
			G_B131_1 = G_B128_0;
			goto IL_0727;
		}
		G_B129_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
		G_B129_1 = G_B128_0;
	}
	{
		il2cpp_codegen_memcpy(L_321, G_B129_0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(V_4, L_321, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_322, V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_323 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_322);
		if (L_323)
		{
			G_B131_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B131_1 = G_B129_1;
			goto IL_0727;
		}
		il2cpp_codegen_memcpy(G_B130_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		G_B130_1 = G_B129_1;
	}
	{
		G_B132_0 = 0;
		G_B132_1 = G_B130_1;
		goto IL_0732;
	}

IL_0727:
	{
		Il2CppConstrainedCallData L_325;
		Il2CppMethodPointer L_326 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 77), (void*)G_B131_0, &L_325, L_324);
		typedef int32_t ( *func_L_327)(void*,const RuntimeMethod*);
		int32_t L_328 = ((func_L_327)L_326)(L_325.thisPtr,L_325.method);
		G_B132_0 = L_328;
		G_B132_1 = G_B131_1;
	}

IL_0732:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_329, V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_330 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_329);
		if (L_330)
		{
			G_B135_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
			G_B135_1 = G_B132_0;
			G_B135_2 = G_B132_1;
			goto IL_075f;
		}
		G_B133_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
		G_B133_1 = G_B132_0;
		G_B133_2 = G_B132_1;
	}
	{
		il2cpp_codegen_memcpy(L_331, G_B133_0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(V_5, L_331, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_332, V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_333 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_332);
		if (L_333)
		{
			G_B135_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_5);
			G_B135_1 = G_B133_1;
			G_B135_2 = G_B133_2;
			goto IL_075f;
		}
		il2cpp_codegen_memcpy(G_B134_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		G_B134_1 = G_B133_1;
		G_B134_2 = G_B133_2;
	}
	{
		G_B136_0 = 0;
		G_B136_1 = G_B134_1;
		G_B136_2 = G_B134_2;
		goto IL_076a;
	}

IL_075f:
	{
		Il2CppConstrainedCallData L_335;
		Il2CppMethodPointer L_336 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 78), (void*)G_B135_0, &L_335, L_334);
		typedef int32_t ( *func_L_337)(void*,const RuntimeMethod*);
		int32_t L_338 = ((func_L_337)L_336)(L_335.thisPtr,L_335.method);
		G_B136_0 = L_338;
		G_B136_1 = G_B135_1;
		G_B136_2 = G_B135_2;
	}

IL_076a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_339, V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_340 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_339);
		if (L_340)
		{
			G_B139_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
			G_B139_1 = G_B136_0;
			G_B139_2 = G_B136_1;
			G_B139_3 = G_B136_2;
			goto IL_0797;
		}
		G_B137_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
		G_B137_1 = G_B136_0;
		G_B137_2 = G_B136_1;
		G_B137_3 = G_B136_2;
	}
	{
		il2cpp_codegen_memcpy(L_341, G_B137_0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(V_6, L_341, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_342, V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_343 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_342);
		if (L_343)
		{
			G_B139_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_6);
			G_B139_1 = G_B137_1;
			G_B139_2 = G_B137_2;
			G_B139_3 = G_B137_3;
			goto IL_0797;
		}
		il2cpp_codegen_memcpy(G_B138_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		G_B138_1 = G_B137_1;
		G_B138_2 = G_B137_2;
		G_B138_3 = G_B137_3;
	}
	{
		G_B140_0 = 0;
		G_B140_1 = G_B138_1;
		G_B140_2 = G_B138_2;
		G_B140_3 = G_B138_3;
		goto IL_07a2;
	}

IL_0797:
	{
		Il2CppConstrainedCallData L_345;
		Il2CppMethodPointer L_346 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 79), (void*)G_B139_0, &L_345, L_344);
		typedef int32_t ( *func_L_347)(void*,const RuntimeMethod*);
		int32_t L_348 = ((func_L_347)L_346)(L_345.thisPtr,L_345.method);
		G_B140_0 = L_348;
		G_B140_1 = G_B139_1;
		G_B140_2 = G_B139_2;
		G_B140_3 = G_B139_3;
	}

IL_07a2:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_349, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_350 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_349);
		if (L_350)
		{
			G_B143_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
			G_B143_1 = G_B140_0;
			G_B143_2 = G_B140_1;
			G_B143_3 = G_B140_2;
			G_B143_4 = G_B140_3;
			goto IL_07cf;
		}
		G_B141_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
		G_B141_1 = G_B140_0;
		G_B141_2 = G_B140_1;
		G_B141_3 = G_B140_2;
		G_B141_4 = G_B140_3;
	}
	{
		il2cpp_codegen_memcpy(L_351, G_B141_0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(V_7, L_351, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_352, V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_353 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_352);
		if (L_353)
		{
			G_B143_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			G_B143_1 = G_B141_1;
			G_B143_2 = G_B141_2;
			G_B143_3 = G_B141_3;
			G_B143_4 = G_B141_4;
			goto IL_07cf;
		}
		il2cpp_codegen_memcpy(G_B142_0, (Il2CppFullySharedGenericAny*)V_7, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		G_B142_1 = G_B141_1;
		G_B142_2 = G_B141_2;
		G_B142_3 = G_B141_3;
		G_B142_4 = G_B141_4;
	}
	{
		G_B144_0 = 0;
		G_B144_1 = G_B142_1;
		G_B144_2 = G_B142_2;
		G_B144_3 = G_B142_3;
		G_B144_4 = G_B142_4;
		goto IL_07da;
	}

IL_07cf:
	{
		Il2CppConstrainedCallData L_355;
		Il2CppMethodPointer L_356 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 80), (void*)G_B143_0, &L_355, L_354);
		typedef int32_t ( *func_L_357)(void*,const RuntimeMethod*);
		int32_t L_358 = ((func_L_357)L_356)(L_355.thisPtr,L_355.method);
		G_B144_0 = L_358;
		G_B144_1 = G_B143_1;
		G_B144_2 = G_B143_2;
		G_B144_3 = G_B143_3;
		G_B144_4 = G_B143_4;
	}

IL_07da:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_359, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_360 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_359);
		if (L_360)
		{
			G_B147_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			G_B147_1 = G_B144_0;
			G_B147_2 = G_B144_1;
			G_B147_3 = G_B144_2;
			G_B147_4 = G_B144_3;
			G_B147_5 = G_B144_4;
			goto IL_0807;
		}
		G_B145_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
		G_B145_1 = G_B144_0;
		G_B145_2 = G_B144_1;
		G_B145_3 = G_B144_2;
		G_B145_4 = G_B144_3;
		G_B145_5 = G_B144_4;
	}
	{
		il2cpp_codegen_memcpy(L_361, G_B145_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_8, L_361, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_362, V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_363 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_362);
		if (L_363)
		{
			G_B147_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_8);
			G_B147_1 = G_B145_1;
			G_B147_2 = G_B145_2;
			G_B147_3 = G_B145_3;
			G_B147_4 = G_B145_4;
			G_B147_5 = G_B145_5;
			goto IL_0807;
		}
		il2cpp_codegen_memcpy(G_B146_0, (Il2CppFullySharedGenericAny*)V_8, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		G_B146_1 = G_B145_1;
		G_B146_2 = G_B145_2;
		G_B146_3 = G_B145_3;
		G_B146_4 = G_B145_4;
		G_B146_5 = G_B145_5;
	}
	{
		G_B148_0 = 0;
		G_B148_1 = G_B146_1;
		G_B148_2 = G_B146_2;
		G_B148_3 = G_B146_3;
		G_B148_4 = G_B146_4;
		G_B148_5 = G_B146_5;
		goto IL_0812;
	}

IL_0807:
	{
		Il2CppConstrainedCallData L_365;
		Il2CppMethodPointer L_366 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 81), (void*)G_B147_0, &L_365, L_364);
		typedef int32_t ( *func_L_367)(void*,const RuntimeMethod*);
		int32_t L_368 = ((func_L_367)L_366)(L_365.thisPtr,L_365.method);
		G_B148_0 = L_368;
		G_B148_1 = G_B147_1;
		G_B148_2 = G_B147_2;
		G_B148_3 = G_B147_3;
		G_B148_4 = G_B147_4;
		G_B148_5 = G_B147_5;
	}

IL_0812:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_369, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_370 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_369);
		if (L_370)
		{
			G_B151_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B151_1 = G_B148_0;
			G_B151_2 = G_B148_1;
			G_B151_3 = G_B148_2;
			G_B151_4 = G_B148_3;
			G_B151_5 = G_B148_4;
			G_B151_6 = G_B148_5;
			goto IL_083f;
		}
		G_B149_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B149_1 = G_B148_0;
		G_B149_2 = G_B148_1;
		G_B149_3 = G_B148_2;
		G_B149_4 = G_B148_3;
		G_B149_5 = G_B148_4;
		G_B149_6 = G_B148_5;
	}
	{
		il2cpp_codegen_memcpy(L_371, G_B149_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_9, L_371, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_372, V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_373 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_372);
		if (L_373)
		{
			G_B151_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_9);
			G_B151_1 = G_B149_1;
			G_B151_2 = G_B149_2;
			G_B151_3 = G_B149_3;
			G_B151_4 = G_B149_4;
			G_B151_5 = G_B149_5;
			G_B151_6 = G_B149_6;
			goto IL_083f;
		}
		il2cpp_codegen_memcpy(G_B150_0, (Il2CppFullySharedGenericAny*)V_9, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B150_1 = G_B149_1;
		G_B150_2 = G_B149_2;
		G_B150_3 = G_B149_3;
		G_B150_4 = G_B149_4;
		G_B150_5 = G_B149_5;
		G_B150_6 = G_B149_6;
	}
	{
		G_B152_0 = 0;
		G_B152_1 = G_B150_1;
		G_B152_2 = G_B150_2;
		G_B152_3 = G_B150_3;
		G_B152_4 = G_B150_4;
		G_B152_5 = G_B150_5;
		G_B152_6 = G_B150_6;
		goto IL_084a;
	}

IL_083f:
	{
		Il2CppConstrainedCallData L_375;
		Il2CppMethodPointer L_376 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 82), (void*)G_B151_0, &L_375, L_374);
		typedef int32_t ( *func_L_377)(void*,const RuntimeMethod*);
		int32_t L_378 = ((func_L_377)L_376)(L_375.thisPtr,L_375.method);
		G_B152_0 = L_378;
		G_B152_1 = G_B151_1;
		G_B152_2 = G_B151_2;
		G_B152_3 = G_B151_3;
		G_B152_4 = G_B151_4;
		G_B152_5 = G_B151_5;
		G_B152_6 = G_B151_6;
	}

IL_084a:
	{
		RuntimeObject* L_379 = V_0;
		int32_t L_380;
		L_380 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_379);
		int32_t L_381;
		L_381 = ValueTuple_CombineHashCodes_mAFEBA974A670843200DC9DA7DEF8280FCD19E05E(G_B152_6, G_B152_5, G_B152_4, G_B152_3, G_B152_2, G_B152_1, G_B152_0, L_380, NULL);
		return L_381;
	}

IL_0856:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_GetHashCode_mFFB8FC3075672FDEC47412793447ACDA1DB90FC1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_GetHashCode_mFFB8FC3075672FDEC47412793447ACDA1DB90FC1(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mBBB3278470E2465A6B3F9EBB77231B7749837D84_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ((  int32_t (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 83)))(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 83));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mBBB3278470E2465A6B3F9EBB77231B7749837D84_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_Collections_IStructuralEquatable_GetHashCode_mBBB3278470E2465A6B3F9EBB77231B7749837D84(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_GetHashCodeCore_mD6AC6CAEA9F3BB1951814E084AC3E8C6C803577A_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_149 = L_4;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_121 = L_8;
	const Il2CppFullySharedGenericAny L_153 = L_8;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_97 = L_12;
	const Il2CppFullySharedGenericAny L_125 = L_12;
	const Il2CppFullySharedGenericAny L_157 = L_12;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_77 = L_16;
	const Il2CppFullySharedGenericAny L_101 = L_16;
	const Il2CppFullySharedGenericAny L_129 = L_16;
	const Il2CppFullySharedGenericAny L_161 = L_16;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_61 = L_20;
	const Il2CppFullySharedGenericAny L_81 = L_20;
	const Il2CppFullySharedGenericAny L_105 = L_20;
	const Il2CppFullySharedGenericAny L_133 = L_20;
	const Il2CppFullySharedGenericAny L_165 = L_20;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_49 = L_24;
	const Il2CppFullySharedGenericAny L_65 = L_24;
	const Il2CppFullySharedGenericAny L_85 = L_24;
	const Il2CppFullySharedGenericAny L_109 = L_24;
	const Il2CppFullySharedGenericAny L_137 = L_24;
	const Il2CppFullySharedGenericAny L_169 = L_24;
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_41 = L_28;
	const Il2CppFullySharedGenericAny L_53 = L_28;
	const Il2CppFullySharedGenericAny L_69 = L_28;
	const Il2CppFullySharedGenericAny L_89 = L_28;
	const Il2CppFullySharedGenericAny L_113 = L_28;
	const Il2CppFullySharedGenericAny L_141 = L_28;
	const Il2CppFullySharedGenericAny L_173 = L_28;
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		RuntimeObject* L_1 = il2cpp_codegen_isinst_runtime(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_0);;
		V_0 = (RuntimeObject*)L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_3 = ___0_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_4);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5);
		RuntimeObject* L_7 = ___0_comparer;
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_7, L_9);
		RuntimeObject* L_11 = ___0_comparer;
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_11, L_13);
		RuntimeObject* L_15 = ___0_comparer;
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_15, L_17);
		RuntimeObject* L_19 = ___0_comparer;
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_20);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_19, L_21);
		RuntimeObject* L_23 = ___0_comparer;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_24);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_23, L_25);
		RuntimeObject* L_27 = ___0_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_28);
		int32_t L_30;
		L_30 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_27, L_29);
		int32_t L_31;
		L_31 = ValueTuple_CombineHashCodes_m6E1DDA7CEC83A1504A5210BA9F61BF00E7ACFD49(L_6, L_10, L_14, L_18, L_22, L_26, L_30, NULL);
		return L_31;
	}

IL_0091:
	{
		RuntimeObject* L_32 = V_0;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) < ((int32_t)8)))
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_35 = V_0;
		RuntimeObject* L_36 = ___0_comparer;
		int32_t L_37;
		L_37 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_35, L_36);
		return L_37;
	}

IL_00a4:
	{
		int32_t L_38 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(8, L_38));
		int32_t L_39 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract(L_39, 1)))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00f3;
			}
			case 2:
			{
				goto IL_0122;
			}
			case 3:
			{
				goto IL_0162;
			}
			case 4:
			{
				goto IL_01b3;
			}
			case 5:
			{
				goto IL_0215;
			}
			case 6:
			{
				goto IL_0288;
			}
			case 7:
			{
				goto IL_0288;
			}
		}
	}
	{
		goto IL_030c;
	}

IL_00d5:
	{
		RuntimeObject* L_40 = ___0_comparer;
		il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_41);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_40, L_42);
		RuntimeObject* L_44 = V_0;
		RuntimeObject* L_45 = ___0_comparer;
		int32_t L_46;
		L_46 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_44, L_45);
		int32_t L_47;
		L_47 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(L_43, L_46, NULL);
		return L_47;
	}

IL_00f3:
	{
		RuntimeObject* L_48 = ___0_comparer;
		il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_50 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_49);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_48, L_50);
		RuntimeObject* L_52 = ___0_comparer;
		il2cpp_codegen_memcpy(L_53, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_53);
		int32_t L_55;
		L_55 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_52, L_54);
		RuntimeObject* L_56 = V_0;
		RuntimeObject* L_57 = ___0_comparer;
		int32_t L_58;
		L_58 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_56, L_57);
		int32_t L_59;
		L_59 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(L_51, L_55, L_58, NULL);
		return L_59;
	}

IL_0122:
	{
		RuntimeObject* L_60 = ___0_comparer;
		il2cpp_codegen_memcpy(L_61, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_61);
		int32_t L_63;
		L_63 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_60, L_62);
		RuntimeObject* L_64 = ___0_comparer;
		il2cpp_codegen_memcpy(L_65, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_66 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_65);
		int32_t L_67;
		L_67 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_64, L_66);
		RuntimeObject* L_68 = ___0_comparer;
		il2cpp_codegen_memcpy(L_69, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_69);
		int32_t L_71;
		L_71 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_68, L_70);
		RuntimeObject* L_72 = V_0;
		RuntimeObject* L_73 = ___0_comparer;
		int32_t L_74;
		L_74 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_72, L_73);
		int32_t L_75;
		L_75 = ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813(L_63, L_67, L_71, L_74, NULL);
		return L_75;
	}

IL_0162:
	{
		RuntimeObject* L_76 = ___0_comparer;
		il2cpp_codegen_memcpy(L_77, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		RuntimeObject* L_78 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_77);
		int32_t L_79;
		L_79 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_76, L_78);
		RuntimeObject* L_80 = ___0_comparer;
		il2cpp_codegen_memcpy(L_81, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		RuntimeObject* L_82 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_81);
		int32_t L_83;
		L_83 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_80, L_82);
		RuntimeObject* L_84 = ___0_comparer;
		il2cpp_codegen_memcpy(L_85, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_86 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_85);
		int32_t L_87;
		L_87 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_84, L_86);
		RuntimeObject* L_88 = ___0_comparer;
		il2cpp_codegen_memcpy(L_89, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_89);
		int32_t L_91;
		L_91 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_88, L_90);
		RuntimeObject* L_92 = V_0;
		RuntimeObject* L_93 = ___0_comparer;
		int32_t L_94;
		L_94 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_92, L_93);
		int32_t L_95;
		L_95 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(L_79, L_83, L_87, L_91, L_94, NULL);
		return L_95;
	}

IL_01b3:
	{
		RuntimeObject* L_96 = ___0_comparer;
		il2cpp_codegen_memcpy(L_97, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		RuntimeObject* L_98 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_97);
		int32_t L_99;
		L_99 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_96, L_98);
		RuntimeObject* L_100 = ___0_comparer;
		il2cpp_codegen_memcpy(L_101, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_101);
		int32_t L_103;
		L_103 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_100, L_102);
		RuntimeObject* L_104 = ___0_comparer;
		il2cpp_codegen_memcpy(L_105, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_105);
		int32_t L_107;
		L_107 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_104, L_106);
		RuntimeObject* L_108 = ___0_comparer;
		il2cpp_codegen_memcpy(L_109, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_110 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_109);
		int32_t L_111;
		L_111 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_108, L_110);
		RuntimeObject* L_112 = ___0_comparer;
		il2cpp_codegen_memcpy(L_113, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_114 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_113);
		int32_t L_115;
		L_115 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_112, L_114);
		RuntimeObject* L_116 = V_0;
		RuntimeObject* L_117 = ___0_comparer;
		int32_t L_118;
		L_118 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_116, L_117);
		int32_t L_119;
		L_119 = ValueTuple_CombineHashCodes_m62423C878D7CB18B74DAA96483AD008367FF6BF8(L_99, L_103, L_107, L_111, L_115, L_118, NULL);
		return L_119;
	}

IL_0215:
	{
		RuntimeObject* L_120 = ___0_comparer;
		il2cpp_codegen_memcpy(L_121, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		RuntimeObject* L_122 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_121);
		int32_t L_123;
		L_123 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_120, L_122);
		RuntimeObject* L_124 = ___0_comparer;
		il2cpp_codegen_memcpy(L_125, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		RuntimeObject* L_126 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_125);
		int32_t L_127;
		L_127 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_124, L_126);
		RuntimeObject* L_128 = ___0_comparer;
		il2cpp_codegen_memcpy(L_129, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		RuntimeObject* L_130 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_129);
		int32_t L_131;
		L_131 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_128, L_130);
		RuntimeObject* L_132 = ___0_comparer;
		il2cpp_codegen_memcpy(L_133, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		RuntimeObject* L_134 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_133);
		int32_t L_135;
		L_135 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_132, L_134);
		RuntimeObject* L_136 = ___0_comparer;
		il2cpp_codegen_memcpy(L_137, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_137);
		int32_t L_139;
		L_139 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_136, L_138);
		RuntimeObject* L_140 = ___0_comparer;
		il2cpp_codegen_memcpy(L_141, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_142 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_141);
		int32_t L_143;
		L_143 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_140, L_142);
		RuntimeObject* L_144 = V_0;
		RuntimeObject* L_145 = ___0_comparer;
		int32_t L_146;
		L_146 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_144, L_145);
		int32_t L_147;
		L_147 = ValueTuple_CombineHashCodes_m6E1DDA7CEC83A1504A5210BA9F61BF00E7ACFD49(L_123, L_127, L_131, L_135, L_139, L_143, L_146, NULL);
		return L_147;
	}

IL_0288:
	{
		RuntimeObject* L_148 = ___0_comparer;
		il2cpp_codegen_memcpy(L_149, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)), SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		RuntimeObject* L_150 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_149);
		int32_t L_151;
		L_151 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_148, L_150);
		RuntimeObject* L_152 = ___0_comparer;
		il2cpp_codegen_memcpy(L_153, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)), SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		RuntimeObject* L_154 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_153);
		int32_t L_155;
		L_155 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_152, L_154);
		RuntimeObject* L_156 = ___0_comparer;
		il2cpp_codegen_memcpy(L_157, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)), SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		RuntimeObject* L_158 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_157);
		int32_t L_159;
		L_159 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_156, L_158);
		RuntimeObject* L_160 = ___0_comparer;
		il2cpp_codegen_memcpy(L_161, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)), SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		RuntimeObject* L_162 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_161);
		int32_t L_163;
		L_163 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_160, L_162);
		RuntimeObject* L_164 = ___0_comparer;
		il2cpp_codegen_memcpy(L_165, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)), SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		RuntimeObject* L_166 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_165);
		int32_t L_167;
		L_167 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_164, L_166);
		RuntimeObject* L_168 = ___0_comparer;
		il2cpp_codegen_memcpy(L_169, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)), SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		RuntimeObject* L_170 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_169);
		int32_t L_171;
		L_171 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_168, L_170);
		RuntimeObject* L_172 = ___0_comparer;
		il2cpp_codegen_memcpy(L_173, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)), SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		RuntimeObject* L_174 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_173);
		int32_t L_175;
		L_175 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_172, L_174);
		RuntimeObject* L_176 = V_0;
		RuntimeObject* L_177 = ___0_comparer;
		int32_t L_178;
		L_178 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_176, L_177);
		int32_t L_179;
		L_179 = ValueTuple_CombineHashCodes_mAFEBA974A670843200DC9DA7DEF8280FCD19E05E(L_151, L_155, L_159, L_163, L_167, L_171, L_175, L_178, NULL);
		return L_179;
	}

IL_030c:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_GetHashCodeCore_mD6AC6CAEA9F3BB1951814E084AC3E8C6C803577A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_GetHashCodeCore_mD6AC6CAEA9F3BB1951814E084AC3E8C6C803577A(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_mEDB78B450BFD722ED3A333CBBF3CBE862F445EDE_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ((  int32_t (*) (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 83)))(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 83));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_IValueTupleInternal_GetHashCode_mEDB78B450BFD722ED3A333CBBF3CBE862F445EDE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_IValueTupleInternal_GetHashCode_mEDB78B450BFD722ED3A333CBBF3CBE862F445EDE(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_ToString_mCBC8EEE6DF5982B972AEC0CAF758197B2CDE7E3E_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_47 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	void* L_59 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	void* L_71 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_83 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	void* L_90 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_105 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	void* L_117 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_129 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_141 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	void* L_153 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	void* L_165 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_177 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_8 = L_6;
	const Il2CppFullySharedGenericAny L_100 = L_6;
	const Il2CppFullySharedGenericAny L_102 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_103 = L_9;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_20 = L_18;
	const Il2CppFullySharedGenericAny L_112 = L_18;
	const Il2CppFullySharedGenericAny L_114 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_115 = L_21;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_32 = L_30;
	const Il2CppFullySharedGenericAny L_124 = L_30;
	const Il2CppFullySharedGenericAny L_126 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_127 = L_33;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_44 = L_42;
	const Il2CppFullySharedGenericAny L_136 = L_42;
	const Il2CppFullySharedGenericAny L_138 = L_42;
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_139 = L_45;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_56 = L_54;
	const Il2CppFullySharedGenericAny L_148 = L_54;
	const Il2CppFullySharedGenericAny L_150 = L_54;
	const Il2CppFullySharedGenericAny L_57 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_151 = L_57;
	const Il2CppFullySharedGenericAny L_66 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_68 = L_66;
	const Il2CppFullySharedGenericAny L_160 = L_66;
	const Il2CppFullySharedGenericAny L_162 = L_66;
	const Il2CppFullySharedGenericAny L_69 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_163 = L_69;
	const Il2CppFullySharedGenericAny L_78 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_80 = L_78;
	const Il2CppFullySharedGenericAny L_172 = L_78;
	const Il2CppFullySharedGenericAny L_174 = L_78;
	const Il2CppFullySharedGenericAny L_81 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_175 = L_81;
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	memset(V_1, 0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	memset(V_2, 0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(V_3, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(V_4, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(V_5, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(V_6, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(V_7, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	Il2CppFullySharedGenericAny* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	memset(G_B3_0, 0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	memset(G_B7_0, 0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Il2CppFullySharedGenericAny* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Il2CppFullySharedGenericAny G_B11_0 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(G_B11_0, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Il2CppFullySharedGenericAny* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	Il2CppFullySharedGenericAny* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	Il2CppFullySharedGenericAny G_B15_0 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(G_B15_0, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	String_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	Il2CppFullySharedGenericAny* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	Il2CppFullySharedGenericAny* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	Il2CppFullySharedGenericAny G_B19_0 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(G_B19_0, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	String_t* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_3 = NULL;
	Il2CppFullySharedGenericAny* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_3 = NULL;
	Il2CppFullySharedGenericAny* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_3 = NULL;
	Il2CppFullySharedGenericAny G_B23_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B23_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B23_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_3 = NULL;
	String_t* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B25_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B25_3 = NULL;
	Il2CppFullySharedGenericAny* G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B28_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B28_3 = NULL;
	Il2CppFullySharedGenericAny* G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B26_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B26_3 = NULL;
	Il2CppFullySharedGenericAny G_B27_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B27_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B27_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B27_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B27_3 = NULL;
	String_t* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B29_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B29_3 = NULL;
	Il2CppFullySharedGenericAny* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B33_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B33_3 = NULL;
	Il2CppFullySharedGenericAny* G_B31_0 = NULL;
	int32_t G_B31_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B31_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B31_3 = NULL;
	Il2CppFullySharedGenericAny G_B32_0 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	memset(G_B32_0, 0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	int32_t G_B32_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B32_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B32_3 = NULL;
	String_t* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B34_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B34_3 = NULL;
	Il2CppFullySharedGenericAny* G_B37_0 = NULL;
	int32_t G_B37_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B37_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B37_3 = NULL;
	Il2CppFullySharedGenericAny* G_B35_0 = NULL;
	int32_t G_B35_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B35_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B35_3 = NULL;
	Il2CppFullySharedGenericAny G_B36_0 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	memset(G_B36_0, 0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	int32_t G_B36_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B36_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B36_3 = NULL;
	String_t* G_B38_0 = NULL;
	int32_t G_B38_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B38_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B38_3 = NULL;
	Il2CppFullySharedGenericAny* G_B41_0 = NULL;
	int32_t G_B41_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B41_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B41_3 = NULL;
	Il2CppFullySharedGenericAny* G_B39_0 = NULL;
	int32_t G_B39_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B39_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B39_3 = NULL;
	Il2CppFullySharedGenericAny G_B40_0 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(G_B40_0, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	int32_t G_B40_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B40_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B40_3 = NULL;
	String_t* G_B42_0 = NULL;
	int32_t G_B42_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B42_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B42_3 = NULL;
	Il2CppFullySharedGenericAny* G_B45_0 = NULL;
	int32_t G_B45_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B45_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B45_3 = NULL;
	Il2CppFullySharedGenericAny* G_B43_0 = NULL;
	int32_t G_B43_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B43_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B43_3 = NULL;
	Il2CppFullySharedGenericAny G_B44_0 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(G_B44_0, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	int32_t G_B44_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B44_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B44_3 = NULL;
	String_t* G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B46_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B46_3 = NULL;
	Il2CppFullySharedGenericAny* G_B49_0 = NULL;
	int32_t G_B49_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B49_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B49_3 = NULL;
	Il2CppFullySharedGenericAny* G_B47_0 = NULL;
	int32_t G_B47_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B47_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B47_3 = NULL;
	Il2CppFullySharedGenericAny G_B48_0 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(G_B48_0, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	int32_t G_B48_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B48_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B48_3 = NULL;
	String_t* G_B50_0 = NULL;
	int32_t G_B50_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_3 = NULL;
	Il2CppFullySharedGenericAny* G_B53_0 = NULL;
	int32_t G_B53_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_3 = NULL;
	Il2CppFullySharedGenericAny* G_B51_0 = NULL;
	int32_t G_B51_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B51_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B51_3 = NULL;
	Il2CppFullySharedGenericAny G_B52_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B52_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B52_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B52_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B52_3 = NULL;
	String_t* G_B54_0 = NULL;
	int32_t G_B54_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_3 = NULL;
	Il2CppFullySharedGenericAny* G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_3 = NULL;
	Il2CppFullySharedGenericAny* G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B55_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B55_3 = NULL;
	Il2CppFullySharedGenericAny G_B56_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B56_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B56_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B56_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B56_3 = NULL;
	String_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_3 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		RuntimeObject* L_1 = il2cpp_codegen_isinst_runtime(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_0);;
		V_0 = (RuntimeObject*)L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_021c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_6);
		if (L_7)
		{
			G_B4_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
			G_B4_1 = 1;
			G_B4_2 = L_5;
			G_B4_3 = L_5;
			goto IL_0052;
		}
		G_B2_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
		G_B2_1 = 1;
		G_B2_2 = L_5;
		G_B2_3 = L_5;
	}
	{
		il2cpp_codegen_memcpy(L_8, G_B2_0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(V_1, L_8, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_10 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_9);
		if (L_10)
		{
			G_B4_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B4_1 = G_B2_1;
			G_B4_2 = G_B2_2;
			G_B4_3 = G_B2_3;
			goto IL_0052;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_005d;
	}

IL_0052:
	{
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 84), (void*)G_B4_0, &L_12, L_11);
		typedef String_t* ( *func_L_14)(void*,const RuntimeMethod*);
		String_t* L_15 = ((func_L_14)L_13)(L_12.thisPtr,L_12.method);
		G_B5_0 = L_15;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_005d:
	{
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = G_B5_3;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_18, V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_18);
		if (L_19)
		{
			G_B8_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
			G_B8_1 = 3;
			G_B8_2 = L_17;
			G_B8_3 = L_17;
			goto IL_0092;
		}
		G_B6_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
		G_B6_1 = 3;
		G_B6_2 = L_17;
		G_B6_3 = L_17;
	}
	{
		il2cpp_codegen_memcpy(L_20, G_B6_0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(V_2, L_20, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_21, V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_22 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_21);
		if (L_22)
		{
			G_B8_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_0092;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_009d;
	}

IL_0092:
	{
		Il2CppConstrainedCallData L_24;
		Il2CppMethodPointer L_25 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85), (void*)G_B8_0, &L_24, L_23);
		typedef String_t* ( *func_L_26)(void*,const RuntimeMethod*);
		String_t* L_27 = ((func_L_26)L_25)(L_24.thisPtr,L_24.method);
		G_B9_0 = L_27;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_009d:
	{
		(G_B9_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = G_B9_3;
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_30);
		if (L_31)
		{
			G_B12_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
			G_B12_1 = 5;
			G_B12_2 = L_29;
			G_B12_3 = L_29;
			goto IL_00d2;
		}
		G_B10_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
		G_B10_1 = 5;
		G_B10_2 = L_29;
		G_B10_3 = L_29;
	}
	{
		il2cpp_codegen_memcpy(L_32, G_B10_0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(V_3, L_32, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_33, V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_34 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_33);
		if (L_34)
		{
			G_B12_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			G_B12_3 = G_B10_3;
			goto IL_00d2;
		}
		il2cpp_codegen_memcpy(G_B11_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_1;
		G_B13_2 = G_B11_2;
		G_B13_3 = G_B11_3;
		goto IL_00dd;
	}

IL_00d2:
	{
		Il2CppConstrainedCallData L_36;
		Il2CppMethodPointer L_37 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 86), (void*)G_B12_0, &L_36, L_35);
		typedef String_t* ( *func_L_38)(void*,const RuntimeMethod*);
		String_t* L_39 = ((func_L_38)L_37)(L_36.thisPtr,L_36.method);
		G_B13_0 = L_39;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
	}

IL_00dd:
	{
		(G_B13_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B13_1), (String_t*)G_B13_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = G_B13_3;
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_42, V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_43 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_42);
		if (L_43)
		{
			G_B16_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
			G_B16_1 = 7;
			G_B16_2 = L_41;
			G_B16_3 = L_41;
			goto IL_0115;
		}
		G_B14_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
		G_B14_1 = 7;
		G_B14_2 = L_41;
		G_B14_3 = L_41;
	}
	{
		il2cpp_codegen_memcpy(L_44, G_B14_0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(V_4, L_44, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_45, V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_46 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_45);
		if (L_46)
		{
			G_B16_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			G_B16_3 = G_B14_3;
			goto IL_0115;
		}
		il2cpp_codegen_memcpy(G_B15_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
	}
	{
		G_B17_0 = ((String_t*)(NULL));
		G_B17_1 = G_B15_1;
		G_B17_2 = G_B15_2;
		G_B17_3 = G_B15_3;
		goto IL_0120;
	}

IL_0115:
	{
		Il2CppConstrainedCallData L_48;
		Il2CppMethodPointer L_49 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (void*)G_B16_0, &L_48, L_47);
		typedef String_t* ( *func_L_50)(void*,const RuntimeMethod*);
		String_t* L_51 = ((func_L_50)L_49)(L_48.thisPtr,L_48.method);
		G_B17_0 = L_51;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_0120:
	{
		(G_B17_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B17_1), (String_t*)G_B17_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = G_B17_3;
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_54, V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_55 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_54);
		if (L_55)
		{
			G_B20_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
			G_B20_1 = ((int32_t)9);
			G_B20_2 = L_53;
			G_B20_3 = L_53;
			goto IL_0159;
		}
		G_B18_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
		G_B18_1 = ((int32_t)9);
		G_B18_2 = L_53;
		G_B18_3 = L_53;
	}
	{
		il2cpp_codegen_memcpy(L_56, G_B18_0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(V_5, L_56, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_57, V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_58 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_57);
		if (L_58)
		{
			G_B20_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_5);
			G_B20_1 = G_B18_1;
			G_B20_2 = G_B18_2;
			G_B20_3 = G_B18_3;
			goto IL_0159;
		}
		il2cpp_codegen_memcpy(G_B19_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
		G_B19_3 = G_B18_3;
	}
	{
		G_B21_0 = ((String_t*)(NULL));
		G_B21_1 = G_B19_1;
		G_B21_2 = G_B19_2;
		G_B21_3 = G_B19_3;
		goto IL_0164;
	}

IL_0159:
	{
		Il2CppConstrainedCallData L_60;
		Il2CppMethodPointer L_61 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (void*)G_B20_0, &L_60, L_59);
		typedef String_t* ( *func_L_62)(void*,const RuntimeMethod*);
		String_t* L_63 = ((func_L_62)L_61)(L_60.thisPtr,L_60.method);
		G_B21_0 = L_63;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
	}

IL_0164:
	{
		(G_B21_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B21_1), (String_t*)G_B21_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = G_B21_3;
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_66, V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_67 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_66);
		if (L_67)
		{
			G_B24_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			G_B24_1 = ((int32_t)11);
			G_B24_2 = L_65;
			G_B24_3 = L_65;
			goto IL_019e;
		}
		G_B22_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
		G_B22_1 = ((int32_t)11);
		G_B22_2 = L_65;
		G_B22_3 = L_65;
	}
	{
		il2cpp_codegen_memcpy(L_68, G_B22_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_6, L_68, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_69, V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_70 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_69);
		if (L_70)
		{
			G_B24_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_6);
			G_B24_1 = G_B22_1;
			G_B24_2 = G_B22_2;
			G_B24_3 = G_B22_3;
			goto IL_019e;
		}
		il2cpp_codegen_memcpy(G_B23_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		G_B23_3 = G_B22_3;
	}
	{
		G_B25_0 = ((String_t*)(NULL));
		G_B25_1 = G_B23_1;
		G_B25_2 = G_B23_2;
		G_B25_3 = G_B23_3;
		goto IL_01a9;
	}

IL_019e:
	{
		Il2CppConstrainedCallData L_72;
		Il2CppMethodPointer L_73 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 89), (void*)G_B24_0, &L_72, L_71);
		typedef String_t* ( *func_L_74)(void*,const RuntimeMethod*);
		String_t* L_75 = ((func_L_74)L_73)(L_72.thisPtr,L_72.method);
		G_B25_0 = L_75;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
		G_B25_3 = G_B24_3;
	}

IL_01a9:
	{
		(G_B25_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B25_1), (String_t*)G_B25_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = G_B25_3;
		(L_76)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = L_76;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_78, V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_79 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_78);
		if (L_79)
		{
			G_B28_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B28_1 = ((int32_t)13);
			G_B28_2 = L_77;
			G_B28_3 = L_77;
			goto IL_01e3;
		}
		G_B26_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B26_1 = ((int32_t)13);
		G_B26_2 = L_77;
		G_B26_3 = L_77;
	}
	{
		il2cpp_codegen_memcpy(L_80, G_B26_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_7, L_80, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_81, V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_82 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_81);
		if (L_82)
		{
			G_B28_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			G_B28_1 = G_B26_1;
			G_B28_2 = G_B26_2;
			G_B28_3 = G_B26_3;
			goto IL_01e3;
		}
		il2cpp_codegen_memcpy(G_B27_0, (Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B27_1 = G_B26_1;
		G_B27_2 = G_B26_2;
		G_B27_3 = G_B26_3;
	}
	{
		G_B29_0 = ((String_t*)(NULL));
		G_B29_1 = G_B27_1;
		G_B29_2 = G_B27_2;
		G_B29_3 = G_B27_3;
		goto IL_01ee;
	}

IL_01e3:
	{
		Il2CppConstrainedCallData L_84;
		Il2CppMethodPointer L_85 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 90), (void*)G_B28_0, &L_84, L_83);
		typedef String_t* ( *func_L_86)(void*,const RuntimeMethod*);
		String_t* L_87 = ((func_L_86)L_85)(L_84.thisPtr,L_84.method);
		G_B29_0 = L_87;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		G_B29_3 = G_B28_3;
	}

IL_01ee:
	{
		(G_B29_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B29_1), (String_t*)G_B29_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = G_B29_3;
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = L_88;
		Il2CppConstrainedCallData L_91;
		Il2CppMethodPointer L_92 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 91), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)))), &L_91, L_90);
		typedef String_t* ( *func_L_93)(void*,const RuntimeMethod*);
		String_t* L_94 = ((func_L_93)L_92)(L_91.thisPtr,L_91.method);
		(L_89)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_94);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_95 = L_89;
		(L_95)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_96;
		L_96 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_95, NULL);
		return L_96;
	}

IL_021c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = L_97;
		(L_98)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_99 = L_98;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_100, V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_101 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_100);
		if (L_101)
		{
			G_B33_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
			G_B33_1 = 1;
			G_B33_2 = L_99;
			G_B33_3 = L_99;
			goto IL_0257;
		}
		G_B31_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
		G_B31_1 = 1;
		G_B31_2 = L_99;
		G_B31_3 = L_99;
	}
	{
		il2cpp_codegen_memcpy(L_102, G_B31_0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(V_1, L_102, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_103, V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_104 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_103);
		if (L_104)
		{
			G_B33_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B33_1 = G_B31_1;
			G_B33_2 = G_B31_2;
			G_B33_3 = G_B31_3;
			goto IL_0257;
		}
		il2cpp_codegen_memcpy(G_B32_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		G_B32_1 = G_B31_1;
		G_B32_2 = G_B31_2;
		G_B32_3 = G_B31_3;
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		G_B34_2 = G_B32_2;
		G_B34_3 = G_B32_3;
		goto IL_0262;
	}

IL_0257:
	{
		Il2CppConstrainedCallData L_106;
		Il2CppMethodPointer L_107 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 84), (void*)G_B33_0, &L_106, L_105);
		typedef String_t* ( *func_L_108)(void*,const RuntimeMethod*);
		String_t* L_109 = ((func_L_108)L_107)(L_106.thisPtr,L_106.method);
		G_B34_0 = L_109;
		G_B34_1 = G_B33_1;
		G_B34_2 = G_B33_2;
		G_B34_3 = G_B33_3;
	}

IL_0262:
	{
		(G_B34_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B34_1), (String_t*)G_B34_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_110 = G_B34_3;
		(L_110)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_111 = L_110;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_112, V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_113 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_112);
		if (L_113)
		{
			G_B37_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
			G_B37_1 = 3;
			G_B37_2 = L_111;
			G_B37_3 = L_111;
			goto IL_0297;
		}
		G_B35_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
		G_B35_1 = 3;
		G_B35_2 = L_111;
		G_B35_3 = L_111;
	}
	{
		il2cpp_codegen_memcpy(L_114, G_B35_0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(V_2, L_114, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_115, V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_116 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_115);
		if (L_116)
		{
			G_B37_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B37_1 = G_B35_1;
			G_B37_2 = G_B35_2;
			G_B37_3 = G_B35_3;
			goto IL_0297;
		}
		il2cpp_codegen_memcpy(G_B36_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		G_B36_1 = G_B35_1;
		G_B36_2 = G_B35_2;
		G_B36_3 = G_B35_3;
	}
	{
		G_B38_0 = ((String_t*)(NULL));
		G_B38_1 = G_B36_1;
		G_B38_2 = G_B36_2;
		G_B38_3 = G_B36_3;
		goto IL_02a2;
	}

IL_0297:
	{
		Il2CppConstrainedCallData L_118;
		Il2CppMethodPointer L_119 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85), (void*)G_B37_0, &L_118, L_117);
		typedef String_t* ( *func_L_120)(void*,const RuntimeMethod*);
		String_t* L_121 = ((func_L_120)L_119)(L_118.thisPtr,L_118.method);
		G_B38_0 = L_121;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
		G_B38_3 = G_B37_3;
	}

IL_02a2:
	{
		(G_B38_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B38_1), (String_t*)G_B38_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_122 = G_B38_3;
		(L_122)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_123 = L_122;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_124, V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_125 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_124);
		if (L_125)
		{
			G_B41_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
			G_B41_1 = 5;
			G_B41_2 = L_123;
			G_B41_3 = L_123;
			goto IL_02d7;
		}
		G_B39_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
		G_B39_1 = 5;
		G_B39_2 = L_123;
		G_B39_3 = L_123;
	}
	{
		il2cpp_codegen_memcpy(L_126, G_B39_0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(V_3, L_126, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_127, V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_128 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_127);
		if (L_128)
		{
			G_B41_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B41_1 = G_B39_1;
			G_B41_2 = G_B39_2;
			G_B41_3 = G_B39_3;
			goto IL_02d7;
		}
		il2cpp_codegen_memcpy(G_B40_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		G_B40_1 = G_B39_1;
		G_B40_2 = G_B39_2;
		G_B40_3 = G_B39_3;
	}
	{
		G_B42_0 = ((String_t*)(NULL));
		G_B42_1 = G_B40_1;
		G_B42_2 = G_B40_2;
		G_B42_3 = G_B40_3;
		goto IL_02e2;
	}

IL_02d7:
	{
		Il2CppConstrainedCallData L_130;
		Il2CppMethodPointer L_131 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 86), (void*)G_B41_0, &L_130, L_129);
		typedef String_t* ( *func_L_132)(void*,const RuntimeMethod*);
		String_t* L_133 = ((func_L_132)L_131)(L_130.thisPtr,L_130.method);
		G_B42_0 = L_133;
		G_B42_1 = G_B41_1;
		G_B42_2 = G_B41_2;
		G_B42_3 = G_B41_3;
	}

IL_02e2:
	{
		(G_B42_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B42_1), (String_t*)G_B42_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_134 = G_B42_3;
		(L_134)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_135 = L_134;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_136, V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_137 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_136);
		if (L_137)
		{
			G_B45_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
			G_B45_1 = 7;
			G_B45_2 = L_135;
			G_B45_3 = L_135;
			goto IL_031a;
		}
		G_B43_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
		G_B43_1 = 7;
		G_B43_2 = L_135;
		G_B43_3 = L_135;
	}
	{
		il2cpp_codegen_memcpy(L_138, G_B43_0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(V_4, L_138, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_139, V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_140 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_139);
		if (L_140)
		{
			G_B45_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B45_1 = G_B43_1;
			G_B45_2 = G_B43_2;
			G_B45_3 = G_B43_3;
			goto IL_031a;
		}
		il2cpp_codegen_memcpy(G_B44_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		G_B44_1 = G_B43_1;
		G_B44_2 = G_B43_2;
		G_B44_3 = G_B43_3;
	}
	{
		G_B46_0 = ((String_t*)(NULL));
		G_B46_1 = G_B44_1;
		G_B46_2 = G_B44_2;
		G_B46_3 = G_B44_3;
		goto IL_0325;
	}

IL_031a:
	{
		Il2CppConstrainedCallData L_142;
		Il2CppMethodPointer L_143 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (void*)G_B45_0, &L_142, L_141);
		typedef String_t* ( *func_L_144)(void*,const RuntimeMethod*);
		String_t* L_145 = ((func_L_144)L_143)(L_142.thisPtr,L_142.method);
		G_B46_0 = L_145;
		G_B46_1 = G_B45_1;
		G_B46_2 = G_B45_2;
		G_B46_3 = G_B45_3;
	}

IL_0325:
	{
		(G_B46_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B46_1), (String_t*)G_B46_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_146 = G_B46_3;
		(L_146)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_147 = L_146;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_148, V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_149 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_148);
		if (L_149)
		{
			G_B49_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
			G_B49_1 = ((int32_t)9);
			G_B49_2 = L_147;
			G_B49_3 = L_147;
			goto IL_035e;
		}
		G_B47_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
		G_B47_1 = ((int32_t)9);
		G_B47_2 = L_147;
		G_B47_3 = L_147;
	}
	{
		il2cpp_codegen_memcpy(L_150, G_B47_0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(V_5, L_150, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_151, V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_152 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_151);
		if (L_152)
		{
			G_B49_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_5);
			G_B49_1 = G_B47_1;
			G_B49_2 = G_B47_2;
			G_B49_3 = G_B47_3;
			goto IL_035e;
		}
		il2cpp_codegen_memcpy(G_B48_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		G_B48_1 = G_B47_1;
		G_B48_2 = G_B47_2;
		G_B48_3 = G_B47_3;
	}
	{
		G_B50_0 = ((String_t*)(NULL));
		G_B50_1 = G_B48_1;
		G_B50_2 = G_B48_2;
		G_B50_3 = G_B48_3;
		goto IL_0369;
	}

IL_035e:
	{
		Il2CppConstrainedCallData L_154;
		Il2CppMethodPointer L_155 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (void*)G_B49_0, &L_154, L_153);
		typedef String_t* ( *func_L_156)(void*,const RuntimeMethod*);
		String_t* L_157 = ((func_L_156)L_155)(L_154.thisPtr,L_154.method);
		G_B50_0 = L_157;
		G_B50_1 = G_B49_1;
		G_B50_2 = G_B49_2;
		G_B50_3 = G_B49_3;
	}

IL_0369:
	{
		(G_B50_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B50_1), (String_t*)G_B50_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_158 = G_B50_3;
		(L_158)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_159 = L_158;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_160, V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_161 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_160);
		if (L_161)
		{
			G_B53_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			G_B53_1 = ((int32_t)11);
			G_B53_2 = L_159;
			G_B53_3 = L_159;
			goto IL_03a3;
		}
		G_B51_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
		G_B51_1 = ((int32_t)11);
		G_B51_2 = L_159;
		G_B51_3 = L_159;
	}
	{
		il2cpp_codegen_memcpy(L_162, G_B51_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_6, L_162, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_163, V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_164 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_163);
		if (L_164)
		{
			G_B53_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_6);
			G_B53_1 = G_B51_1;
			G_B53_2 = G_B51_2;
			G_B53_3 = G_B51_3;
			goto IL_03a3;
		}
		il2cpp_codegen_memcpy(G_B52_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		G_B52_1 = G_B51_1;
		G_B52_2 = G_B51_2;
		G_B52_3 = G_B51_3;
	}
	{
		G_B54_0 = ((String_t*)(NULL));
		G_B54_1 = G_B52_1;
		G_B54_2 = G_B52_2;
		G_B54_3 = G_B52_3;
		goto IL_03ae;
	}

IL_03a3:
	{
		Il2CppConstrainedCallData L_166;
		Il2CppMethodPointer L_167 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 89), (void*)G_B53_0, &L_166, L_165);
		typedef String_t* ( *func_L_168)(void*,const RuntimeMethod*);
		String_t* L_169 = ((func_L_168)L_167)(L_166.thisPtr,L_166.method);
		G_B54_0 = L_169;
		G_B54_1 = G_B53_1;
		G_B54_2 = G_B53_2;
		G_B54_3 = G_B53_3;
	}

IL_03ae:
	{
		(G_B54_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B54_1), (String_t*)G_B54_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_170 = G_B54_3;
		(L_170)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_171 = L_170;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_172, V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_173 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_172);
		if (L_173)
		{
			G_B57_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B57_1 = ((int32_t)13);
			G_B57_2 = L_171;
			G_B57_3 = L_171;
			goto IL_03e8;
		}
		G_B55_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B55_1 = ((int32_t)13);
		G_B55_2 = L_171;
		G_B55_3 = L_171;
	}
	{
		il2cpp_codegen_memcpy(L_174, G_B55_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_7, L_174, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_175, V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_176 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_175);
		if (L_176)
		{
			G_B57_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			G_B57_1 = G_B55_1;
			G_B57_2 = G_B55_2;
			G_B57_3 = G_B55_3;
			goto IL_03e8;
		}
		il2cpp_codegen_memcpy(G_B56_0, (Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B56_1 = G_B55_1;
		G_B56_2 = G_B55_2;
		G_B56_3 = G_B55_3;
	}
	{
		G_B58_0 = ((String_t*)(NULL));
		G_B58_1 = G_B56_1;
		G_B58_2 = G_B56_2;
		G_B58_3 = G_B56_3;
		goto IL_03f3;
	}

IL_03e8:
	{
		Il2CppConstrainedCallData L_178;
		Il2CppMethodPointer L_179 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 90), (void*)G_B57_0, &L_178, L_177);
		typedef String_t* ( *func_L_180)(void*,const RuntimeMethod*);
		String_t* L_181 = ((func_L_180)L_179)(L_178.thisPtr,L_178.method);
		G_B58_0 = L_181;
		G_B58_1 = G_B57_1;
		G_B58_2 = G_B57_2;
		G_B58_3 = G_B57_3;
	}

IL_03f3:
	{
		(G_B58_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B58_1), (String_t*)G_B58_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_182 = G_B58_3;
		(L_182)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_183 = L_182;
		RuntimeObject* L_184 = V_0;
		String_t* L_185;
		L_185 = InterfaceFuncInvoker0< String_t* >::Invoke(1, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_184);
		(L_183)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_185);
		String_t* L_186;
		L_186 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_183, NULL);
		return L_186;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_8_ToString_mCBC8EEE6DF5982B972AEC0CAF758197B2CDE7E3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_8_ToString_mCBC8EEE6DF5982B972AEC0CAF758197B2CDE7E3E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m5413C9CBCCC7063A9FEADA1E0B07CB2E522B708D_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const uint32_t SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const uint32_t SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const uint32_t SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const uint32_t SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	void* L_22 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_46 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	void* L_58 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	void* L_70 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_82 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	void* L_89 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_103 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	void* L_115 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)));
	void* L_127 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
	void* L_139 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)));
	void* L_151 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	void* L_163 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
	void* L_175 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_7 = L_5;
	const Il2CppFullySharedGenericAny L_98 = L_5;
	const Il2CppFullySharedGenericAny L_100 = L_5;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	const Il2CppFullySharedGenericAny L_101 = L_8;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_19 = L_17;
	const Il2CppFullySharedGenericAny L_110 = L_17;
	const Il2CppFullySharedGenericAny L_112 = L_17;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	const Il2CppFullySharedGenericAny L_113 = L_20;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_31 = L_29;
	const Il2CppFullySharedGenericAny L_122 = L_29;
	const Il2CppFullySharedGenericAny L_124 = L_29;
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	const Il2CppFullySharedGenericAny L_125 = L_32;
	const Il2CppFullySharedGenericAny L_41 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_43 = L_41;
	const Il2CppFullySharedGenericAny L_134 = L_41;
	const Il2CppFullySharedGenericAny L_136 = L_41;
	const Il2CppFullySharedGenericAny L_44 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	const Il2CppFullySharedGenericAny L_137 = L_44;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_55 = L_53;
	const Il2CppFullySharedGenericAny L_146 = L_53;
	const Il2CppFullySharedGenericAny L_148 = L_53;
	const Il2CppFullySharedGenericAny L_56 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	const Il2CppFullySharedGenericAny L_149 = L_56;
	const Il2CppFullySharedGenericAny L_65 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_67 = L_65;
	const Il2CppFullySharedGenericAny L_158 = L_65;
	const Il2CppFullySharedGenericAny L_160 = L_65;
	const Il2CppFullySharedGenericAny L_68 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	const Il2CppFullySharedGenericAny L_161 = L_68;
	const Il2CppFullySharedGenericAny L_77 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_79 = L_77;
	const Il2CppFullySharedGenericAny L_170 = L_77;
	const Il2CppFullySharedGenericAny L_172 = L_77;
	const Il2CppFullySharedGenericAny L_80 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	const Il2CppFullySharedGenericAny L_173 = L_80;
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	memset(V_1, 0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	memset(V_2, 0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(V_3, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(V_4, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(V_5, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(V_6, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(V_7, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	Il2CppFullySharedGenericAny* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	memset(G_B3_0, 0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	memset(G_B7_0, 0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Il2CppFullySharedGenericAny* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Il2CppFullySharedGenericAny G_B11_0 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(G_B11_0, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Il2CppFullySharedGenericAny* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	Il2CppFullySharedGenericAny* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	Il2CppFullySharedGenericAny G_B15_0 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(G_B15_0, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	String_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	Il2CppFullySharedGenericAny* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	Il2CppFullySharedGenericAny* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	Il2CppFullySharedGenericAny G_B19_0 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(G_B19_0, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	String_t* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_3 = NULL;
	Il2CppFullySharedGenericAny* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_3 = NULL;
	Il2CppFullySharedGenericAny* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_3 = NULL;
	Il2CppFullySharedGenericAny G_B23_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B23_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B23_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_3 = NULL;
	String_t* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B25_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B25_3 = NULL;
	Il2CppFullySharedGenericAny* G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B28_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B28_3 = NULL;
	Il2CppFullySharedGenericAny* G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B26_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B26_3 = NULL;
	Il2CppFullySharedGenericAny G_B27_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B27_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B27_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B27_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B27_3 = NULL;
	String_t* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B29_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B29_3 = NULL;
	Il2CppFullySharedGenericAny* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B33_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B33_3 = NULL;
	Il2CppFullySharedGenericAny* G_B31_0 = NULL;
	int32_t G_B31_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B31_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B31_3 = NULL;
	Il2CppFullySharedGenericAny G_B32_0 = alloca(SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	memset(G_B32_0, 0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
	int32_t G_B32_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B32_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B32_3 = NULL;
	String_t* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B34_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B34_3 = NULL;
	Il2CppFullySharedGenericAny* G_B37_0 = NULL;
	int32_t G_B37_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B37_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B37_3 = NULL;
	Il2CppFullySharedGenericAny* G_B35_0 = NULL;
	int32_t G_B35_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B35_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B35_3 = NULL;
	Il2CppFullySharedGenericAny G_B36_0 = alloca(SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	memset(G_B36_0, 0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
	int32_t G_B36_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B36_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B36_3 = NULL;
	String_t* G_B38_0 = NULL;
	int32_t G_B38_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B38_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B38_3 = NULL;
	Il2CppFullySharedGenericAny* G_B41_0 = NULL;
	int32_t G_B41_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B41_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B41_3 = NULL;
	Il2CppFullySharedGenericAny* G_B39_0 = NULL;
	int32_t G_B39_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B39_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B39_3 = NULL;
	Il2CppFullySharedGenericAny G_B40_0 = alloca(SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	memset(G_B40_0, 0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
	int32_t G_B40_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B40_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B40_3 = NULL;
	String_t* G_B42_0 = NULL;
	int32_t G_B42_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B42_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B42_3 = NULL;
	Il2CppFullySharedGenericAny* G_B45_0 = NULL;
	int32_t G_B45_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B45_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B45_3 = NULL;
	Il2CppFullySharedGenericAny* G_B43_0 = NULL;
	int32_t G_B43_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B43_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B43_3 = NULL;
	Il2CppFullySharedGenericAny G_B44_0 = alloca(SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	memset(G_B44_0, 0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
	int32_t G_B44_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B44_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B44_3 = NULL;
	String_t* G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B46_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B46_3 = NULL;
	Il2CppFullySharedGenericAny* G_B49_0 = NULL;
	int32_t G_B49_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B49_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B49_3 = NULL;
	Il2CppFullySharedGenericAny* G_B47_0 = NULL;
	int32_t G_B47_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B47_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B47_3 = NULL;
	Il2CppFullySharedGenericAny G_B48_0 = alloca(SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	memset(G_B48_0, 0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
	int32_t G_B48_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B48_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B48_3 = NULL;
	String_t* G_B50_0 = NULL;
	int32_t G_B50_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_3 = NULL;
	Il2CppFullySharedGenericAny* G_B53_0 = NULL;
	int32_t G_B53_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_3 = NULL;
	Il2CppFullySharedGenericAny* G_B51_0 = NULL;
	int32_t G_B51_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B51_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B51_3 = NULL;
	Il2CppFullySharedGenericAny G_B52_0 = alloca(SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	memset(G_B52_0, 0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
	int32_t G_B52_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B52_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B52_3 = NULL;
	String_t* G_B54_0 = NULL;
	int32_t G_B54_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_3 = NULL;
	Il2CppFullySharedGenericAny* G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_3 = NULL;
	Il2CppFullySharedGenericAny* G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B55_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B55_3 = NULL;
	Il2CppFullySharedGenericAny G_B56_0 = alloca(SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	memset(G_B56_0, 0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
	int32_t G_B56_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B56_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B56_3 = NULL;
	String_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_3 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		RuntimeObject* L_1 = il2cpp_codegen_isinst_runtime(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_0);;
		V_0 = (RuntimeObject*)L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0213;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5);
		if (L_6)
		{
			G_B4_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
			G_B4_1 = 0;
			G_B4_2 = L_4;
			G_B4_3 = L_4;
			goto IL_004a;
		}
		G_B2_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
		G_B2_1 = 0;
		G_B2_2 = L_4;
		G_B2_3 = L_4;
	}
	{
		il2cpp_codegen_memcpy(L_7, G_B2_0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_8);
		if (L_9)
		{
			G_B4_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B4_1 = G_B2_1;
			G_B4_2 = G_B2_2;
			G_B4_3 = G_B2_3;
			goto IL_004a;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_0055;
	}

IL_004a:
	{
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 84), (void*)G_B4_0, &L_11, L_10);
		typedef String_t* ( *func_L_13)(void*,const RuntimeMethod*);
		String_t* L_14 = ((func_L_13)L_12)(L_11.thisPtr,L_11.method);
		G_B5_0 = L_14;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_0055:
	{
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B5_3;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_17, V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_18 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_17);
		if (L_18)
		{
			G_B8_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
			G_B8_1 = 2;
			G_B8_2 = L_16;
			G_B8_3 = L_16;
			goto IL_008a;
		}
		G_B6_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
		G_B6_1 = 2;
		G_B6_2 = L_16;
		G_B6_3 = L_16;
	}
	{
		il2cpp_codegen_memcpy(L_19, G_B6_0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(V_2, L_19, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_20);
		if (L_21)
		{
			G_B8_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_008a;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_0095;
	}

IL_008a:
	{
		Il2CppConstrainedCallData L_23;
		Il2CppMethodPointer L_24 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85), (void*)G_B8_0, &L_23, L_22);
		typedef String_t* ( *func_L_25)(void*,const RuntimeMethod*);
		String_t* L_26 = ((func_L_25)L_24)(L_23.thisPtr,L_23.method);
		G_B9_0 = L_26;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0095:
	{
		(G_B9_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = G_B9_3;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_29, V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_30 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_29);
		if (L_30)
		{
			G_B12_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
			G_B12_1 = 4;
			G_B12_2 = L_28;
			G_B12_3 = L_28;
			goto IL_00ca;
		}
		G_B10_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
		G_B10_1 = 4;
		G_B10_2 = L_28;
		G_B10_3 = L_28;
	}
	{
		il2cpp_codegen_memcpy(L_31, G_B10_0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(V_3, L_31, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_32, V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_33 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_32);
		if (L_33)
		{
			G_B12_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			G_B12_3 = G_B10_3;
			goto IL_00ca;
		}
		il2cpp_codegen_memcpy(G_B11_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_1;
		G_B13_2 = G_B11_2;
		G_B13_3 = G_B11_3;
		goto IL_00d5;
	}

IL_00ca:
	{
		Il2CppConstrainedCallData L_35;
		Il2CppMethodPointer L_36 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 86), (void*)G_B12_0, &L_35, L_34);
		typedef String_t* ( *func_L_37)(void*,const RuntimeMethod*);
		String_t* L_38 = ((func_L_37)L_36)(L_35.thisPtr,L_35.method);
		G_B13_0 = L_38;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
	}

IL_00d5:
	{
		(G_B13_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B13_1), (String_t*)G_B13_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = G_B13_3;
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_41, V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_42 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_41);
		if (L_42)
		{
			G_B16_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
			G_B16_1 = 6;
			G_B16_2 = L_40;
			G_B16_3 = L_40;
			goto IL_010d;
		}
		G_B14_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
		G_B14_1 = 6;
		G_B14_2 = L_40;
		G_B14_3 = L_40;
	}
	{
		il2cpp_codegen_memcpy(L_43, G_B14_0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(V_4, L_43, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_44, V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_45 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_44);
		if (L_45)
		{
			G_B16_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			G_B16_3 = G_B14_3;
			goto IL_010d;
		}
		il2cpp_codegen_memcpy(G_B15_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
	}
	{
		G_B17_0 = ((String_t*)(NULL));
		G_B17_1 = G_B15_1;
		G_B17_2 = G_B15_2;
		G_B17_3 = G_B15_3;
		goto IL_0118;
	}

IL_010d:
	{
		Il2CppConstrainedCallData L_47;
		Il2CppMethodPointer L_48 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (void*)G_B16_0, &L_47, L_46);
		typedef String_t* ( *func_L_49)(void*,const RuntimeMethod*);
		String_t* L_50 = ((func_L_49)L_48)(L_47.thisPtr,L_47.method);
		G_B17_0 = L_50;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_0118:
	{
		(G_B17_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B17_1), (String_t*)G_B17_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = G_B17_3;
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_51;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_53, V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_54 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_53);
		if (L_54)
		{
			G_B20_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
			G_B20_1 = 8;
			G_B20_2 = L_52;
			G_B20_3 = L_52;
			goto IL_0150;
		}
		G_B18_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
		G_B18_1 = 8;
		G_B18_2 = L_52;
		G_B18_3 = L_52;
	}
	{
		il2cpp_codegen_memcpy(L_55, G_B18_0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(V_5, L_55, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_56, V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_57 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_56);
		if (L_57)
		{
			G_B20_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_5);
			G_B20_1 = G_B18_1;
			G_B20_2 = G_B18_2;
			G_B20_3 = G_B18_3;
			goto IL_0150;
		}
		il2cpp_codegen_memcpy(G_B19_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
		G_B19_3 = G_B18_3;
	}
	{
		G_B21_0 = ((String_t*)(NULL));
		G_B21_1 = G_B19_1;
		G_B21_2 = G_B19_2;
		G_B21_3 = G_B19_3;
		goto IL_015b;
	}

IL_0150:
	{
		Il2CppConstrainedCallData L_59;
		Il2CppMethodPointer L_60 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (void*)G_B20_0, &L_59, L_58);
		typedef String_t* ( *func_L_61)(void*,const RuntimeMethod*);
		String_t* L_62 = ((func_L_61)L_60)(L_59.thisPtr,L_59.method);
		G_B21_0 = L_62;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
	}

IL_015b:
	{
		(G_B21_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B21_1), (String_t*)G_B21_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = G_B21_3;
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_63;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_65, V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_66 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_65);
		if (L_66)
		{
			G_B24_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			G_B24_1 = ((int32_t)10);
			G_B24_2 = L_64;
			G_B24_3 = L_64;
			goto IL_0195;
		}
		G_B22_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
		G_B22_1 = ((int32_t)10);
		G_B22_2 = L_64;
		G_B22_3 = L_64;
	}
	{
		il2cpp_codegen_memcpy(L_67, G_B22_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_6, L_67, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_68, V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_69 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_68);
		if (L_69)
		{
			G_B24_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_6);
			G_B24_1 = G_B22_1;
			G_B24_2 = G_B22_2;
			G_B24_3 = G_B22_3;
			goto IL_0195;
		}
		il2cpp_codegen_memcpy(G_B23_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		G_B23_3 = G_B22_3;
	}
	{
		G_B25_0 = ((String_t*)(NULL));
		G_B25_1 = G_B23_1;
		G_B25_2 = G_B23_2;
		G_B25_3 = G_B23_3;
		goto IL_01a0;
	}

IL_0195:
	{
		Il2CppConstrainedCallData L_71;
		Il2CppMethodPointer L_72 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 89), (void*)G_B24_0, &L_71, L_70);
		typedef String_t* ( *func_L_73)(void*,const RuntimeMethod*);
		String_t* L_74 = ((func_L_73)L_72)(L_71.thisPtr,L_71.method);
		G_B25_0 = L_74;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
		G_B25_3 = G_B24_3;
	}

IL_01a0:
	{
		(G_B25_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B25_1), (String_t*)G_B25_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = G_B25_3;
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = L_75;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_77, V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_78 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_77);
		if (L_78)
		{
			G_B28_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B28_1 = ((int32_t)12);
			G_B28_2 = L_76;
			G_B28_3 = L_76;
			goto IL_01da;
		}
		G_B26_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B26_1 = ((int32_t)12);
		G_B26_2 = L_76;
		G_B26_3 = L_76;
	}
	{
		il2cpp_codegen_memcpy(L_79, G_B26_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_7, L_79, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_80, V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_81 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_80);
		if (L_81)
		{
			G_B28_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			G_B28_1 = G_B26_1;
			G_B28_2 = G_B26_2;
			G_B28_3 = G_B26_3;
			goto IL_01da;
		}
		il2cpp_codegen_memcpy(G_B27_0, (Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B27_1 = G_B26_1;
		G_B27_2 = G_B26_2;
		G_B27_3 = G_B26_3;
	}
	{
		G_B29_0 = ((String_t*)(NULL));
		G_B29_1 = G_B27_1;
		G_B29_2 = G_B27_2;
		G_B29_3 = G_B27_3;
		goto IL_01e5;
	}

IL_01da:
	{
		Il2CppConstrainedCallData L_83;
		Il2CppMethodPointer L_84 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 90), (void*)G_B28_0, &L_83, L_82);
		typedef String_t* ( *func_L_85)(void*,const RuntimeMethod*);
		String_t* L_86 = ((func_L_85)L_84)(L_83.thisPtr,L_83.method);
		G_B29_0 = L_86;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		G_B29_3 = G_B28_3;
	}

IL_01e5:
	{
		(G_B29_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B29_1), (String_t*)G_B29_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = G_B29_3;
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = L_87;
		Il2CppConstrainedCallData L_90;
		Il2CppMethodPointer L_91 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 91), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)))), &L_90, L_89);
		typedef String_t* ( *func_L_92)(void*,const RuntimeMethod*);
		String_t* L_93 = ((func_L_92)L_91)(L_90.thisPtr,L_90.method);
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_93);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_94 = L_88;
		(L_94)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_95;
		L_95 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_94, NULL);
		return L_95;
	}

IL_0213:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_96 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97 = L_96;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_98, V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_99 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_98);
		if (L_99)
		{
			G_B33_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
			G_B33_1 = 0;
			G_B33_2 = L_97;
			G_B33_3 = L_97;
			goto IL_0246;
		}
		G_B31_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
		G_B31_1 = 0;
		G_B31_2 = L_97;
		G_B31_3 = L_97;
	}
	{
		il2cpp_codegen_memcpy(L_100, G_B31_0, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(V_1, L_100, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		il2cpp_codegen_memcpy(L_101, V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		bool L_102 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_101);
		if (L_102)
		{
			G_B33_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B33_1 = G_B31_1;
			G_B33_2 = G_B31_2;
			G_B33_3 = G_B31_3;
			goto IL_0246;
		}
		il2cpp_codegen_memcpy(G_B32_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T1_t3867CEC284ADC3C55D864E3CD0FB32EB28935892);
		G_B32_1 = G_B31_1;
		G_B32_2 = G_B31_2;
		G_B32_3 = G_B31_3;
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		G_B34_2 = G_B32_2;
		G_B34_3 = G_B32_3;
		goto IL_0251;
	}

IL_0246:
	{
		Il2CppConstrainedCallData L_104;
		Il2CppMethodPointer L_105 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 84), (void*)G_B33_0, &L_104, L_103);
		typedef String_t* ( *func_L_106)(void*,const RuntimeMethod*);
		String_t* L_107 = ((func_L_106)L_105)(L_104.thisPtr,L_104.method);
		G_B34_0 = L_107;
		G_B34_1 = G_B33_1;
		G_B34_2 = G_B33_2;
		G_B34_3 = G_B33_3;
	}

IL_0251:
	{
		(G_B34_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B34_1), (String_t*)G_B34_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_108 = G_B34_3;
		(L_108)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_109 = L_108;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_110, V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_111 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_110);
		if (L_111)
		{
			G_B37_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
			G_B37_1 = 2;
			G_B37_2 = L_109;
			G_B37_3 = L_109;
			goto IL_0286;
		}
		G_B35_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),1)))));
		G_B35_1 = 2;
		G_B35_2 = L_109;
		G_B35_3 = L_109;
	}
	{
		il2cpp_codegen_memcpy(L_112, G_B35_0, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(V_2, L_112, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		il2cpp_codegen_memcpy(L_113, V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		bool L_114 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_113);
		if (L_114)
		{
			G_B37_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B37_1 = G_B35_1;
			G_B37_2 = G_B35_2;
			G_B37_3 = G_B35_3;
			goto IL_0286;
		}
		il2cpp_codegen_memcpy(G_B36_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T2_tCCA27EF0F26E2546C9627A371E0600F15C0DAF69);
		G_B36_1 = G_B35_1;
		G_B36_2 = G_B35_2;
		G_B36_3 = G_B35_3;
	}
	{
		G_B38_0 = ((String_t*)(NULL));
		G_B38_1 = G_B36_1;
		G_B38_2 = G_B36_2;
		G_B38_3 = G_B36_3;
		goto IL_0291;
	}

IL_0286:
	{
		Il2CppConstrainedCallData L_116;
		Il2CppMethodPointer L_117 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 85), (void*)G_B37_0, &L_116, L_115);
		typedef String_t* ( *func_L_118)(void*,const RuntimeMethod*);
		String_t* L_119 = ((func_L_118)L_117)(L_116.thisPtr,L_116.method);
		G_B38_0 = L_119;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
		G_B38_3 = G_B37_3;
	}

IL_0291:
	{
		(G_B38_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B38_1), (String_t*)G_B38_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_120 = G_B38_3;
		(L_120)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_121 = L_120;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_122, V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_123 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_122);
		if (L_123)
		{
			G_B41_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
			G_B41_1 = 4;
			G_B41_2 = L_121;
			G_B41_3 = L_121;
			goto IL_02c6;
		}
		G_B39_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),2)))));
		G_B39_1 = 4;
		G_B39_2 = L_121;
		G_B39_3 = L_121;
	}
	{
		il2cpp_codegen_memcpy(L_124, G_B39_0, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(V_3, L_124, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		il2cpp_codegen_memcpy(L_125, V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		bool L_126 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_125);
		if (L_126)
		{
			G_B41_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B41_1 = G_B39_1;
			G_B41_2 = G_B39_2;
			G_B41_3 = G_B39_3;
			goto IL_02c6;
		}
		il2cpp_codegen_memcpy(G_B40_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T3_tBD61B164D2D99903274B904108A230FFB67E3262);
		G_B40_1 = G_B39_1;
		G_B40_2 = G_B39_2;
		G_B40_3 = G_B39_3;
	}
	{
		G_B42_0 = ((String_t*)(NULL));
		G_B42_1 = G_B40_1;
		G_B42_2 = G_B40_2;
		G_B42_3 = G_B40_3;
		goto IL_02d1;
	}

IL_02c6:
	{
		Il2CppConstrainedCallData L_128;
		Il2CppMethodPointer L_129 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 86), (void*)G_B41_0, &L_128, L_127);
		typedef String_t* ( *func_L_130)(void*,const RuntimeMethod*);
		String_t* L_131 = ((func_L_130)L_129)(L_128.thisPtr,L_128.method);
		G_B42_0 = L_131;
		G_B42_1 = G_B41_1;
		G_B42_2 = G_B41_2;
		G_B42_3 = G_B41_3;
	}

IL_02d1:
	{
		(G_B42_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B42_1), (String_t*)G_B42_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_132 = G_B42_3;
		(L_132)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_133 = L_132;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_134, V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_135 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_134);
		if (L_135)
		{
			G_B45_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
			G_B45_1 = 6;
			G_B45_2 = L_133;
			G_B45_3 = L_133;
			goto IL_0309;
		}
		G_B43_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),3)))));
		G_B43_1 = 6;
		G_B43_2 = L_133;
		G_B43_3 = L_133;
	}
	{
		il2cpp_codegen_memcpy(L_136, G_B43_0, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(V_4, L_136, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		il2cpp_codegen_memcpy(L_137, V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		bool L_138 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_137);
		if (L_138)
		{
			G_B45_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B45_1 = G_B43_1;
			G_B45_2 = G_B43_2;
			G_B45_3 = G_B43_3;
			goto IL_0309;
		}
		il2cpp_codegen_memcpy(G_B44_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T4_t069BDD0F701D3C8A5C6EAAE2FFD344CE94BB5294);
		G_B44_1 = G_B43_1;
		G_B44_2 = G_B43_2;
		G_B44_3 = G_B43_3;
	}
	{
		G_B46_0 = ((String_t*)(NULL));
		G_B46_1 = G_B44_1;
		G_B46_2 = G_B44_2;
		G_B46_3 = G_B44_3;
		goto IL_0314;
	}

IL_0309:
	{
		Il2CppConstrainedCallData L_140;
		Il2CppMethodPointer L_141 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 87), (void*)G_B45_0, &L_140, L_139);
		typedef String_t* ( *func_L_142)(void*,const RuntimeMethod*);
		String_t* L_143 = ((func_L_142)L_141)(L_140.thisPtr,L_140.method);
		G_B46_0 = L_143;
		G_B46_1 = G_B45_1;
		G_B46_2 = G_B45_2;
		G_B46_3 = G_B45_3;
	}

IL_0314:
	{
		(G_B46_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B46_1), (String_t*)G_B46_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_144 = G_B46_3;
		(L_144)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_145 = L_144;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_146, V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_147 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_146);
		if (L_147)
		{
			G_B49_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
			G_B49_1 = 8;
			G_B49_2 = L_145;
			G_B49_3 = L_145;
			goto IL_034c;
		}
		G_B47_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),4)))));
		G_B47_1 = 8;
		G_B47_2 = L_145;
		G_B47_3 = L_145;
	}
	{
		il2cpp_codegen_memcpy(L_148, G_B47_0, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(V_5, L_148, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		il2cpp_codegen_memcpy(L_149, V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		bool L_150 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_149);
		if (L_150)
		{
			G_B49_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_5);
			G_B49_1 = G_B47_1;
			G_B49_2 = G_B47_2;
			G_B49_3 = G_B47_3;
			goto IL_034c;
		}
		il2cpp_codegen_memcpy(G_B48_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_T5_t6C0EC5E1E442917290BF46F4AB8C1503F89780E7);
		G_B48_1 = G_B47_1;
		G_B48_2 = G_B47_2;
		G_B48_3 = G_B47_3;
	}
	{
		G_B50_0 = ((String_t*)(NULL));
		G_B50_1 = G_B48_1;
		G_B50_2 = G_B48_2;
		G_B50_3 = G_B48_3;
		goto IL_0357;
	}

IL_034c:
	{
		Il2CppConstrainedCallData L_152;
		Il2CppMethodPointer L_153 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 88), (void*)G_B49_0, &L_152, L_151);
		typedef String_t* ( *func_L_154)(void*,const RuntimeMethod*);
		String_t* L_155 = ((func_L_154)L_153)(L_152.thisPtr,L_152.method);
		G_B50_0 = L_155;
		G_B50_1 = G_B49_1;
		G_B50_2 = G_B49_2;
		G_B50_3 = G_B49_3;
	}

IL_0357:
	{
		(G_B50_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B50_1), (String_t*)G_B50_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_156 = G_B50_3;
		(L_156)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_157 = L_156;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_158, V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_159 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_158);
		if (L_159)
		{
			G_B53_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
			G_B53_1 = ((int32_t)10);
			G_B53_2 = L_157;
			G_B53_3 = L_157;
			goto IL_0391;
		}
		G_B51_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),5)))));
		G_B51_1 = ((int32_t)10);
		G_B51_2 = L_157;
		G_B51_3 = L_157;
	}
	{
		il2cpp_codegen_memcpy(L_160, G_B51_0, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(V_6, L_160, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		il2cpp_codegen_memcpy(L_161, V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		bool L_162 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_161);
		if (L_162)
		{
			G_B53_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_6);
			G_B53_1 = G_B51_1;
			G_B53_2 = G_B51_2;
			G_B53_3 = G_B51_3;
			goto IL_0391;
		}
		il2cpp_codegen_memcpy(G_B52_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_T6_t3AD66BFE8E3FE1D068A11C15D8C2FF6593D6CAAB);
		G_B52_1 = G_B51_1;
		G_B52_2 = G_B51_2;
		G_B52_3 = G_B51_3;
	}
	{
		G_B54_0 = ((String_t*)(NULL));
		G_B54_1 = G_B52_1;
		G_B54_2 = G_B52_2;
		G_B54_3 = G_B52_3;
		goto IL_039c;
	}

IL_0391:
	{
		Il2CppConstrainedCallData L_164;
		Il2CppMethodPointer L_165 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 89), (void*)G_B53_0, &L_164, L_163);
		typedef String_t* ( *func_L_166)(void*,const RuntimeMethod*);
		String_t* L_167 = ((func_L_166)L_165)(L_164.thisPtr,L_164.method);
		G_B54_0 = L_167;
		G_B54_1 = G_B53_1;
		G_B54_2 = G_B53_2;
		G_B54_3 = G_B53_3;
	}

IL_039c:
	{
		(G_B54_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B54_1), (String_t*)G_B54_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_168 = G_B54_3;
		(L_168)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_169 = L_168;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_170, V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_171 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_170);
		if (L_171)
		{
			G_B57_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
			G_B57_1 = ((int32_t)12);
			G_B57_2 = L_169;
			G_B57_3 = L_169;
			goto IL_03d6;
		}
		G_B55_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),6)))));
		G_B55_1 = ((int32_t)12);
		G_B55_2 = L_169;
		G_B55_3 = L_169;
	}
	{
		il2cpp_codegen_memcpy(L_172, G_B55_0, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(V_7, L_172, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		il2cpp_codegen_memcpy(L_173, V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		bool L_174 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_173);
		if (L_174)
		{
			G_B57_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			G_B57_1 = G_B55_1;
			G_B57_2 = G_B55_2;
			G_B57_3 = G_B55_3;
			goto IL_03d6;
		}
		il2cpp_codegen_memcpy(G_B56_0, (Il2CppFullySharedGenericAny*)V_7, SizeOf_T7_tF714AC1C101E867BAF0BC15B92F798B6F260084A);
		G_B56_1 = G_B55_1;
		G_B56_2 = G_B55_2;
		G_B56_3 = G_B55_3;
	}
	{
		G_B58_0 = ((String_t*)(NULL));
		G_B58_1 = G_B56_1;
		G_B58_2 = G_B56_2;
		G_B58_3 = G_B56_3;
		goto IL_03e1;
	}

IL_03d6:
	{
		Il2CppConstrainedCallData L_176;
		Il2CppMethodPointer L_177 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 90), (void*)G_B57_0, &L_176, L_175);
		typedef String_t* ( *func_L_178)(void*,const RuntimeMethod*);
		String_t* L_179 = ((func_L_178)L_177)(L_176.thisPtr,L_176.method);
		G_B58_0 = L_179;
		G_B58_1 = G_B57_1;
		G_B58_2 = G_B57_2;
		G_B58_3 = G_B57_3;
	}

IL_03e1:
	{
		(G_B58_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B58_1), (String_t*)G_B58_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_180 = G_B58_3;
		(L_180)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_181 = L_180;
		RuntimeObject* L_182 = V_0;
		String_t* L_183;
		L_183 = InterfaceFuncInvoker0< String_t* >::Invoke(1, IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_182);
		(L_181)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_183);
		String_t* L_184;
		L_184 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_181, NULL);
		return L_184;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m5413C9CBCCC7063A9FEADA1E0B07CB2E522B708D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_8_System_IValueTupleInternal_ToStringEnd_m5413C9CBCCC7063A9FEADA1E0B07CB2E522B708D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mCEC9AD927A3B4A0BF8150A2FC47A62375090D949_gshared (ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2),7)), SizeOf_TRest_t19CF2373F13A693121DEAE5DD5AA490544D81DFE);
		RuntimeObject* L_1 = il2cpp_codegen_isinst_runtime(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0), IValueTupleInternal_t5D1D5F001369BEB8B958272831886C8A7E05A945_il2cpp_TypeInfo_var, L_0);;
		V_0 = (RuntimeObject*)L_1;
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		return ((int32_t)il2cpp_codegen_add(7, L_4));
	}

IL_001d:
	{
		return 8;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mCEC9AD927A3B4A0BF8150A2FC47A62375090D949_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_8_t9FA0293161A3C9A273444731EEB5DE3CE5186BF0>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_8_System_Runtime_CompilerServices_ITuple_get_Length_mCEC9AD927A3B4A0BF8150A2FC47A62375090D949(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_get_Zero_mDB2680DF070B1C7F273400548848C621F96343A4_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_zero;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83_gshared (const RuntimeMethod* method) 
{
	VectorSizeHelper_tC26CEAD1B0D88F765A24D653A74900C4C7FEBD18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* L_0 = (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)(&(&V_0)->____placeholder);
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&L_0->___register);
		uint8_t* L_2 = (uint8_t*)(&L_1->___byte_0);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_2,NULL));
		V_1 = (uint8_t*)L_3;
		uint8_t* L_4 = (uint8_t*)(&(&V_0)->____byte);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(L_4,NULL));
		uint8_t* L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,uint8_t*,intptr_t,false,false>(((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_5, (intptr_t)L_6))/1)),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_7,NULL));
		V_2 = (-1);
		G_B2_0 = L_8;
		goto IL_0045;
	}

IL_0045:
	{
		G_B4_0 = G_B2_0;
		goto IL_0067;
	}

IL_0067:
	{
		G_B5_0 = G_B4_0;
	}
	{
		V_2 = 2;
		G_B21_0 = G_B5_0;
		goto IL_0176;
	}

IL_0176:
	{
		int32_t L_9 = V_2;
		return ((int32_t)(G_B21_0/L_9));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uint16_t* V_6 = NULL;
	uint16_t* V_7 = NULL;
	int32_t V_8 = 0;
	int16_t* V_9 = NULL;
	int16_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t V_17 = 0;
	uint64_t* V_18 = NULL;
	uint64_t* V_19 = NULL;
	int32_t V_20 = 0;
	int64_t* V_21 = NULL;
	int64_t* V_22 = NULL;
	int32_t V_23 = 0;
	float* V_24 = NULL;
	float* V_25 = NULL;
	int32_t V_26 = 0;
	double* V_27 = NULL;
	double* V_28 = NULL;
	int32_t V_29 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0386;
		}
	}
	{
		goto IL_005e;
	}

IL_005e:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_2 = (uint16_t*)(&L_1->___uint16_0);
		V_7 = L_2;
		uint16_t* L_3 = V_7;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_3,NULL));
		V_6 = (uint16_t*)L_4;
		V_8 = 0;
		goto IL_00ff;
	}

IL_00e5:
	{
		uint16_t* L_5 = V_6;
		int32_t L_6 = V_8;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		uint16_t L_8 = ___0_value;
		il2cpp_codegen_stind<int16_t>((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2)))), (int16_t)L_8);
		int32_t L_9 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_00ff:
	{
		int32_t L_10 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_11;
		L_11 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_00e5;
		}
	}
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (uint16_t*)L_12;
		return;
	}

IL_0386:
	{
		goto IL_0505;
	}

IL_0505:
	{
		goto IL_0684;
	}

IL_0684:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_13 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_14 = ___0_value;
		L_13->___uint16_0 = L_14;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_15 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_16 = ___0_value;
		L_15->___uint16_1 = L_16;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_17 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_18 = ___0_value;
		L_17->___uint16_2 = L_18;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_20 = ___0_value;
		L_19->___uint16_3 = L_20;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_21 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_22 = ___0_value;
		L_21->___uint16_4 = L_22;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_23 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_24 = ___0_value;
		L_23->___uint16_5 = L_24;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_25 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_26 = ___0_value;
		L_25->___uint16_6 = L_26;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_27 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_28 = ___0_value;
		L_27->___uint16_7 = L_28;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427_AdjustorThunk (RuntimeObject* __this, uint16_t ___0_value, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_dataPointer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359(__this, L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_AdjustorThunk (RuntimeObject* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3(_thisAdjusted, ___0_dataPointer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int8_t* V_4 = NULL;
	int8_t* V_5 = NULL;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t* V_8 = NULL;
	uint16_t* V_9 = NULL;
	uint16_t* V_10 = NULL;
	int32_t V_11 = 0;
	int16_t* V_12 = NULL;
	int16_t* V_13 = NULL;
	int16_t* V_14 = NULL;
	int32_t V_15 = 0;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	uint32_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t* V_20 = NULL;
	int32_t* V_21 = NULL;
	int32_t* V_22 = NULL;
	int32_t V_23 = 0;
	uint64_t* V_24 = NULL;
	uint64_t* V_25 = NULL;
	uint64_t* V_26 = NULL;
	int32_t V_27 = 0;
	int64_t* V_28 = NULL;
	int64_t* V_29 = NULL;
	int64_t* V_30 = NULL;
	int32_t V_31 = 0;
	float* V_32 = NULL;
	float* V_33 = NULL;
	float* V_34 = NULL;
	int32_t V_35 = 0;
	double* V_36 = NULL;
	double* V_37 = NULL;
	double* V_38 = NULL;
	int32_t V_39 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		goto IL_0053;
	}

IL_0053:
	{
		goto IL_00ae;
	}

IL_00ae:
	{
	}
	{
		void* L_0 = ___0_dataPointer;
		V_8 = (uint16_t*)L_0;
		uint16_t* L_1 = V_8;
		int32_t L_2 = ___1_offset;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		V_8 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_4 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_5 = (uint16_t*)(&L_4->___uint16_0);
		V_10 = L_5;
		uint16_t* L_6 = V_10;
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_6,NULL));
		V_9 = (uint16_t*)L_7;
		V_11 = 0;
		goto IL_0104;
	}

IL_00ec:
	{
		uint16_t* L_8 = V_9;
		int32_t L_9 = V_11;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		uint16_t* L_11 = V_8;
		int32_t L_12 = V_11;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, uint16_t>(((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 2)))));
		il2cpp_codegen_stind<int16_t>((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 2)))), (int16_t)L_14);
		int32_t L_15 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0104:
	{
		int32_t L_16 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_17;
		L_17 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_00ec;
		}
	}
	{
		uintptr_t L_18 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_10 = (uint16_t*)L_18;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359_AdjustorThunk (RuntimeObject* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	Vector_1__ctor_m8212BCFF76673CC904541B2D9AF39E5FF124B359(_thisAdjusted, ___0_dataPointer, ___1_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) 
{
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_0 = ___0_existingRegister;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_1 = (*(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)L_0);
		__this->___register = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_AdjustorThunk (RuntimeObject* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A(_thisAdjusted, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	uint16_t* V_2 = NULL;
	int16_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	uint64_t* V_6 = NULL;
	int64_t* V_7 = NULL;
	float* V_8 = NULL;
	double* V_9 = NULL;
	{
		int32_t L_0 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F)), L_5, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0022:
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_0090;
	}

IL_0090:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_8 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_9 = (uint16_t*)(&L_8->___uint16_0);
		V_2 = L_9;
		uint16_t* L_10 = V_2;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>(L_10,NULL));
		int32_t L_12 = ___0_index;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, uint16_t>(((uint16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 2))))));
		return (uint16_t)L_14;
	}
}
IL2CPP_EXTERN_C  uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	uint16_t _returnValue;
	_returnValue = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
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
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(__this, ((*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_inline(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_2;
		L_2 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_3 = V_0;
		uint16_t L_4;
		L_4 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_other), L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_5;
		L_5 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_8;
		L_8 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		goto IL_01f0;
	}

IL_01f0:
	{
		goto IL_03af;
	}

IL_03af:
	{
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_9 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_10 = L_9->___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_11 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_12 = L_11.___register;
		uint16_t L_13 = L_12.___uint16_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_13))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_14 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_15 = L_14->___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_16 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_17 = L_16.___register;
		uint16_t L_18 = L_17.___uint16_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_18))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_20 = L_19->___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_21 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_22 = L_21.___register;
		uint16_t L_23 = L_22.___uint16_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_23))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_24 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_25 = L_24->___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint16_t L_28 = L_27.___uint16_3;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_28))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_29 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_30 = L_29->___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_31 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_32 = L_31.___register;
		uint16_t L_33 = L_32.___uint16_4;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_33))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_34 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_35 = L_34->___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint16_t L_38 = L_37.___uint16_5;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_38))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_39 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_40 = L_39->___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_41 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_42 = L_41.___register;
		uint16_t L_43 = L_42.___uint16_6;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_43))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_44 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_45 = L_44->___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_46 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_47 = L_46.___register;
		uint16_t L_48 = L_47.___uint16_7;
		return (bool)((((int32_t)L_45) == ((int32_t)L_48))? 1 : 0);
	}

IL_0494:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8_AdjustorThunk (RuntimeObject* __this, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_other, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	bool _returnValue;
	_returnValue = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	double V_20 = 0.0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_034a;
		}
	}
	{
		goto IL_0059;
	}

IL_0059:
	{
		goto IL_00a7;
	}

IL_00a7:
	{
	}
	{
		V_5 = 0;
		goto IL_00ef;
	}

IL_00c7:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_3;
		L_3 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_6 = L_3;
		int32_t L_4;
		L_4 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&V_6), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_1, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_00ef:
	{
		int32_t L_7 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_8;
		L_8 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_034a:
	{
		goto IL_04da;
	}

IL_04da:
	{
		goto IL_066a;
	}

IL_066a:
	{
	}
	{
		int32_t L_10 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_11 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_12 = (uint16_t*)(&L_11->___uint16_0);
		int32_t L_13;
		L_13 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_10, L_13, NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_16 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_17 = (uint16_t*)(&L_16->___uint16_1);
		int32_t L_18;
		L_18 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_17, NULL);
		int32_t L_19;
		L_19 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_15, L_18, NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_21 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_22 = (uint16_t*)(&L_21->___uint16_2);
		int32_t L_23;
		L_23 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_22, NULL);
		int32_t L_24;
		L_24 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_20, L_23, NULL);
		V_0 = L_24;
		int32_t L_25 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_26 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_27 = (uint16_t*)(&L_26->___uint16_3);
		int32_t L_28;
		L_28 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_27, NULL);
		int32_t L_29;
		L_29 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_25, L_28, NULL);
		V_0 = L_29;
		int32_t L_30 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_31 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_32 = (uint16_t*)(&L_31->___uint16_4);
		int32_t L_33;
		L_33 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_32, NULL);
		int32_t L_34;
		L_34 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_30, L_33, NULL);
		V_0 = L_34;
		int32_t L_35 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_36 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_37 = (uint16_t*)(&L_36->___uint16_5);
		int32_t L_38;
		L_38 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_37, NULL);
		int32_t L_39;
		L_39 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_35, L_38, NULL);
		V_0 = L_39;
		int32_t L_40 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_41 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_42 = (uint16_t*)(&L_41->___uint16_6);
		int32_t L_43;
		L_43 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_42, NULL);
		int32_t L_44;
		L_44 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_40, L_43, NULL);
		V_0 = L_44;
		int32_t L_45 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_46 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_47 = (uint16_t*)(&L_46->___uint16_7);
		int32_t L_48;
		L_48 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_47, NULL);
		int32_t L_49;
		L_49 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_45, L_48, NULL);
		V_0 = L_49;
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C  int32_t Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	int32_t _returnValue;
	_returnValue = Vector_1_GetHashCode_m3C7CFE908C6BB2DC94F94F7615F2D1AF0E2777D9(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		String_t* L_1;
		L_1 = Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, (RuntimeObject*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m2444D8FDCF0568D259DAE989EB7BCC77D37B2D6D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_formatProvider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, (Il2CppChar)((int32_t)60), NULL);
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		StringBuilder_t* L_6 = V_0;
		int32_t L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_8;
		L_8 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_9);
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_formatProvider;
		String_t* L_13;
		L_13 = UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521((uint16_t*)UnBox(L_10, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)), L_11, L_12, NULL);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = V_1;
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
		StringBuilder_t* L_18 = V_0;
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, (Il2CppChar)((int32_t)32), NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0053:
	{
		int32_t L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_22;
		L_22 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_24;
		L_24 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uint16_t L_25;
		L_25 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		uint16_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_26);
		String_t* L_28 = ___0_format;
		RuntimeObject* L_29 = ___1_formatProvider;
		String_t* L_30;
		L_30 = UInt16_ToString_mBD648884B6569D3E7D779669EEFCB1ED5EE4A521((uint16_t*)UnBox(L_27, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)), L_28, L_29, NULL);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_30, NULL);
		StringBuilder_t* L_32 = V_0;
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, (Il2CppChar)((int32_t)62), NULL);
		StringBuilder_t* L_34 = V_0;
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_34);
		return L_35;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489>(__this);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_mA9FEB41834880EF7C7688EB8C3F83286697B0BC7(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_1;
		L_1 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8((&___0_left), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_m32F4DFF513244591C00E23353EB6F6294E8BE9F0_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_0 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&(&___0_value)->___register);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_1), L_0, Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		if ((uintptr_t)L_2 * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_2, 2));
		int8_t* L_4;
		if (L_3 == 0)
		{
			L_4 = NULL;
		}
		else
		{
			L_4 = (int8_t*)alloca(L_3);
			memset(L_4, 0, L_3);
		}
		V_4 = (uint16_t*)L_4;
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_5 = V_4;
		int32_t L_6 = V_5;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_9;
		L_9 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_10 = V_5;
		uint16_t L_11;
		L_11 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_12;
		L_12 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_12)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_13;
		L_13 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_13));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		il2cpp_codegen_stind<int16_t>((int16_t*)G_B22_1, (int16_t)G_B22_0);
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0122:
	{
		int32_t L_15 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_16;
		L_16 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_17 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_18), (void*)L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_18;
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		goto IL_06e5;
	}

IL_06e5:
	{
		goto IL_097b;
	}

IL_097b:
	{
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_19 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_20 = L_19.___register;
		uint16_t L_21 = L_20.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_22 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_23 = L_22.___register;
		uint16_t L_24 = L_23.___uint16_0;
		if ((((int32_t)L_21) == ((int32_t)L_24)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_25;
		L_25 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_25));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint16_t L_28 = L_27.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_29 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_30 = L_29.___register;
		uint16_t L_31 = L_30.___uint16_1;
		if ((((int32_t)L_28) == ((int32_t)L_31)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_32;
		L_32 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_32));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_33 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_34 = L_33.___register;
		uint16_t L_35 = L_34.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint16_t L_38 = L_37.___uint16_2;
		if ((((int32_t)L_35) == ((int32_t)L_38)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_39;
		L_39 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_39));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_40 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_41 = L_40.___register;
		uint16_t L_42 = L_41.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_43 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_44 = L_43.___register;
		uint16_t L_45 = L_44.___uint16_3;
		if ((((int32_t)L_42) == ((int32_t)L_45)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_46;
		L_46 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_46));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_47 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_48 = L_47.___register;
		uint16_t L_49 = L_48.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_50 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_51 = L_50.___register;
		uint16_t L_52 = L_51.___uint16_4;
		if ((((int32_t)L_49) == ((int32_t)L_52)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_53;
		L_53 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_53));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_54 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_55 = L_54.___register;
		uint16_t L_56 = L_55.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_57 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_58 = L_57.___register;
		uint16_t L_59 = L_58.___uint16_5;
		if ((((int32_t)L_56) == ((int32_t)L_59)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_60;
		L_60 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_60));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_61 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_62 = L_61.___register;
		uint16_t L_63 = L_62.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_64 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_65 = L_64.___register;
		uint16_t L_66 = L_65.___uint16_6;
		if ((((int32_t)L_63) == ((int32_t)L_66)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_67;
		L_67 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_67));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_68 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_69 = L_68.___register;
		uint16_t L_70 = L_69.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_71 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_72 = L_71.___register;
		uint16_t L_73 = L_72.___uint16_7;
		if ((((int32_t)L_70) == ((int32_t)L_73)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_74;
		L_74 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_74));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_75), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_75;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
	}
	{
		uint16_t L_0 = ___0_left;
		uint16_t L_1 = ___1_right;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_gshared (const RuntimeMethod* method) 
{
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
	}
	{
		return (uint16_t)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_gshared (const RuntimeMethod* method) 
{
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
	}
	{
		uint16_t L_0;
		L_0 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__cctor_m6764AA686DE7E188C362C5B3E96AB2F5AB09F3CA_gshared (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Vector_1_InitializeCount_m43BBDDA05FDAB290038584331DB79CB33C523B83(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count = L_0;
		il2cpp_codegen_initobj((&((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_zero), sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489));
		uint16_t L_1;
		L_1 = Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427((&L_2), L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_one = L_2;
		uint16_t L_3;
		L_3 = Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector_1__ctor_mDA4A6115C4120BFDD773FD4D3753FD3EC2B10427((&L_4), L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_allOnes = L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberGroupSeparator;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>((&V_0),NULL));
		il2cpp_codegen_stind<int16_t>((int16_t*)L_0, (int16_t)((int32_t)65535));
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* EqualityComparer_1_get_Default_m68A9FC33718EE6F74A877D4A760989A962FBD0D2_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* V_0 = NULL;
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_0 = ((EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB1324B20A8BC571BB3CBACC5E41F1A4D2F420632(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* EqualityComparer_1_get_Default_mB667824601441002EC96E1C190DC4BA2D348E1A4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* V_0 = NULL;
	{
		EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* L_0 = ((EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m059DA5E43AA85F81DEF3471D19BE64B208FEB408(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t59A8120CAF6FA4E0EA7F5900499889FF17C4B78E* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mD7F4E0B493DD44E2685BC17F8D6EAD92342CBC29_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
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
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8(__this, ((*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
	}
	{
		uint16_t L_0 = ___0_left;
		uint16_t L_1 = ___1_right;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mB42F3DAE52C3BC7579B302E623196C45A5DEAC6B_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_1;
		L_1 = Vector_1_Equals_m729FD34A0F43A7C8A8DF285BCED9B5B31D579FE8((&___0_left), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetOneValue_m7E814AFD17E4D390C12EF731DA01203D262D9953_gshared_inline (const RuntimeMethod* method) 
{
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_004e;
	}

IL_004e:
	{
	}
	{
		return (uint16_t)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Vector_1_GetAllBitsSetValue_m854DE079EA89F97089D3EF29D7C31F081F420580_gshared_inline (const RuntimeMethod* method) 
{
	{
		goto IL_002b;
	}

IL_002b:
	{
		goto IL_0056;
	}

IL_0056:
	{
	}
	{
		uint16_t L_0;
		L_0 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		return L_0;
	}
}
