#include "colors.h"
#include <iostream>
using namespace std;

Color::Color() : Color(0, 255)
{
}

Color::Color(int rgb) : Color(rgb, 255)
{
}

Color::Color(int r, int g, int b) : Color(r * 0x10000 + g * 0x100 + b, 255)
{
}

Color::Color(int r, int g, int b, int a) : Color(r * 0x10000 + g * 0x100 + b, a)
{
}

Color::Color(int rgb, int a)
{
    setRGBA(rgb, a);
}

int Color::r()
{
    return _r;
}

int Color::g()
{
    return _g;
}

int Color::b()
{
    return _b;
}

int Color::a()
{
    return _a;
}

int Color::rgb()
{
    return _rgb;
}

int Color::rgba()
{
    return _rgba;
}

void Color::printColorHex(bool includeAlpha)
{
    cout << "#" << hex << (includeAlpha ? _rgba : _rgb) << dec;
}

void Color::printColor(bool includeAlpha)
{
    cout << "{" << _r << ", " << _g << ", " << _b;
    if (includeAlpha)
    {
        cout << ", " << _a;
    }
    cout << "} ";
}

Color Color::mixin(Color otherCol, float pct)
{
    Color mixed;
    mixin(otherCol, &mixed, pct);
    return mixed;
}

void Color::mixin(Color otherCol, Color* savedColor, float pct)
{
    savedColor->setRGBA(
        (otherCol.r() - _r) * pct + _r,
        (otherCol.g() - _g) * pct + _g,
        (otherCol.b() - _b) * pct + _b,
        (otherCol.a() - _a) * pct + _a
    );
}

Color Color::tripleMixin(Color otherCol, Color lastColor, float pct)
{
    Color mixed;
    tripleMixin(otherCol, lastColor, &mixed, pct);
    return mixed;
}

void Color::tripleMixin(Color otherCol, Color lastColor, Color* savedColor, float pct)
{
    Color mix1;
    Color mix2;
    mixin(otherCol, &mix1, pct);
    otherCol.mixin(lastColor, &mix2, pct);
    mix1.mixin(mix2, savedColor, pct);
}

void Color::setR(int r)
{
    setRGBA(r * 0x10000 + _g * 0x100 + _b, _a);
}

void Color::setG(int g)
{
    setRGBA(_r * 0x10000 + g * 0x100 + _b, _a);
}

void Color::setB(int b)
{
    setRGBA(_r * 0x10000 + _g * 0x100 + b, _a);
}

void Color::setA(int a)
{
    setRGBA(_r * 0x10000 + _g * 0x100 + _b, a);
}

void Color::setRGB(int rgb)
{
    setRGBA(rgb, _a);
}

void Color::setRGB(int r, int g, int b)
{
    setRGBA(r * 0x10000 + g * 0x100 + b, _a);
}

void Color::setRGBA(int rgba)
{
    setRGBA(rgba / 0x100, rgba % 0x100);
}

void Color::setRGBA(int r, int g, int b, int a)
{
    setRGBA(r * 0x10000 + g * 0x100 + b, a);
}

void Color::setRGBA(int rgb, int a)
{
    _rgb = rgb;
    _rgba = rgb * 0x100 + a;
    _a = a;
    _b = rgb % 0x100;
    _g = (rgb % 0x10000) / 0x100;
    _r = rgb / 0x10000;
}

bool Color::operator==(Color otherColor)
{
    if (_rgba == otherColor.rgba())
    {
        return true;
    }
    return false;
}

bool Color::operator!=(Color otherColor)
{
    if (_rgba == otherColor.rgba())
    {
        return !true;
    }
    return !false;
}

void Color::operator=(Color otherColor)
{
    _r = otherColor.r();
    _g = otherColor.g();
    _b = otherColor.b();
    _a = otherColor.a();
    _rgb = otherColor.rgb();
    _rgba = otherColor.rgba();
}