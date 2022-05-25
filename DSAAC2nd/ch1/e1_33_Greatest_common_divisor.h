#pragma once
#include "../head.h"

namespace e1_23
{
	//            | x                y=0 
	// gcd(x,y) = |  
	//            | gcd(y, x mod y)  y>0
	int gcd(int x, int y)
	{
		if (y==0)
		{
			return x;
		}
		else
		{
			return gcd(y, x % y);
		}
	}
}
