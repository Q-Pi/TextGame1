using namespace std;
#include <iostream>

void startGame(){

	system("clear");
	cout << "> New Game" << endl;

}

void quitGame(){

	cout << "> Quit Game" << endl;

}

int main(int argc, char** argv){

	startGame();
	quitGame();

	return EXIT_SUCCESS;
}