#include <ball.h>
#include "raylib.h"

Ball::Ball()
{
    x = 400;
    y = 225;
    speedX = 5;
    speedY = 5;
    radius = 10;
}


void Ball::Draw()
{
    DrawCircle(x, y, radius, RED);
}

void Ball::Update(int &playerScore, int &cpuScore)
{
    x += speedX;
    y += speedY;
    if (y + radius >= GetScreenHeight() || y - radius <= 0)
    {
        speedY *= -1;
    }
    if (x + radius >= GetScreenWidth())
    {
        playerScore++;
        PositionReset();
    }
    if (x - radius <= 0)
    {
        cpuScore++;
        PositionReset();
    }
}
void Ball::PositionReset()
{
    x = GetScreenWidth() / 2;
    y = GetScreenHeight() / 2;
    speedX = 5;
    speedY = 5;
}