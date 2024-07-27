#ifndef __PADDLE__
#define __PADDLE__

class Paddle
{
private:
    float x, y;
    float width, height;
    int speed;
public:
    Paddle(/* args */);
    Paddle(float x, float y, float width, float height, int speed);
    virtual ~Paddle() {}
    void Draw();
    void Update();
};
# endif