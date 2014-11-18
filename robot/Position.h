#include <exception>
using namespace std;

#ifndef __Position_h__
#define __Position_h__

// #include "Robot.h"

class Robot;
class Position;

class Position
{
	private: int _x;
	private: int _y;
	public: Robot* _unnamed_Robot_;

	public: void setx(int aX);

	public: void sety(int aY);

	public: int getx();

	public: int gety();
};

#endif
