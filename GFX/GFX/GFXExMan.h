#pragma once
/*
**	Name:	GFXExMan.h
**	By:		pengtong.pt
**	Desc:	GFXEx�Ĺ�����
*/
#include <vector>
class GFXEx;

class GFXExMan
{
public:
	GFXExMan() {}
	virtual ~GFXExMan() {}
public:
	std::vector<GFXEx*>		m_GFXExArr;
};