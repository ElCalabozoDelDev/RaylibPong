#include <cpupaddle.h>
#include "raylib.h"
#include "ball.h"

CpuPaddle::CpuPaddle()
{
    x = 0;
    y = 0;
    speed = 5;
    width = 15;
    height = 60;
}
CpuPaddle::CpuPaddle(float x, float y, float width, float height, int speed)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->speed = speed;
}
void CpuPaddle::Update(Ball &ball)
{
    if (y + height / 2 <= ball.y)
    {
        y += speed;
    }
    if (y + height / 2 > ball.y)
    {
        y -= speed;
    }
    Limit();
}