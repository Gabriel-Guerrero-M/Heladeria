#include <iostream>
#include <string>
using namespace std;

int main(){
//FASE DE INICIALIZACION
string nombre;
string nomHel;
string nomAdici;
int seguir = 1;
int costo = 0;
int contador = 0;
int helado = 0;
int pago = 0;
int contVani = 0;
int contFre = 0;
int contAre = 0;
int contMara = 0;
int contCafe = 0;
int contChoco = 0;
int contFrRojos = 0;
int contFrAmar = 0;
int pagoTotal = 0;


//FASE DE PROCESAMIENTO

while(seguir == 1){
	contador += 1;
	cout<<"----------------------------------------------------------------- \n";
	cout<<"                         HELADERIA SANTI \n";
	cout<<"----------------------------------------------------------------- \n";
	cout<<"Bienvenido a La Heladeria Santi \n";
	cout<<"Por Favor ingrese su Nombre: \n";
	cin>>nombre;
	cout<<"Contamos con estos Helados: \n";
	cout<<"1-Vanilla     5-Cafe \n";
	cout<<"2-Fresa       6-Chocolate \n";
	cout<<"3-Arequipe    7-Frutos Rojos \n";
	cout<<"4-Maracuya    8-Frutos Amarillos \n";
	cin>>helado;
	
	if(helado == 1){
		contVani += 1;
			costo = 7000;
			cout<<"Has Escogido El Helado de Vanilla con un costo de: "<<costo<<endl;
			nomHel = "Vanilla";
		}
	if(helado == 2){
		contFre += 1;
			costo = 5000;
			cout<<"Has Escogido El Helado de Fresa con un costo de: "<<costo<<endl;
			nomHel = "Fresa";
		}
	if(helado == 3){
		contAre += 1;
			costo = 4000;
			cout<<"Has Escogido El Helado de Arequipe con un costo de: "<<costo<<endl;
			nomHel = "Arequipe";
		}
	if(helado == 4){
		contMara += 1;
			costo = 7500;
			cout<<"Has Escogido El Helado de Maracuya con un costo de: "<<costo<<endl;
			nomHel = "Maracuya";
		}
	if(helado == 5){
		contCafe += 1;
			costo = 5000;
			cout<<"Has Escogido El Helado de Cafe con un costo de: "<<costo<<endl;
			nomHel = "Cafe";
		}
	if(helado == 6){
		contChoco += 1;
			costo = 6500;
			cout<<"Has Escogido El Helado de Chocolate con un costo de: "<<costo<<endl;
			nomHel = "Vanilla";
		}
	if(helado == 7){
		 contFrRojos += 1;
			costo = 7000;
			cout<<"Has Escogido El Helado de Frutos Rojos con un costo de: "<<costo<<endl;
			nomHel = "frRojos";
		}
	if(helado == 8){
		contFrAmar += 1;
			costo = 7000;
			cout<<"Has Escogido El Helado de Frutos Amarillos con un costo de: "<<costo<<endl;
			nomHel = "frAmarillos";
		}
	
	cout<<"PorFavor ingrese el valor de dinero que va a dar: ";
	cin>>pago;
	
	if(pago < costo){
		cout<<"Lo sentimos pero Usted no Pago Bien \n";
		}
	else{
		int devo = pago - costo;
	cout<<"Y se le devuelve "<<devo<<endl;
	cout<<nombre<<" Gracias Por su Compra \n";
	pagoTotal = pagoTotal + costo;
		}
	
	cout<<"Desea salir del bucle? (1-No)(2-Si)";
	cin>>seguir;
	
	if(seguir == 2){
		cout<<"El Resumen de estos Bucles es: \n";
		cout<<"Helado de Vanilla \n"<<contVani<<endl;
		cout<<"Helado de Fresa  \n"<<contFre<<endl;
		cout<<"Helado de Arequipe \n"<<contAre<<endl;
		cout<<"Helado de Maracuya \n"<<contMara<<endl;
		cout<<"Helado de Cafe \n"<<contCafe<<endl;
		cout<<"Helado de Chocolate \n"<<contChoco<<endl;
		cout<<"Helado de Frutos Rojos \n"<<contFrRojos<<endl;
		cout<<"Helado de Frutos Amarillos \n"<<contFrAmar<<endl;
		cout<<"El Dinero que usted a ganado es: "<<pagoTotal<<endl;
		}
	
	
	
	}
}
