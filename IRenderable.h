#pragma once
#include "Vector2.h"
#include "Charimg.h"

class IRenderable
{
public:
	virtual ~IRenderable() = default;
	virtual Vector2 get_position() = 0; // left top angle;
	virtual int get_z_index() = 0;
	virtual Vector2 get_size() = 0;
	virtual Charimg& get_image() = 0;
	virtual bool is_visible() = 0;
};


