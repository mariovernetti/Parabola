//Main cpp for Parabola

#include <iostream>
#include <vector>
#include <string>
#include "Class.h"
#include "Class.cpp"
#include <cmath>



using namespace std;


int main (void)
{
	
	parabola x;
	string eq;


	x.getEq();
	
	eq=x.retEq();
	x.split(eq);



return 0;
}