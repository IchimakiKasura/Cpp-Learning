#include <iostream>

float A, B, C;

float cubeWidth = 13.0f;
int width = 100, height = 38;
float zBuffer[100 * 38];
char buffer[100 * 38];
int backgroundACIICode = ' ';
int distanceFromCam = 60;
float K1 = 40;

float incrementSpeed = 0.6f;

float x, y, z;
float ooz;
float xp, yp;
int idx;

float calculateX(int i, int j, int k)
{
    return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
           j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);
};

float calculateY(int i, int j, int k)
{
    return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
           j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) -
           i * cos(B) * sin(C);
};

float calculateZ(int i, int j, int k)
{
    return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
};

void calculateForSurface(float cubeX, float cubeY, float cubeZ, int ch)
{
    x = calculateX(cubeX, cubeY, cubeZ);
    y = calculateY(cubeX, cubeY, cubeZ);
    z = calculateZ(cubeX, cubeY, cubeZ) + distanceFromCam;

    ooz = 1 / z;

    xp = (int)(width / 2 + K1 * ooz * x * 2);
    yp = (int)(height / 2 + K1 * ooz * y);

    idx = xp + yp * width;
    if (idx >= 0 && idx < width * height)
    {
        if (ooz > zBuffer[idx])
        {
            zBuffer[idx] = ooz;
            buffer[idx] = ch;
        }
    }
}