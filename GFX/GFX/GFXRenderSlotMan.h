#pragma once
/*
**	Name:	GFXRenderSlotMan.h
**	By:		pengtong.pt
**	Desc:	for gfx render
*/
#include <vector>

class GFXElement;

class GFXRenderSlot
{
public:
	// 各种渲染参数
};


class GFXRenderSlotMan
{
public:
	GFXRenderSlotMan() {}
	virtual ~GFXRenderSlotMan() {}

public:
	virtual bool RegisterOneElement(GFXElement* pElement);
	virtual bool RenderOneSlot(GFXRenderSlot* pSlot);

private:
	std::vector<GFXRenderSlot*>		m_RenderSlots;
};

