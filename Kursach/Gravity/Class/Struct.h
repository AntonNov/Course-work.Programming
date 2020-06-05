#pragma once
//двумерный вектор
struct Vector2
{
	float x, y;
	Vector2()
	{}
	//Два конструктора
	Vector2(float _x, float _y) : x(_x), y(_y)
	{}
	Vector2(int _x, int _y) : x((float)_x), y((float)_y)
	{}
	//Перегрузка операторов
	Vector2& operator - ();
	Vector2& operator += (const Vector2&);
	Vector2& operator -= (const Vector2&);
	Vector2& operator * (const Vector2&);
};

struct Color
{
	float r, g, b;
	Color()
	{}

	Color(float _r, float _g, float _b) : r(_r / 255), g(_g / 255), b(_b / 255)
	{}
};