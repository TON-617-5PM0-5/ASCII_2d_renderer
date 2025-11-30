#include "RenderedImage.h"

RenderedImage::RenderedImage(Charimg& _pic) : picture(_pic) {

}

Vector2 RenderedImage::get_position()
{
	return { 0, 0 };
}

int RenderedImage::get_z_index()
{
	return 0;
}

Vector2 RenderedImage::get_size()
{
	return { 0, 0 };
}

Charimg& RenderedImage::get_image()
{
	return picture;
}

bool RenderedImage::is_visible()
{
	return true;
}

