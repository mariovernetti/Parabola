#ifndef CLASS_H
#define CLASS_H


#include <iostream>
#include <vector>
#include <string>


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
	void getEq();
	void showEq();
	void split(string eq);
	string retEq();

private:
	double a;
	double b;
	double c;
	double x;
	double y;

	string a1; //versione string di a b c
	string b1;
	string c1;

	string eq;		
	vector<string> nums; //vettore di divisione

	string tmp;

};




#endif //CLASS_H
