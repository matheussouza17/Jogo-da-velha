#include <cstdlib>
#include <iostream>
#include<iomanip>
#include<stdio.h>
#include<locale>
using namespace std;

int verificarTam() {
	int num;
	do {
		
		cin >> num;

	} while (num>=3||num<0);
	return num;
}
int verificaTabela(char tabela[3][3], int jog, int l, int c) {
	int flag = 0;
	if (tabela[l][c] == '+') {
		tabela[l][c] = jog;
		flag = 2;
		cout << "Jogada bem sucedida!\n";
		return flag;
	}
	else {
		cout << "Cordenada invalida!!\n";
		return 1;
	}

	
}
int verificaTabela2(char tabela[3][3], int jog, int l, int c) {
	int flag = 0;
	if (tabela[l][c] == '+') {
		tabela[l][c] = jog;
		flag = 1;
		cout << "Jogada bem sucedida!\n";
		return flag;
	}
	else {
		cout << "Cordenada invalida!!\n";
		return 2;
	}
}

void imprimirTabela(char tabela[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << tabela[i][j] << "\t";
		}
		cout << endl;
	}
}

int verificaVencedor(char tabela[3][3]) {
	int vencedor=0;
	if (tabela[0][0] == 'X' && tabela[0][1] == 'X' && tabela[0][2] == 'X') vencedor = 1;
	else if (tabela[0][0] == 'O' && tabela[0][1] == 'O' && tabela[0][2] == 'O') vencedor = 2;
	else if (tabela[0][0] == 'X' && tabela[1][0] == 'X' && tabela[2][0] == 'X') vencedor = 1;
	else if (tabela[0][0] == 'O' && tabela[1][0] == 'O' && tabela[2][0] == 'O') vencedor = 2;
	else if (tabela[1][0] == 'X' && tabela[1][1] == 'X' && tabela[1][2] == 'X') vencedor = 1;
	else if (tabela[1][0] == 'O' && tabela[1][1] == 'O' && tabela[1][2] == 'O') vencedor = 2;
	else if (tabela[2][0] == 'X' && tabela[2][1] == 'X' && tabela[2][2] == 'X') vencedor = 1;
	else if (tabela[2][0] == 'O' && tabela[2][1] == 'O' && tabela[2][2] == 'O') vencedor = 2;
	else if (tabela[0][1] == 'X' && tabela[1][1] == 'X' && tabela[2][1] == 'X') vencedor = 1;
	else if (tabela[0][1] == 'O' && tabela[1][1] == 'O' && tabela[2][1] == 'O') vencedor = 2;
	else if (tabela[0][2] == 'X' && tabela[1][2] == 'X' && tabela[2][2] == 'X') vencedor = 1;
	else if (tabela[0][2] == 'O' && tabela[1][2] == 'O' && tabela[2][2] == 'O') vencedor = 2;
	else if (tabela[0][0] == 'X' && tabela[1][1] == 'X' && tabela[2][2] == 'X') vencedor = 1;
	else if (tabela[0][0] == 'O' && tabela[1][1] == 'O' && tabela[2][2] == 'O') vencedor = 2;
	else if (tabela[0][2] == 'X' && tabela[1][1] == 'X' && tabela[2][0] == 'X') vencedor = 1;
	else if (tabela[0][2] == 'O' && tabela[1][1] == 'O' && tabela[2][0] == 'O') vencedor = 2;
	return vencedor;
	
}
int verificaEmpate(char tabela[3][3]) {
	int vencedor = 0;
	int flag = 0;
	for(int i=0;i<3;i++){
		for (int j = 0; j < 3; j++) {
			if (tabela[i][j] == '+') flag = 1;
			else if ((flag != 1) && (tabela[i][j] != '+')) {
				flag = 2;
			}
		}
	}
		if (flag == 2) {
			vencedor = 1;
			return vencedor;
		}
	else return 0;
	
	
}

