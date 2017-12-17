#pragma once
/*
**	Name:	GFXEx.h
**	By:		pengtong.pt
**	Desc:	一个完整gfx实例类，对应一个.gfx文件
*/

class GFXEx
{
public:
	GFXEx() {}
	virtual ~GFXEx() {}
public:
	bool Load(const char* strFile) {}
	bool Save(const char* strFile) {}
};