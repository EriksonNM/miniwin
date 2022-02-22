#include "miniwin.h"
using namespace miniwin;

void grafico1(){
	vredimensiona(600, 600);
	
	linea(300, 200, 300, 400);
	linea(200, 300, 400, 300);
	rectangulo(200, 200, 400, 400);
	circulo(300, 300, 100);
	texto(250, 150, "Erikson Neira");
	
	refresca();
}

void grafico2(){
	vredimensiona(600, 600);
	
	for(int i = 0; i < 600; i++){
		punto(i, i);
		punto(600-i, i);
		refresca();
		espera(5);
	}
}


int main(){
	grafico2();
	
	return 0;
}


