#include <stdio.h>
#include <stdlib.h>

/*
Programa criado por : 
Caique Silva Cruz   RA : 2216200644
Felipe Porto   RA : 2216204329
*/

void Tempo () {
		system("cls");
		printf("\n\n\t\t\t\t\t\t    Tempo\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n\n\n");
		printf(" Pegue um cronometro e programe para tocar um alarme a cada 25 minutos, durante esse tempo voce precisa ficar\n focado em apenas uma atividade. Lembrando que e necessario gastar todos os 25 minutos somente nessa atividade.\n\n\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n");
}

void Pausas () {
		system("cls");
		printf("\n\n\t\t\t\t\t\t    Pausas\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n\n\n");
		printf(" As pausas sao obrigatorias! Sempre que terminar o tempo de 25 minutos, faca um intervalo de 5 minutos para descansar.\n Depois de quatro pomodoris completos o descanso deve aumentar para 15 a 30 minutos.\n\n\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n");
}

void FerramentasNecessarias () {
		system("cls");
		printf("\n\n\t\t\t\t\t\tFerramentas Necessarias\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n\n\n");
		printf(" Faca duas listas, uma chamada de 'Inventario' onde voce vai anotar todas as atividades que voce ira fazer agora e no\n futuro e a outra lista de o nome de 'Tarefa do Dia' onde voce vai colocar as atividades a serem executadas no dia,\n podem seras tarefas retiradas da lista de Invantario e atividades que vao aparecendo durante o dia.\n Agora coloque o nome das atividades e coloque ao lado do nome a quantidade de pomodoris para cada atividade.\n\n\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n");
}

void Interrupcoes () {
		system("cls");
		printf("\n\n\t\t\t\t\t\tInterrupcoes\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n\n\n");
		printf(" Interrupcoes sempre ira ocorrer, entao voce precisa aprender a conviver com elas para que nao afete sua produtividade.\n Segue algumas dicas para que essas interrupcoes nao afetem voce:\n\n - Desative todas as notificacoes de celular e e-mails.\n\n - Evite atender o telefone e retorne assim que possivel.\n\n - Caso alguem venha falar com voce tente explicar que no momento nao e possivel conversar.\n\n\n\n");
		printf("_______________________________________________________________________________________________________________________\n\n");
}


int main () {
	
	int a = 0 , V;
	char texto[50], nome[50];
	
			printf("\n\n\t\t\t\t\t\tTecnica Pomodoro\n\n");
			printf("_______________________________________________________________________________________________________________________\n\n");
			printf(" Qual seu nome : ");
			gets(nome);
			printf(" Qual assunto voce quer aplicar a tecnica de pomodoro : ");
			gets(texto);
		
		while (a != -1){
			V = 0;	
			system("cls");
			printf("\n\n\t\t\t\t\t\tTecnica Pomodoro\n\n");
			printf("_______________________________________________________________________________________________________________________\n\n");
			printf ("\n\n Bem vindo %s.\n A Tecnica Pomodoro tem como intuito gerenciar o tempo. A tecnica foi desenvolvida no final dos anos 80 por\n Francesco Cirillo, que procurava uma maneira de aumentar sua produtividade nos estudos. Agora vamos \n te ensinar a usar esta tecnica em %s.\n\n\n" , nome , texto);
			printf("_______________________________________________________________________________________________________________________\n\n");
			printf (" Para a aplicar essa tecnica em %s sera necessario aprender 4 passos : \n\n [1] Tempo\n [2] Pausas\n [3] Ferramentas Necessarias\n [4] Interrupcoes\n\n [0] Fechar Arquivo\n" , texto);
			scanf ("%d",&a);
		
		while (V != 1){
			if (a==1){
				Tempo();
			} else if (a==2){
				Pausas();
			} else if (a==3){
				FerramentasNecessarias();
			} else if (a==4){
				Interrupcoes();
			} else if (a==0){
				a = -1;
			}
			
			if (a == 1 || a == 2 || a == 3 || a == 4){
				printf("\n [1] Voltar\n [0] Fechar Arquivo\n");
				scanf("%d" , &V);
			} else {
				V = 1;
			}
			
			if (V == 0 || a == -1) {
				a = -1;
				V = 1;
				system("cls");
				printf("________________________________________________________________________________________________________________________\n\n");
				printf ("\n\n\n\n\tObrigado por ultilizar nosso programa, volte mais vezes se esquecer de algo ou precisar de ajuda!! :)\n\n\n\n\n");
				printf("________________________________________________________________________________________________________________________\n\n\n\n\n\n\n\n");
				system("pause");
			}	
		}
	}
	
	return 0;
	
}
