#include "Class.h"


/*Funzioni 
		------relative all'oggetto point


------------------------------
*/


//da valore al punto
void point::create()
{
	cout<<"Inserisci x: "; cin>>x;
	cout<<"Inserisci y: "; cin>>y;
}

//mostra il punto
void point::showpunto()
{
	cout<<"Il punto si trova a: ("<<x<<","<<y<<")"<<endl;
	
}


/*Funzioni 
		------relative all'oggetto parabola


------------------------------
*/

//da valore a parabola
void parabola::create()
{
	cout<<"Inserisci a: "; cin>>a;
	cout<<"Inserisci b: "; cin>>b;
	cout<<"Inserisci c: "; cin>>c;
}


//mostra l'equazione della parabola
void parabola::showparabola()
{
 	cout<<"La parabola ha equazione: y="<<a<<"x^2"<<"+("<<b<<")x"<<"+("<<c<<")"<<endl;

}



