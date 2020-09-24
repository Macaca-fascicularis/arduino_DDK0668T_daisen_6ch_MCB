/*
 *DSR1202.h Å® DDK0668T.cpp
 *
 *created by anbara
 */
 
#ifndef DDK0668T_H
#define DDK0668T_H

#include "Arduino.h"

class DDK0668T
{
  public:
	DDK0668T(int pin);
	void Init();
	void move(int a, int b, int c, int d, int e, int f);
  private:
	int PinNo = 0;
};


#endif
