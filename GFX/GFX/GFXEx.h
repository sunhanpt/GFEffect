#pragma once
/*
**	Name:	GFXEx.h
**	By:		pengtong.pt
**	Desc:	һ������gfxʵ���࣬��Ӧһ��.gfx�ļ�
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