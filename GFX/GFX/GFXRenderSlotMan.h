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
	// ������Ⱦ����
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

