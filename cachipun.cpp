#include <iostream>

using namespace std;

class persona
 {


 public:
 	int id;
	int opcion;
 	persona(int id){
 		this->id=id;
 		opcion=0;
 	}
 	//~persona();
 
 };

persona cachipun(const persona& param)
 {

 	int id;
 	persona ganador;

 	cachipun(persona player1, persona player2, int id){
 		this->id = id
 			if(player1.opcion == 1 && player2.opcion == 3){
 				//ganador = player1;
 				}
 	}

 	~cachipun();
 
 	/* data */
 };

int main(int argc, char const *argv[])
 {
 	//nombredelaclase nombredevariable = new nombredelconstructor;

 	persona player1 = new persona(1);
 	persona player2 = new persona(2);
 	persona player3 = new persona(3);

 	cout << "Ingrese opcion de jugador 1" << endl;
 	cin >> player1.opcion;
 	cout << "Ingrese opcion de jugador 2" << endl;
 	cin >> player2.opcion;

 	cachipun juego1 = new cachipun(player1, player2, 1);

 	cout << juego1.ganador;




 	return 0;
 }