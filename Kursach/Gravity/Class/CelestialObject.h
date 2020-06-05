#pragma once
#include "Struct.h"
//небесный объект
class CelestialObject
{   //расположение в пространстве
    Vector2 position;
    //направление движения
    Vector2 acceleration;
    Color color;
    int r, m;
public:
   //2 конструктора
    CelestialObject() : position(Vector2(0, 0)), acceleration(Vector2(0, 0)), r(10), m(500), color(Color(0, 0, 0))
    {}

    CelestialObject(Vector2 _pos, Vector2 _vel, int _r, int _m, Color _color) : position(_pos), acceleration(_vel), r(_r), m(_m), color(_color)
    {}

    void Draw();
    //сумма векторов для нахождение нового местоположения
    void addedPosition(Vector2);
    //сумма векторов для нахождения новой скорости
    void addedAcceleration(Vector2);
    void addRadius(float);
    void addMass(float);
    //getters
    Vector2 getPosition();
    Vector2 getAcceleration();
    int getRadius();
    int getMass();
};