#ifndef __CPUPADDLE___
#define __CPUPADDLE___

#include "paddle.h"
#include "ball.h"

class CpuPaddle : public Paddle
{
private:
    /* data */
public:
    CpuPaddle();
    CpuPaddle(float x, float y, float width, float height, int speed);
    virtual ~CpuPaddle() {}
    void Update(Ball &ball);
};
#endif