/*
 * myInterpolator.cpp
 *
 *  Created on: Jun 1, 2015
 *      Author: milton
 */

#include "myInterpolator.h"
using namespace std;


MyInterpolator::MyInterpolator() {
	// TODO Auto-generated constructor stub
}

MyInterpolator::~MyInterpolator() {
	// TODO Auto-generated destructor stub
}


void MyInterpolator::interpolate3D(InterpolatePoint &point1, InterpolatePoint &point2) {
	float xDistance = sqrt(pow(point1.x - point2.x, 2));
	float yDistance = sqrt(pow(point1.y - point2.y, 2));
	float zDistance = sqrt(pow(point1.z - point2.z, 2));

	cout << "Point 1 "<<point1.x<<" " <<point1.y<<" "<<point1.z<<" \n\n";
	cout << "Point 2 "<<point2.x<<" " <<point2.y<<" "<<point2.z<<" \n\n";

	cout << " Distances: " << xDistance << " " << yDistance << " "
			<< zDistance<<" \n";


	float xIncr = xDistance / N;
	float yIncr = yDistance / N;
	float zIncr = zDistance / N;
	for (int var = 0; var < N+1; ++var) {
		InterpolatePoint point;
		if (point1.x < point2.x) {
			point.x = xIncr * var + point1.x;
		} else {
			point.x = point1.x - xIncr * var;
		}

		if (point1.y < point2.y) {
			point.y = yIncr * var + point1.y;
		} else {
			point.y = point1.y - yIncr * var;
		}
		if (point1.z < point2.z) {
				point.z = zIncr * var + point1.z;
			} else {
				point.z = point1.z - zIncr * var;
			}
        points.push_back(point);
	}

}
void MyInterpolator::dump() {
	for (int var = 0; var < N+1; ++var) {
		InterpolatePoint p = points[var];
		cout << "X "<<p.x << " ,Y " << p.y << ", Z " << p.z << " \n\n";
	}
}

