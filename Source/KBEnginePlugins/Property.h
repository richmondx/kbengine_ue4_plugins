// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "KBECommon.h"

/*
	�����һ��entitydef�ж��������
	��ģ�����������Ե�id�Լ��������͵���Ϣ
*/
class KBENGINEPLUGINS_API Property
{
public:
	Property();
	virtual ~Property();

	bool isBase()
	{
		return properFlags == (uint32)ED_FLAG_BASE_AND_CLIENT ||
			properFlags == (uint32)ED_FLAG_BASE;
	}

	bool isOwnerOnly()
	{
		return properFlags == (uint32)ED_FLAG_CELL_PUBLIC_AND_OWN ||
			properFlags == (uint32)ED_FLAG_OWN_CLIENT;
	}

	bool isOtherOnly()
	{
		return properFlags == (uint32)ED_FLAG_OTHER_CLIENTS ||
			properFlags == (uint32)ED_FLAG_OTHER_CLIENTS;
	}

public:
	FString name;
	KBEDATATYPE_BASE* pUtype;
	uint16 properUtype;
	uint32 properFlags;
	int16 aliasID;

	FString defaultValStr;

	//System.Reflection.MethodInfo setmethod = null;

	//object val = null;
};