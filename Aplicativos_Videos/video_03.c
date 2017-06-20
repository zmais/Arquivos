#include <stdio.h>
#include <stdlib.h>

/*
Programa criado por : 
Caique Silva Cruz   RA : 2216200644
Felipe Porto   RA : 2216204329
*/

void Deixa (char texto[]) {
		system("cls");
		printf("\n\n\t\t\t\t\t\t     DEIXA\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n\n\n");
		printf(" A Deixa eh um estimulo que manda o cerebro entrar em modo automatico e indica qual habito deve ser usado,\n para criar uma Deixa o segredo eh fazer uma ligacao entre a deixa e a recompensa.\n Para criar a rotina de estudar %s , a Deixa podem ser os seguintes estimulos: \n\n - Escolha um horario especifico para estudar %s.\n\n - Alguma Atividade antecessora que emita um sinal ao cerebro e que faca voce estudar %s logo em seguida.\n\n\n" , texto , texto , texto);
		printf("_______________________________________________________________________________________________________________________\n\n");
}

void Recompensa (char texto[]) {
		system("cls");
		printf("\n\n\t\t\t\t\t\t     RECOMPENSA\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n\n\n");
		printf(" A Recompensa eh quem ajuda o cerebro, a saber, se vale a pena memorizar este loop para o futuro.\n No caso, estudar %s as recompensas podem ser:\n\n - Sensacao de aprendizagem de algo novo.\n\n - Melhores oportunidades de empregos.\n\n - Melhor aprendizagem em sala de aula.\n\n\n" , texto);
		printf("_______________________________________________________________________________________________________________________\n\n");
}

void Rotina () {
		system("cls");
		printf("\n\n\t\t\t\t\t\t     ROTINA\n\n");
		printf("______________________________________________________________________________________________________________________\n\n\n\n");
		printf(" A Rotina e a forma que executamos a Deixa. Para criar essa rotina voce deve associar a rotina a recompensa.\n\n\n");
		printf("______________________________________________________________________________________________________________________\n\n");
}


int main () {
	
	int a = 0 , V;
	char texto[50], nome[50];
	
	printf("\n\n\t\t\t\t\t   O PODER DO HABITO POR CHARLES DUHIGG\n\n");
	printf("_______________________________________________________________________________________________________________________\n\n");
	printf(" Qual seu nome : ");
	gets(nome);
	printf(" O que voce quer estudar com a tecnica do Charles Duhigg : ");
	gets(texto);
	
	while (a != -1){
		
		V = 0;
		system("cls");
		printf("\n\n\t\t\t\t\t   O PODER DO HABITO POR CHARLES DUHIGG\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n");
		printf ("\n\n Bem vindo %s.\n Esse programa tem como objetivo utilizar a tecnica do Charles Duhigg e assim seja criado o habito de estudar %s.\n\n\n" , nome , texto);
		printf("_______________________________________________________________________________________________________________________\n\n");
		printf (" Basicamente todos os habitos podem ser dividos em 3 partes interligadas que formam o Loop do Habito essas\n partes sao:\n\n [1] DEIXA\n [2] RECOMPENSA\n [3] ROTINA\n\n [0] FECHAR ARQUIVO\n");
		scanf ("%d",&a);
		
		while (V != 1){
			if (a==1){
				Deixa(texto);
			} else if (a==2){
				Recompensa(texto);
			} else if (a==3){
				Rotina();
			} else if (a==0){
				a = -1;
			}
			
			if (a == 1 || a == 2 || a == 3){
				printf("\n [1] Voltar\n [0] Fechar Arquivo\n");
				scanf("%d" , &V);
			} else {
				V = 1;
			}
			
			if (V == 0 || a == -1) {
				a = -1;
				V = 1;
				system("cls");
				printf("_______________________________________________________________________________________________________________________\n\n");
				printf ("\n\n\n\n\tObrigado por ultilizar nosso programa, volte mais vezes se esquecer de algo ou precisar de ajuda!! :)\n\n\n\n\n");
				printf("_______________________________________________________________________________________________________________________\n\n");
			}	
		}
	}
	
	return 0;
	
}
