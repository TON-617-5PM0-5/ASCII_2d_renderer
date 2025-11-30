#pragma once
#include "IRenderable.h"

class RenderedImage : public IRenderable{
private:
	Charimg& picture;
public:
	Vector2 get_position() override;
	int get_z_index() override;
	Vector2 get_size() override;
	Charimg& get_image() override;
	bool is_visible() override;

	RenderedImage(Charimg& _pic);
};

