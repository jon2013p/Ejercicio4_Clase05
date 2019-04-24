#include <iostream>
using namespace std;

int main ()
{
	int cat,sinicial,nsueldo;
	
	cout<<"Ingrese la categoria del empleado"<<endl;
	cin>>cat;
	cout<<"Ingrese el sueldo del empleado"<<endl;
	cin>>sinicial;
	
	if(cat==1)
	{
		nsueldo=sinicial*1.15;
		cout<<"Categoria: "<<cat<<endl;
		cout<<"Sueldo Anterior: "<<sinicial<<endl;
		cout<<"Nuevo Sueldo: "<<nsueldo<<endl;
	}
	if(cat==2)
	{
		nsueldo=sinicial*1.10;
		cout<<"Categoria: "<<cat<<endl;
		cout<<"Sueldo Anterior: "<<sinicial<<endl;
		cout<<"Nuevo Sueldo: "<<nsueldo<<endl;
	}
	if(cat==3)
	{
		nsueldo=sinicial*1.08;
		cout<<"Categoria: "<<cat<<endl;
		cout<<"Sueldo Anterior: "<<sinicial<<endl;
		cout<<"Nuevo Sueldo: "<<nsueldo<<endl;
	}
	if(cat==4)
	{
		nsueldo=sinicial*1.07;
		cout<<"Categoria: "<<cat<<endl;
		cout<<"Sueldo Anterior: "<<sinicial<<endl;
		cout<<"Nuevo Sueldo: "<<nsueldo<<endl;
	}	
	
	return 0;		
}
