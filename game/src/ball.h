#ifndef __BALL__
#define __BALL__

class Ball
{
private:
    float x, y;
    int speedX, speedY;
    int radius;
public:
    Ball();
    virtual ~Ball() {}
    
    void Draw();
    void Update();
};
#endif