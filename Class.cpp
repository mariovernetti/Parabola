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

//prende l'equazione della parabola (stringa)
void parabola::getEq()
{
	cout<<"Inserisci l'equazione della parabola: ";cin>>eq;

}

//mostra l'equazione della parabola (stringa)
void parabola::showEq()
{
	cout<<"L'equazione e': "<<eq<<endl;

}



//ritorna l'eq (string)
string parabola::retEq()
{
	string stringa;
	stringa=eq;
	return stringa;

}





//splitta l'equazione in vetore
void parabola::split(string eq)
{
	 // Split Command into vector
	 for(int i = 0; i < eq.size(); i++)
    {
        if(eq.at(i) == 'y' || eq.at(i) == '=' || eq.at(i) == 'x' || eq.at(i) == '^' || eq.at(i) == '2' || eq.at(i) == '+' || eq.at(i) == '-')
        {
        	tmp.clear();	  
        }

        else
        {
        	tmp.insert(tmp.end(), eq.at(i));
        	nums.push_back(tmp);
            tmp.clear();
        } 
    }

    //assegna a b c
        a1=nums.at(0);
        b1=nums.at(1);
        c1=nums.at(2);

  cout<<"cacca: "<<a1<<endl;
  cout<<"cacca: "<<b1<<endl;
  cout<<"cacca: "<<c1<<endl;
	

}








