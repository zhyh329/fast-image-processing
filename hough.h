#ifndef _HOUGH_H_
#define _HOUGH_H_

#include "types.h"

// https://github.com/opencv/opencv/blob/master/modules/imgproc/src/hough.cpp

typedef struct SPolar
{
    float rho;
    float theta;
} SPolar;


void init_hough(const uint32 _width, const uint32 _height);
void init_hough_ex(const uint32 _width, const uint32 _height, const float _rho, const float _theta, const double _minTheta, const double _maxTheta);
void release_hough();
uint32 hough(uint8 *_pData, uint32 _width, uint32 _height, uint32 _threshold, SPolar *_lineBuffer, uint32 _size);

#endif
