/*
 * myInterpolator.h
 *
 *  Created on: Jun 1, 2015
 *      Author: milton
 */

#ifndef MYINTERPOLATOR_H_
#define MYINTERPOLATOR_H_
#include "InterpolatePoint.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
const int N=500;
using namespace std;
class MyInterpolator {
public:
    vector<InterpolatePoint> points;
    MyInterpolator();
    virtual ~MyInterpolator();
	void interpolate3D(InterpolatePoint &point1, InterpolatePoint &point2);
	void dump();
};

#endif /* MYINTERPOLATOR_H_ */
