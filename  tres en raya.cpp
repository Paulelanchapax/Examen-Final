#include <iostream>
#include <cstdlib>

using namespace std;



class Juego {
private:
    char tablero[3][3]; 
public:
	
	char tablero[3][3];
    
    Juego() {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) tablero[i][j] = ' ';
    }

    
    bool colocarFicha(int fila, int col, char ficha) {
        if(tablero[fila][col] == ' ') {
            tablero[fila][col] = ficha;
            return true;
        }
        return false;
    }

    
    bool verificarGanador() {
        
        
        
        return false; 
    }
    
    void reiniciar(){
	
	
	
	
	}
    
};


void actualizarPuntaje(int *puntaje) {
	
    (*puntaje)++;
}




int main (){

cout<<"==TRES EN RAYA=="<<endl;

cout<<"Paul Inc. and Asocciateds"<<endl;	
	
cout<<"1.Jugar"<<endl;

cout<<"2.Ver puntajes"<<endl;

cout<<"3.Salir"<<endl;


	
cout<<tablero[3][3]<<endl; 

return 0;
	
}















