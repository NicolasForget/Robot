#include "Position.h"

//Map size
#define MAX_X 2000
#define MAX_Y 2000

//Constructeur
Position::Position(int iniX, int iniY){
	if(0<=iniX && iniX<=MAX_X && 0<=iniY && iniY<= MAX_Y){
		_x = iniX;
		_y = iniY;
	}
	else{
		throw OutOfMapException();
	}
}

Position::Position(){
	_x = 0;
	_y = 0;
}

//Set
void Position::setX(int newX){
	if(0<=newX && newX<=MAX_X){
		_x = newX;
	}
	else{
		throw OutOfMapException();
	}
}

void Position::setY(int newY){
	if(0<=newY && newY<= MAX_Y){
		_y = newY;
	}
	else{
		throw OutOfMapException();
	}
}

//Get
int Position::getX(){
	return _x;
}

int Position::getY(){
	return _y;
}

//Display
ostream& operator<<(ostream& os, Position& pst){
    os << "(" << pst.getX() << ";" << pst.getY() << ")" << endl;
    return os;
}