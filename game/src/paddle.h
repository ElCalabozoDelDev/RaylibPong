#ifndef __PADDLE__
#define __PADDLE__

class Paddle
{
protected:
    void Limit();
private:
public:
    float x, y;
    float width, height;
    int speed;
    Paddle(/* args */);
    Paddle(float x, float y, float width, float height, int speed);
    virtual ~Paddle() {}
    void Draw();
    void Update();
};
# endif