#pragma once
/*
**	Name:	GFXExMan.h
**	By:		pengtong.pt
**	Desc:	GFXEx的管理类
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