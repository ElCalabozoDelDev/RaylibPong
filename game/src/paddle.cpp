#include <paddle.h>
#include "raylib.h"

Paddle::Paddle()
{
    x = 0;
    y = 0;
    speed = 5;
    width = 15;
    height = 60;
}
Paddle::Paddle(float x, float y, float width, float height, int speed)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->speed = speed;
}

void Paddle::Draw()
{
    DrawRectangle(x, y, width, height, BLUE);
}

void Paddle::Update()
{
    if (IsKeyDown(KEY_UP))
    {
        y -= speed;
    }
    if (IsKeyDown(KEY_DOWN))
    {
        y += speed;
    }
    if (y <= 0)
    {
        y = 0;
    }
    if (y + height >= GetScreenHeight())
    {
        y = GetScreenHeight() - height;
    }
}