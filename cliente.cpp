#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
	//instancia de un objeto
	string nit,nombres,apellidos,direccion,fecha_nacimiento,codigo_empleado,puesto;
	int telefono;
	
	cout<<"ingrese nit:";
	cin>>nit;
	cout<<"ingrese nombres:";
	cin>>nombres;
	cout<<"ingrese apellidos:";
	cin>>apellidos;
	cout<<"ingrese direccion:";
	cin>>direccion;
	cout<<"ingrese fecha_nacimiento:";
	cin>>fecha_nacimiento;
	cout<<"ingrese codigo_empleado:";
	cin>>codigo_empleado;
	cout<<"puesto:";
	cin>>puesto;
	
	cout<<"ingrese telefono:";
	cin>>telefono;
	
	estudiante obj = cliente(nombres,apellidos,direccion,fecha_nacimiento,telefono,carnet,codigo_empleado,puesto);
	obj.mostrar();
}
