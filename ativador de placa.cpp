
#include <stdlib.h>
#include <time.h>



/*
 * Software para ativar placa de rede de computadores que n�o iniciam com a placa de rede autom�ticamente.
 * Basta baixar e colocar para executar sempre como administrador na pasta de iniciapliza��o do windows.
 * Leia a linha 18	
 */
int main(){
	
	//capturando o tempo
	int tempo = clock();
	
	// executando o comando de habilitar placa de rede durante 10 segundos
	while(clock() - tempo < 10000) {
		//comando executado para ativar a placa de rede, obs: Coloque entre \"o nome da placa de rede "\, no meu caso est� escrito Wi-Fi (mantenha as aspas)
		system("netsh interface set interface \"Wi-Fi\" enabled");
	}
	
}
