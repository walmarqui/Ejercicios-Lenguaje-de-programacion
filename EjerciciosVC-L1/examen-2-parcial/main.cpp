#include<iostream>
#include<windows.h>
#include "juego.h"

using namespace std;

int main()
{
	char tecla;
	int puntos=0;
	int xPos=30, yPos=20;
	
	inicializarArreglo();
	dificultad();	
	gotoxy(50,2);
	cout << puntos;
	pintar();
	gotoxy(xPos, yPos);
        cout<<(char)4;	
	
	while(tecla != 27 && gameover() ){
	    proceso(tecla, puntos);
	}
	
	if ( !gameover()){
		printf("has perdido perdedor");
		system("cls");
	}
	
	system("pause>NULL");
	return 0;
}