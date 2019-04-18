#include "vector2d.h"

namespace math {

Vector2D::Vector2D(double x, double y) :
	x_{x},
	y_{y}
{}


double Vector2D::x() const
{
	return x_;
}

double Vector2D::y() const
{
	return y_;
}

Vector2D& Vector2D::invert()
{
	x_ = -x_;
	y_ = -y_;

	return *this; //é um ponteiro que serve para encadear métodos
}

Vector2D& Vector2D::operator *=(double scalar)
{
	x_ *= scalar;

	return *this;
}

Vector2D& Vector2D::operator +=(const Vector2D& other)
{
	x_ += other.x_;
	y_ += other.y_;

	return *this;
}

Vector2D inverted(Vector2D v)
{
	return v.invert();
}

Vector2D operator +(Vector2D v, const Vector2D& w)
{
	return v += w;
}

Vector2D operator *(Vector2D lhs, double rhs)
{
	return lhs *= rhs;
}

}