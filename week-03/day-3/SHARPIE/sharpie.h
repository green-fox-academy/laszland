#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H
#include <iostream>
#include <string>

class Sharpie {
public:
    Sharpie(std::string, float);

    //getters
    const std::string &getColor() const;
    float getWidth() const;

    float getInkAmount() const;

    //function
    float use ();

    //setters
    void setColor(const std::string &color);
    void setWidth(float width);
    void setInkAmount(float inkAmount);

private:
    std::string _color;
    float _width;
    float _inkAmount = 100;
};


#endif //SHARPIE_SHARPIE_H
