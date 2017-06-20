#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Declarando Constantes
#define tamanho1 5000
#define tamanho2 6
#define tamanho3 3
#define tamanho4 15
#define tamanho5 60
#define tamanho6 1770



int sorteio (int Num[tamanho1][tamanho2]) {
	int C , C1 , P = 0 ;
	int C4 = 0 , C2 , C3 , temp;
	
	//Sorteando 
	srand((unsigned)time(NULL));
	for (C = 0; C < tamanho1; C++){
		for (C1 = 0; C1 < tamanho2; C1++){
			Num[C][C1] = 1 + rand() % 60;
		}
	// Ordenando
		for (C2 = 1; C2 < tamanho2; C2++){
			C3 = C2;
			while (C3 > 0 && Num[C][C3-1] > Num[C][C3]){
				temp = Num[C][C3];
				Num[C][C3] = Num[C][C3-1];
				Num[C][C3-1] = temp;
				C3--;
			}
		}
	// Comparando e Eliminando os Numeros Iguais
		while (Num[C][0] == Num[C][1] || Num[C][1] == Num[C][2] || Num[C][2] == Num[C][3] || Num[C][3] == Num[C][4] || Num[C][4] == Num[C][5]){
			if (Num[C][C4] == Num[C][C4+1]){
				Num[C][C4+1] = 1 + rand() % 60;
			} 
				
			if (C4 <= 4){
				C4++;
			} else {
				C4 = 0;
			}
				
			for (C2 = 1; C2 < tamanho2; C2++){
				C3 = C2;
				while (C3 > 0 && Num[C][C3-1] > Num[C][C3]){
					temp = Num[C][C3];
					Num[C][C3] = Num[C][C3-1];
					Num[C][C3-1] = temp;
					C3--;
				}
			}
		
		}
		
		
	}
}



int ordenandoUnico (int P[] , int V[]) {
	int C4 , C2 , C3 , temp;
	
	// Ordenando top 15 unico
		for (C2 = 1; C2 < tamanho5; C2++){
			C3 = C2;
			while (C3 > 0 && V[C3-1] < V[C3]){
				temp = V[C3];
				V[C3] = V[C3-1];
				V[C3-1] = temp;
				temp = P[C3];
				P[C3] = P[C3-1];
				P[C3-1] = temp;
				C3--;
			}
		}
}

int ordenandoPar (int P2[] , int P3[] , int V[] , int Cont) {
	int C4 , C2 , C3 , temp , C;
	
	// Ordenando top 15 Par
		for (C2 = 1; C2 < Cont; C2++){
			C3 = C2;
			while (C3 > 0 && V[C3-1] < V[C3]){
				temp = V[C3];
				V[C3] = V[C3-1];
				V[C3-1] = temp;
				temp = P2[C3];
				P2[C3] = P2[C3-1];
				P2[C3-1] = temp;
				temp = P3[C3];
				P3[C3] = P3[C3-1];
				P3[C3-1] = temp;
				C3--;
			}
		}
		printf ("\n\n\t\t\t\t\t\t| PARES MAIS SORTEADOS |\n\n");
		printf ("________________________________________________________________________________________________________________________\n\n");
		for (C = 0; C < tamanho4; C++){
			printf ("\tNumero [%02d] e [%02d] = %02d vezes.\n" , P2[C], P3[C] , V[C]);
		}
		
}

int UltimoSorteio (int Num[tamanho1][tamanho2] , int US[] ) {
	int C5 = 0 ,C4 = 1, C2 , C3 , temp, Pre = 0;
	// Ordenando os numeros que mais sairam em um "top15"
	while (C4 <= tamanho5){
		for (C2 = tamanho1-1; C2 >= 0; C2--){
			for (C3 = 0; C3 < tamanho2; C3++){
				if (C4 == Num[C2][C3]){
					Pre = 1;
				}
			}
			if (Pre != 1){
				C5++;
			} else {
				break;
			}
		}
		US[C4-1] = C5;
		Pre = 0;
		C5 = 0;
		C4++;
	}
}

int CompararJogada (char Nome[tamanho3][20] , int Num[tamanho1][tamanho2] , int NJ[3][tamanho2]){
	int C = 0 , C2 , C3 , C4 = 0 , C5, VA[3] , Sort[3];
	//Examina quanto numero e qual sorteio o usuario acertou mais numeros.
	system("Pause");
	system("cls");
	printf ("\n\n\t\t\t\t\t\tResultado dos Jogos\n\n");
	printf ("________________________________________________________________________________________________________________________\n\n");
		
	while (C < tamanho3){
		for (C2 = 0; C2 < tamanho1; C2++){
			for (C3 = 0; C3 < tamanho2; C3++){
				for (C5 = 0; C5 < tamanho2; C5++){
					if (Num[C2][C3] == NJ[C][C5]){
						C4++;
					}
				}
				
			}
			if (C4 >= VA[C]){
				VA[C] = C4;
				Sort[C] = C2+1;
			}
			C4 = 0;
		}
		C++;
	}
	
	for (C = 0; C < tamanho3; C++){
		printf("Parabens %s, voce acertou %02d numeros! Sorteio [ %04d ]\n\n" , Nome[C] , VA[C] , Sort[C]);
	}
	
}

int RepeticaoSimples (int NJ[3][tamanho2] , int C){
	int C2 , C3 , temp;
	//Examina se a repeticao no jogo.
	for (C2 = 1; C2 < tamanho2; C2++){
		C3 = C2;
		while (C3 > 0 && NJ[C][C3-1] > NJ[C][C3]){
			temp = NJ[C][C3];
			NJ[C][C3] = NJ[C][C3-1];
			NJ[C][C3-1] = temp;
			C3--;
		}
	}
	
}



int main () {
	

	int Numeros[tamanho1][tamanho2] , C , C1 , C2 = 0 , C3 , C4 ,  R = 1 , Tam = 0 , Escolha = 0, temp = 0;
	int V[tamanho5] = {0} , P[tamanho5] = {0} , V1[tamanho5] = {0} , P1[tamanho5] = {0}, V2[tamanho6] = {0}, P2[tamanho6] = {0}, P3[tamanho6] = {0};
	int Num[tamanho1][tamanho2] = {0}, US[tamanho5] = {0}, NJ[tamanho3][tamanho2] = {0};
	char Nome[tamanho3][20] , CPF[tamanho3][20];
	
	sorteio(Numeros);
	
	
	// Copiando a Matriz
		for (C = 0; C < tamanho1; C++){
			for (C1 = 0; C1 < tamanho2; C1++){
				Num[C][C1] = Numeros[C][C1]; 
			}
		}
		
		
	UltimoSorteio(Num , US);
	
	while (R <= tamanho5){
		for (C = 0; C < tamanho1; C++){
			for (C1 = 0; C1 < tamanho2; C1++){
				if (Numeros[C][C1] == R) {
					Tam++;
				}
			}
		}
		P[R-1] = R;
		V[R-1] = Tam;
		Tam = 0;
		R++;
	}
	
	for (C = 0; C < tamanho5; C++){
		P1[C] = P[C];
		V1[C] = V[C];
	}
	
	
	for (C = 1 ; C <= tamanho5-1; C++){
		for (C1 = C + 1; C1 <= tamanho5; C1++){
			P2[C2] = C;
			P3[C2] = C1;
			for (C3 = 0; C3 < tamanho1; C3++){
				for (C4 = 0; C4 < tamanho2; C4++){
					if (C == Num[C3][C4] || C1 == Num[C3][C4]) {
						Tam += 1;
						if (Tam >= 2) {
							V2[C2] += 1;
						}
					}
				}
				Tam = 0;
			}
			C2++;	
		}
	}
			
	
	while (Escolha != -1){
		printf ("\n\n\t\t\t\t\t\t     | MEGA-SENA |\n\n");
		printf ("________________________________________________________________________________________________________________________\n\n");
		printf ("  [1] EXIBIR NUMEROS SORTEADOS\n  [2] EXIBIR A QUANTIDADE DE SORTEIO DE CADA NUMERO\n  [3] EXIBIR NUMEROS MAIS SORTEADOS\n  [4] EXIBIR PARES MAIS SORTEADOS\n  [5] EXIBIR ULTIMO SORTEIO DOS NUMEROS\n  [6] REGISTRAR DE JOGADORES\n\n  [0] FECHAR PROGRAMA\n");
		scanf ("%d" , &Escolha);
		system("cls");
	
		if (Escolha == 1){
			printf ("\n\n\t\t\t\t\t\t| SORTEIO DE NUMEROS |\n\n");
			printf ("________________________________________________________________________________________________________________________\n\n");
		// Escrevendo na tela numeros sorteados
			for (C = 0; C < tamanho1; C++){
				printf ("\tSorteio %04d : " , C+1);
			for (C1 = 0; C1 < tamanho2; C1++){
				printf ("%02d " , Numeros[C][C1]);
			}
				printf ("\n");
			}
			system("Pause");
			system("cls");
	
		} else if (Escolha == 2){
		
		// Escrevendo quantas vezes foi sorteado	
			R = 1;
			printf ("\n\n\t\t\t\t\t| QUANTIDADE DE SORTEIO DE CADA NUMERO |\n\n");
			printf ("________________________________________________________________________________________________________________________\n\n");
			while (R <= tamanho5){
				printf ("\tNumero [%02d] = %02d vezes.\n" , P[R-1] , V[R-1]);
				R++;
			}
			printf("\n\n");
			system("Pause");
			system("cls");
	
		} else if (Escolha == 3){
		
			// Ordenando top 15 unico
			ordenandoUnico(P1 , V1);
			printf ("\n\n\t\t\t\t\t\t| NUMEROS MAIS SORTEADOS |\n\n");
			printf ("________________________________________________________________________________________________________________________\n\n");
			for (C = 0; C < tamanho4; C++){
				printf ("\tNumero [%02d] = %02d vezes.\n" , P1[C] , V1[C]);
			}
			printf("\n\n");
			system("Pause");
			system("cls");
			
		} else if (Escolha == 4) {
			ordenandoPar(P2 , P3, V2, C2);
			printf("\n\n");
			system("Pause");
			system("cls");
		
		} else if (Escolha == 5){
			//Ultima sorteio que apareceu
			printf ("\n\n\t\t\t\t\t    | ULTIMO SORTEIO DOS NUMEROS |\n\n");
			printf ("________________________________________________________________________________________________________________________\n\n");
			for (C = 0; C < tamanho5; C++){
				if (US[C] == 0) {
					printf ("\tNumero %02d = Saiu no ultimo sorteio.\n",  C+1);
				} else {
					printf ("\tNumero %02d = nao sai a %02d sorteios seguidos.\n",  C+1 , US[C]);
				}	
			}
			printf("\n\n");
			system("Pause");
			system("cls");
		
		} else if (Escolha == 6){
			printf ("\n\n\t\t\t\t\t\t| JOGADORES |\n\n");
			printf ("________________________________________________________________________________________________________________________\n\n\n");
		
			for (C = 0; C < tamanho3; C++){
				printf ("________________________________________________________________________________________________________________________\n");
				printf ("\n\t\t\t\t\t\t| JOGADOR %d |\n" , C+1);
				printf ("________________________________________________________________________________________________________________________\n\n");
				printf ("Digite Seu Nome : ");
				scanf ("%s" , Nome[C]);
				printf ("\nDigite Seu CPF : ");
				scanf ("%s" , CPF[C]);
				printf ("\nDigite Seu Jogo : ");
				for (C1 = 0; C1 < tamanho2; C1++){
					scanf ("%d" , &NJ[C][C1]);
				}
				RepeticaoSimples(NJ , C);
				
				while (NJ[C][0] == NJ[C][1] || NJ[C][1] == NJ[C][2] || NJ[C][2] == NJ[C][3] || NJ[C][3] == NJ[C][4] || NJ[C][4] == NJ[C][5]){
					printf ("\nNumeros Invalidos, Digite Seu Jogo Novamente : ");
					for (C1 = 0; C1 < tamanho2; C1++){
						scanf ("%d" , &NJ[C][C1]);
					}
					RepeticaoSimples(NJ , C);	
				}
				
				printf("\n\n");
			}
	
			CompararJogada(Nome , Num , NJ);
			printf("\n\n");
			system("Pause");
			system("cls");
		
		}else if (Escolha == 0) {
		
			Escolha = -1;
			system("cls");
			printf ("\n\n\n\n\n\t\t\tOBRIGADO PELA ULTILIZACAO DO NOSSO PROGRAMA , VOLTE SEMPRE !!\n\n\n\n\n");
			printf ("________________________________________________________________________________________________________________________\n\n");
			system("Pause");
		
		}
	
	} 
	
	
	return 0;
	
}
