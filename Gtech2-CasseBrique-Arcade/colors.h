#pragma once

class Color
{
private:
    int _r;
    int _g;
    int _b;
    int _a;
    int _rgb;
    int _rgba;

public:
    Color();
    Color(int rgb);
    Color(int rgb, int a);
    Color(int r, int g, int b);
    Color(int r, int g, int b, int a);

    int r();
    int g();
    int b();
    int a();
    int rgb();
    int rgba();

    void printColorHex(bool includeAlpha = false);
    void printColor(bool includeAlpha = false);

    Color mixin(Color otherCol, float pct = 0.5f);
    void mixin(Color otherCol, Color* savedColor, float pct = 0.5f);
    Color tripleMixin(Color otherCol, Color lastColor, float pct = 0.5f);
    void tripleMixin(Color otherCol, Color lastColor, Color* savedColor, float pct = 0.5f);

    void setR(int r);
    void setG(int g);
    void setB(int b);
    void setA(int a);
    void setRGB(int rgb);
    void setRGB(int r, int g, int b);
    void setRGBA(int rgba);
    void setRGBA(int rgb, int a);
    void setRGBA(int r, int g, int b, int a);

    bool operator==(Color otherColor);
    bool operator!=(Color otherColor);
    void operator=(Color otherColor);
};
