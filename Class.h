#ifndef CLASS_H
#define CLASS_H


#include <iostream>
#include <vector>


using namespace std;

/*Classe
		------point


------------------------------
*/


class point
{
public:
	void create();
	void showpunto();

private:
	double x;
	double y;
	
};



/*Classe
		------parabola


------------------------------
*/

class parabola
{
public:
	void create();
	void showparabola();

private:
	double a;
	double b;
	double c;
	double x;
	double y;

};




#endif //CLASS_H
