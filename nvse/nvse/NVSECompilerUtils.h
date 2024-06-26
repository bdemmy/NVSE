#pragma once
#include "NVSELexer.h"
#include "ScriptTokens.h"

// Define tokens
extern std::unordered_map<NVSETokenType, OperatorType> tokenOpToNVSEOpType;

inline Script::VariableType GetScriptTypeFromToken(NVSEToken t) {
	switch (t.type) {
	case NVSETokenType::DoubleType:
		return Script::eVarType_Float;
	case NVSETokenType::IntType:
		return Script::eVarType_Integer;
	case NVSETokenType::RefType:
		return Script::eVarType_Ref;
	case NVSETokenType::ArrayType:
		return Script::eVarType_Array;
	case NVSETokenType::StringType:
		return Script::eVarType_String;
	default: 
		return Script::eVarType_Invalid;
	}
}

void CompDbg(const char *fmt, ...);
void CompInfo(const char *fmt, ...);
void CompErr(const char *fmt, ...);

bool isDefaultParse(Cmd_Parse parse);

uint32_t resolveVanillaEnum(const ParamInfo* info, const char* str);
bool doesFormMatchParamType(TESForm* form, ParamType type);