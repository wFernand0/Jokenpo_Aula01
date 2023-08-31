#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
	
	 setlocale(LC_ALL, "Portuguese");
	
	int esc, cpu; 
	
	cout << "Escolha uma opção: " << endl;
	cout << "1 - Pedra"           << endl;
	cout << "2 - Papel"           << endl;
	cout << "3 - Tesoura"         << endl;
	cout << "4 - Largarto"        << endl;
	cout << "5 - Spock"           << endl;
	
	cin >> esc;
	
	cout << endl;
	
	cpu = 1+rand() % 5;
	
	switch(esc)
    {
        case 1: cout << "JOGADOR -> Pedra       \n"; break;
        case 2: cout << "JOGADOR -> Papel       \n"; break;
        case 3: cout << "JOGADOR -> Tesoura     \n"; break;
        case 4: cout << "JOGADOR -> Largarto    \n"; break;
        case 5: cout << "JOGADOR -> Spock       \n"; break;
    }
	
	switch(cpu)
    {
        case 1: cout << "CPU -> Pedra       \n"; break;
        case 2: cout << "CPU -> Papel       \n"; break;
        case 3: cout << "CPU -> Tesoura     \n"; break;
        case 4: cout << "CPU -> Largarto    \n"; break;
        case 5: cout << "CPU -> Spock       \n"; break;
    }
    
    cout << endl;
	
	if ((esc == 1 && cpu == 3) || (esc == 1 && cpu == 4 ) || (esc == 2 && cpu == 1) || (esc == 2 && cpu == 5) || (esc == 3 && cpu == 2) || (esc == 3 && cpu == 4) || (esc == 4 && cpu == 5) || (esc == 4 && cpu == 2) || (esc == 5 && cpu == 3) || (esc == 5 && cpu == 3)) {
		
		cout << "Você venceu!!" << endl;
	} else if ((esc == cpu)) {
		
		cout << "Empate!!" << endl;
	} else {
	
		cout << "Voce perdeu :(" << endl;;
	}
	
	
	return 0;
}
