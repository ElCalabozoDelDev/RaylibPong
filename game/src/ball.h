#ifndef __BALL__
#define __BALL__

class Ball
{
private:
public:
    float x, y;
    int speedX, speedY;
    int radius;
    Ball();
    virtual ~Ball() {}
    
    void Draw();
    void Update(int &playerScore, int &cpuScore);
    void PositionReset();
};
#endif