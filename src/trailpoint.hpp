#ifndef TRAILPOINT_H
#define TRAILPOINT_H

#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/variant/color.hpp>

using namespace godot;

class TrailPoint {
public:
	Vector3 center;
	Vector3 direction_vector;
	Color color;
	float size = 0.0;
};

#endif
