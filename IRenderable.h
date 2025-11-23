#pragma once
#include "Vector2.h"
#include "Charimg.h"

class IRenderable
{
public:
	virtual ~IRenderable() = default;
	virtual Vector2* get_position() const = 0; // left top angle;
	virtual int get_z_index() const = 0;
	virtual Vector2* get_size() const = 0;
	virtual Charimg get_image() const = 0;
	virtual bool is_visible() const = 0;
};


