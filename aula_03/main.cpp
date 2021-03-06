#include <iostream>
#include "vector2d.h"

void print_vector(const math::Vector2D& v)
{
	std::cout << "{" << v.x() << ", " << v.y() << "}\n";
}

int main()
{
	using math::Vector2D;

	auto v = Vector2D{3, 5};

    print_vector(v);

    v += {7, 8};

    print_vector(v);

    auto iv = inverted(v);

    print_vector(v);
    print_vector(iv);

    v.invert();

    print_vector(v);

    v*=(0.5);

    print_vector(v);

    auto w = v + Vector2D{7, 8};

    print_vector(v);
    print_vector(w);

    auto u = v * 0.5;

    print_vector(v);
    print_vector(u);


    const auto &v2 = v;
}