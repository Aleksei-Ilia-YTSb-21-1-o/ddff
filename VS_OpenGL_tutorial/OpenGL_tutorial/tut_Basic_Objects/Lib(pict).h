#pragma once
#include "GL/freeglut.h"
#define _USE_MATH_DEFINES //что это такое??(лучше не трогать)
#include <cmath>

void drawTera(float x, float y);
void drawSky(float x, float y);
void drawStar(float x, float y);
void drawSTARS(float x, float y);
void drawTrawa(float x, float y);
void drawHays(float x, float y);
void drawNLO(float x, float y, float f, float g);
void drawTree(float x, float y, float z);
void drawCar(float x, float y);
void drawCat(float x, float y, float z);
void dravDisplay(float k, float l, float j);
void processKeys(unsigned char key, int x, int y);