#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int Op;
int n;

struct Cliente{
string Nombre,FormaP,Dirrecion,Punto,MatriculaC,Modelo;
float Monto, Pago;
int Edad,kms,Clave;
 	
}Cliente;

void CrearReg();
void AniadirReg();
void VerData();
void Buscar();
void Buscar2();
void modificarRegistro();
int main()
{ 
	
	do {
	system ("color F1");
	cout<<"====================================================================="<<endl;
	cout<<"                              TE LLEVA                               "<<endl;
	cout<<"====================================================================="<<endl;
	cout<<"+++++++++++++++++++++++++++Menu Principal++++++++++++++++++++++++++++"<<endl;
	cout<<"                         Seleccione una opcion                       "<<endl;
	cout<<"                          (1). Crear Reg.                            "<<endl;
	cout<<"                          (2). Añadir Reg.                           "<<endl;
	cout<<"                          (3). Ver.                                  "<<endl;
	cout<<"                          (4). Buscar.                               "<<endl;
	cout<<"                          (5). Modificaciones.                        "<<endl;
	cout<<"                          (6). Salir.                                 "<<endl;
	
	cin>>Op;

	switch (Op)
	{
	 case 1:
	 	CrearReg();
	break;
	case 2:
	 AniadirReg();
	break;	
	case 3:
	 	VerData();
	case 4:
	   Buscar();		 	
	break;		
	case 5:
        modificarRegistro();		 	
	break;
	case 6:
	   exit(1);
	break;
	}
	}
while	(Op!= 6);


getch();
return 0;
}

void CrearReg(){
		system("cls");
	ofstream Archivo;
	
	Archivo.open("Data.txt",ios::out); // Creamos el TXT para hacer la consulta 
	
	if(Archivo.fail()){
		cout<<"ERROR 404";
		exit(1);
	}
		cout<<"INGRESE LOS DATOS DE SU VEHICULO. "<<endl;
		cout<<"Matricula del Vehiculo: "<<endl;
         fflush(stdin);
	getline(cin,Cliente.MatriculaC); 
	cout<<"Modelo del Vehiculo: "<<endl;
         fflush(stdin);
	getline(cin,Cliente.MatriculaC); 
	cout<<"INGRESE LOS DATOS DEL CLIENTE. "<<endl;
	cout<<"Ingrese Clave: "<<endl;
	cin>>Cliente.Clave;
	cout<<"Nombre Pasajero: "<<endl;
	fflush(stdin);
	getline(cin,Cliente.Nombre);
	cout<<"Edad: "<<endl;
	cin>>Cliente.Edad;
	cout<<"Punto de partida: "<<endl;
	fflush(stdin);
	getline(cin,Cliente.Punto);
	cout<<"Destino: "<<endl;
	fflush(stdin);
	getline(cin,Cliente.Dirrecion);
	cout<<"Forma de Pago: "<<endl;
	fflush(stdin);
	getline(cin,Cliente.FormaP);
    //Calculamos el precio del viaje
	if(Cliente.Punto=="Villa Canales" && Cliente.Dirrecion=="Villa Nueva")
	{Cliente.kms = 15;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
    else if(Cliente.Punto=="Villa Canales" && Cliente.Dirrecion=="Guatemala")
	{Cliente.kms = 20;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
    else if(Cliente.Punto=="Villa Nueva" && Cliente.Dirrecion=="Villa Canales")
	{Cliente.kms = 5;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
		if(Cliente.Punto=="Guatemala" && Cliente.Dirrecion=="Villa Canales")
	{Cliente.kms = 15;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
	 	if(Cliente.Punto=="Guatemala" && Cliente.Dirrecion=="Villa Nueva")
	{Cliente.kms = 12;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
	 	if(Cliente.Punto=="Villa Nueva" && Cliente.Dirrecion=="Guatemala")
	{Cliente.kms = 8;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
	
	
	//Ingresamos todos los Inputs en los TXT.
	Archivo<<"\nMatricula: "<<Cliente.MatriculaC<<endl;
	Archivo<<"Modelo Vehiculo: "<<Cliente.Modelo<<endl;
	Archivo<<"Clave: "<<Cliente.Clave<<endl;
	Archivo<<"Nombre: "<<Cliente.Nombre<<endl;
	Archivo<<"Edad: "<<Cliente.Edad <<endl;
	Archivo<<"Punto de Partida: "<<Cliente.Punto<<endl;
	Archivo<<"Destino: "<<Cliente.Dirrecion<<endl;
	Archivo<<"Forma de Pago: "<<Cliente.FormaP<<endl;
	Archivo<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;
	};


void AniadirReg(){
	system("cls");
	ofstream Archivo;
	
	cout<<"Usted agregara reg al sistema de base de datos General "<<endl;
	cout<<"Cuantos Reg realizara"<<endl;
	cin>>n;
	Archivo.open("BD.txt",ios::app); // Creamos el TXT para hacer la consulta 
	
	if(Archivo.fail()){
		cout<<"ERROR 404";
		exit(1);
	}
	
	for(int i = 1;i <= n ; i++) 
	{
			cout<<"INGRESE LOS DATOS DE SU VEHICULO. "<<endl;
		cout<<"Matricula del Vehiculo: "<<endl;
         fflush(stdin);
	getline(cin,Cliente.MatriculaC); 
	cout<<"Modelo del Vehiculo: "<<endl;
         fflush(stdin);
	getline(cin,Cliente.MatriculaC); 
	cout<<"INGRESE LOS DATOS DEL CLIENTE. "<<endl;
	cout<<"Ingrese Clave: "<<endl;
	cin>>Cliente.Clave;
	cout<<"Nombre Pasajero: "<<endl;
	fflush(stdin);
	getline(cin,Cliente.Nombre);
	cout<<"Edad: "<<endl;
	cin>>Cliente.Edad;
	cout<<"Punto de partida: "<<endl;
	fflush(stdin);
	getline(cin,Cliente.Punto);
	cout<<"Destino: "<<endl;
	fflush(stdin);
	getline(cin,Cliente.Dirrecion);
	cout<<"Forma de Pago: "<<endl;
	fflush(stdin);
	getline(cin,Cliente.FormaP);
    //Calculamos el precio del viaje
	if(Cliente.Punto=="Villa Canales" && Cliente.Dirrecion=="Villa Nueva")
	{Cliente.kms = 15;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
    else if(Cliente.Punto=="Villa Canales" && Cliente.Dirrecion=="Guatemala")
	{Cliente.kms = 20;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
    else if(Cliente.Punto=="Villa Nueva" && Cliente.Dirrecion=="Villa Canales")
	{Cliente.kms = 5;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
		if(Cliente.Punto=="Guatemala" && Cliente.Dirrecion=="Villa Canales")
	{Cliente.kms = 15;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
	 	if(Cliente.Punto=="Guatemala" && Cliente.Dirrecion=="Villa Nueva")
	{Cliente.kms = 12;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
	 	if(Cliente.Punto=="Villa Nueva" && Cliente.Dirrecion=="Guatemala")
	{Cliente.kms = 8;
	 Cliente.Monto = Cliente.kms * 5; //Se cobran Q5 por Km
	 cout<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;}
	
	
	//Ingresamos todos los Inputs en los TXT.
	Archivo<<"\nMatricula: "<<Cliente.MatriculaC<<endl;
	Archivo<<"Modelo Vehiculo: "<<Cliente.Modelo<<endl;
	Archivo<<"Clave:"<<Cliente.Clave<<endl;
	Archivo<<"Nombre: "<<Cliente.Nombre<<endl;
	Archivo<<"Edad: "<<Cliente.Edad <<endl;
	Archivo<<"Punto de Partida: "<<Cliente.Punto<<endl;
	Archivo<<"Destino: "<<Cliente.Dirrecion<<endl;
	Archivo<<"Forma de Pago: "<<Cliente.FormaP<<endl;
	Archivo<<"Tarifa Cobrada: Q. "<<Cliente.Monto<<endl;
}
};

void Buscar(){
	
	int ClaveB;

	ifstream Archivo;
cout<<"Ingrese el ID que desea buscar "<<endl;
cin>>ClaveB;

	Archivo.open("BD.txt"); 
	if(Archivo.fail()){
		cout<<"ERROR 404";
		exit(1);}

	while(!Archivo.eof()) {
Archivo>>Cliente.Clave>>Cliente.Nombre>>Cliente.Edad>>Cliente.Punto>>Cliente.Dirrecion>>Cliente.FormaP>>Cliente.Monto;//Leer campos del registros
	
if(ClaveB==Cliente.Clave){


   {
	cout<<"\nMatricula: "<<Cliente.MatriculaC<<endl;
	cout<<"Modelo: "<<Cliente.Modelo<<endl;
	cout<<"Clave: "<<Cliente.Clave<<endl;
	cout<<"Nombre Cliente: "<<Cliente.Nombre<<endl;
	cout<<"Edad: "<<Cliente.Edad<<endl;
	cout<<"Punto de partida: "<<Cliente.Punto<<endl;
	cout<<"Destino: "<<Cliente.Dirrecion<<endl;
	cout<<"Forma de Pago: "<<Cliente.FormaP<<endl;
	cout<<"Importe: "<<Cliente.Pago<<endl;
	cout<<"----------------------------"<<endl;
	
	Archivo>>Cliente.Nombre;//Lectura adelantada
	} 

	}else{
		
	cout<<"No existe ese cliente"<<endl;

	}

}
Archivo.close();
}

void VerData(){
	ifstream Archivo;
	int a;
	string Texto;
	
	
	cout<<"Seleccione la base de datos que desea ver."<<endl;
	cout<<"1. Base de datos General"<<endl;
	cout<<"2. Base de datos de Reg nuevo"<<endl;
	cin>>a;
	
	if (a==1) {
	Archivo.open("BD.txt",ios::in); 
	if(Archivo.fail()){
		cout<<"ERROR 404";
		exit(1);	}
	while(!Archivo.eof()) {
		getline(Archivo,Texto);
		cout<<Texto<<endl;	}
	Archivo.close();}
	
	else if (a==2){ 
	Archivo.open("Data.txt",ios::in); 
	if(Archivo.fail()){
		cout<<"ERROR 404";
		exit(1);}
	while(!Archivo.eof()) {
		getline(Archivo,Texto);
		cout<<Texto<<endl;}
	Archivo.close();}
	
	else 
	cout<<"Opcion Invalida "<<endl;
    	Archivo.close();		
};
//Espero que sirva el de modificar.
void modificarRegistro(){
	int contador, a, tr,val, mod,g,r,rep;
	cout<< "LISTADO DE MENU PRINCIPAL: ";
      cout<< endl;
      if (contador==0)
      {
            cout<< "LISTADO DE MENU PRINCIPAL VACIO.";
            cout<<endl;
    } 
  	else {
      for(a=0;a<r+1;a++)
   {
      tr=a;
      cout<<tr-1<<" - ";
      cout<< Cliente.Nombre;
      cout<<endl;
     }
}
	cout<<"\nSeleccione el TXT para Modificar: (NO PONER LETRAS)";                              
 
                     cin>>val;
                     mod=val-1;
                     g=r+1;
                  
                     int op1;
                    
                    if (val<=g)
                     {
                    do
                     {
                    cout<<"\nINGRESE LOS DATOS DE SU VEHICULO A MODIFICAR: ";
                  	cout<<"												"<<endl;
					cout<<"1. Matricula: "<<Cliente.MatriculaC<<endl;
					cout<<"2. Modelo: "<<Cliente.Modelo<<endl;
					cout<<"3. Clave: "<<Cliente.Clave<<endl;
					cout<<"4. Nombre Cliente: "<<Cliente.Nombre<<endl;
					cout<<"5. Edad: "<<Cliente.Edad<<endl;
					cout<<"6. Punto de partida: "<<Cliente.Punto<<endl;
					cout<<"7. Destino: "<<Cliente.Dirrecion<<endl;
					cout<<"8. Forma de Pago: "<<Cliente.FormaP<<endl;
					cout<<"9. Tarifa cobrada .Q: "<<Cliente.Pago<<endl;
					cout<<"10. Menu anterior."<<endl;
					cout<<"------------------------------------------"<<endl;                     
					cout<<"SELECCIONE LA OPCION QUE DESEA MODIFICAR (Del 1 al 9): ";
                     cin>>op1;
                     switch (op1)
                     {
                            case 1:
                                 cout<< "MODIFIQUE LA MATRICULA: ";
                                 cin>>Cliente.MatriculaC;
                                 cout<<endl;
                                 break;
                            case 2:
                                 cout<< "MODIFIQUE EL MODELO: ";
                                 cin>>Cliente.Modelo;
                                 cout<<endl;
                                 break;
                            case 3:
                                 cout<< "MODIFIQUE LA CLAVE: ";
                                 cin>>Cliente.Clave;
                                 cout<<endl;
                                 break;
                            case 4:
                                 cout<< "MODIFIQUE EL NOMBRE DEL CLIENTE: ";
                                 cin>>Cliente.Nombre;
                                 cout<<endl;
                                 break;
                            case 5:
                                 cout<< "MODIFIQUE LA EDAD: ";
                                 cin>>Cliente.Edad;
                                 cout<<endl;
                                 break;
                            case 6:
                                 cout<< "MODIFIQUE PUNTO DE PARTIDA: ";
                                 cin>>Cliente.Punto;
                                 cout<<endl;
                                 break;
							case 7:
                                 cout<< "MODIFIQUE EL DESTINO: ";
                                 cin>>Cliente.Dirrecion;
                                 cout<<endl;
                                 break;
							case 8:
                                 cout<< "MODIFIQUE LA FORMA DE PAGO: ";
                                 cin>>Cliente.FormaP;
                                 cout<<endl;
								 break;     
							case 9:
                                 cout<< "MODIFIQUE TARIFA COBRADA: .Q ";
                                 cin>>Cliente.Monto;
							  	 cout<<endl;
								 break;
							case 10:
                                 rep=1;
                                 break;
                                                    }
                     }while (rep==0);
                     }else {cout<<"EL TXT HA SIDO ENCONTRADO."<<endl;  
                     rep=0;     
	}
}
