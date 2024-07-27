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

void Ball::Update()
{
    x += speedX;
    y += speedY;
    if (y + radius >= GetScreenHeight() || y - radius <= 0)
    {
        speedY *= -1;
    }
    if (x + radius >= GetScreenWidth() || x - radius <= 0)  
    {
        speedX *= -1;
    }
}