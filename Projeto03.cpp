#include<iostream>
#include<iomanip>
#include "funcao.h"
//JOGO DA VELHA EM C++

using namespace std;
int main() {
	char tabela[3][3];
	char jog1 = 'X', jog2 = 'O';
	int linha, coluna;
	int flag = 1;
	int vencedor = 0,empate=0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tabela[i][j] = '+';
		}
	}
	while (vencedor == 0&&empate==0) {
		if (flag == 1) {
			cout << "Digite posicao do Jogador 1: ";
			linha = verificarTam();
			coluna = verificarTam();

			flag = verificaTabela(tabela, jog1, linha, coluna);
			imprimirTabela(tabela);
		}
		else if (flag == 2) {
			cout << "Digite posicao do Jogador 2: ";
			linha = verificarTam();
			coluna = verificarTam();

			flag = verificaTabela2(tabela, jog2, linha, coluna);
			imprimirTabela(tabela);

		}
		
		vencedor = verificaVencedor(tabela);
		empate = verificaEmpate(tabela);
		

	}
	if (vencedor == 1)cout << "\t JOGADOR 1 VOCE VENCEU A PARTIDA!!!!!\n";
	if (vencedor == 2)cout << "\t JOGADOR 2 VOCE VENCEU A PARTIDA!!!!!\n";
	if (empate == 1) cout << "\tEMPATE!!!\n";
	cout << "by Matheus Henrique Souza...";

}