#include <stdio.h>
#include <stdlib.h>

/*
Programa criado por : 
Caique Silva Cruz   RA : 2216200644
Felipe Porto   RA : 2216204329
*/

void Principio() {
		system("cls");
		printf("\n\n\t\t\t\t\t\tPRINCIPIO 80-20\n\n");
		printf("________________________________________________________________________________________________________________________\n\n\n\n");
		printf(" O segredo dessa estrategia eh listar todas as suas atividades e dividi-las em tarefas de alto impacto e tarefas\n de baixo impacto.\n Primeiro foque nas atividades de alto impacto e delegue se possivel as atividades que ainda precisam ser feitas.\n Sempre que aparecer algo novo utilize a mesma estrategia.\n\n\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
}

void Comece () {
		system("cls");
		printf("\n\n\t\t\t\t\tCOMECE COM O MAIS IMPORTANTE\n\n");
		printf("________________________________________________________________________________________________________________________\n\n\n\n");
		printf(" Sempre comece fazendo o mais importante e o que tera maior impacto no seu trabalho e na sua vida.\n Escolha de uma a tres tarefas de alto impacto para executar no comeco do dia.\n\n\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
}

void Anote () {
		system("cls");
		printf("\n\n\t\t\t\t\tANOTE IDEIAS E FACA UMA REVISAO SEMANAL\n\n");
		printf("________________________________________________________________________________________________________________________\n\n\n\n");
		printf(" Anote em um caderno as ideias e pensamentos surgem durante o dia, quando alguma ideia surgir pare o que esta \n fazendo e anote imediatamente, depois volte a tarefa que estava sendo executada.\n Uma vez por semana, faca uma revisao e marque tudo que e preciso para fazer na semana, a ideia eh programar \n sua semana em uma agenda,aproveite tambem para revisar as ideias anotadas durante a semana.\n\n\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
}

void Crie () {
		system("cls");
		printf("\n\n\t\t\t\t\tCRIE UM SENSO DE URGENCIA\n\n");
		printf("________________________________________________________________________________________________________________________\n\n\n\n");
		printf(" A estrategia aqui eh reduzir os prazos das atividades.Se for dado um prazo por exemplo de 9 dias para o termino\n de um programa, tente reduzir por exemplo para 6 dias.\n Dessa forma voce sera capaz de fazer mais coisas e com qualidade apenas reduzindo o prazo.\n\n\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
}

void Adicione () {
		system("cls");
		printf("\n\n\t\t\t\t\tADICIONE RECOMPENSAS E CONSEQUENCIAS\n\n");
		printf("________________________________________________________________________________________________________________________\n\n\n\n");
		printf(" Uma forma de se motivar para comecar e terminar alguma ativade eh criar uma recompensa apos termina-la.\n Por exemplo, quando voce precisa entregar um trabalho porem esta sem estimulo para terminar, crie uma recompensa \n para executar essa atividade.Essa recompensa pode ser :\n\n - Acessar sites para um pouco de entretenimento, um chocolate e assim por diante.\n\n - Se faz necessario tambem criar uma consequencia negativa para nao conclusao dessa atividade, dessa forma voce\n vai visualizar o que de ruim pode acontecer caso nao conclua a atividade.\n\n\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
}

void Poucos () {
		system("cls");
		printf("\n\n\t\t\t\t\t\tCOMECE AOS POUCOS\n\n");
		printf("________________________________________________________________________________________________________________________\n\n\n\n");
		printf(" Quando for iniciar um novo aprendizado ou alguma outra tarefa que seja nova para voce, nao tente fazer tudo de \n uma vez pois assim voce vai encontrar varias dificuldades e acabara desistindo no meio da tarefa.\n A ideia eh que voce faca aos poucos, por exemplo:\n\n - Quando for estudar uma linguagem de programacao, nao tente assistir todas as aulas de uma vez so pois sera \n impossivel aprender tudo de um dia para o outro.\n\n - Comece assistindo uma aula por dia, depois duas e assim sucessivamente ate que voce crie esse habito de estudar.\n\n\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
}

void Monitore () {
		system("cls");
		printf("\n\n\t\t\t\t\t\tMONITORE SEU PROGRESSO\n\n");
		printf("________________________________________________________________________________________________________________________\n\n\n\n");
		printf(" Monitorar o progesso tem dois grandes beneficios:\n\n - Voce tera uma motivao extra para executar as mesmas ativadades que estava fazendo ha varios dias e nao querer \n   interromper a sequencia.\n\n - Voce vai perceber a sua evolucao ao longo do tempo e vai ter uma sensacao boa de ter um criado um bom habito.\n\n\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
}

int main () {
	
	int a = 0 , V;
	char texto[50], nome[50];
	
	printf("\n\n\t\t\t\tCOMO PARAR DE PROCRASTINAR E AUMENTAR A PRODUTIVIDADE\n\n");
	printf("________________________________________________________________________________________________________________________\n\n");
	printf(" Qual seu nome : ");
	gets(nome);
	
	
	while (a != -1){
		
		V = 0;
		system("cls");
		printf("\n\n\t\t\t\tCOMO PARAR DE PROCRASTINAR E AUMENTAR A PRODUTIVIDADE\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
		printf ("\n\n Bem vindo %s.\n Esse programa tem como ideia combater a procrastinacao utilizando sete estrategias extraidas do livro 23 Habitos\n Anti-Procrastinacao,lembrando que essas dicas nao sao validas apenas para o mundo do TI mas sim para qualquer\n segmento em que esteja atuando.\n\n\n" , nome );
		printf("________________________________________________________________________________________________________________________\n\n");
		printf (" As sete estrategias sao:\n\n [1] Principio 80-20\n [2] Comece com o mais Importante\n [3] Anote ideias e faca uma revisao semanal\n [4] Crie um senso de Urgencia\n [5] Adicione recompensas e consequencias\n [6] Comece aos poucos\n [7] Monitore seu progresso\n\n [0] Fechar Arquivo\n");
		scanf ("%d",&a);
		
		while (V != 1){
			if (a==1){
				Principio();
			} else if (a==2){
				Comece();
			} else if (a==3){
				Anote();
			} else if (a==4){
				Crie();
			} else if (a==5){
				Adicione();
			} else if (a==6){
				Poucos();
			} else if(a==7) {
				Monitore();
			} else if (a==0){
				a = -1;
			}
			
			if (a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6 || a == 7){
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
			}	
		}
	}
	
	return 0;
	
}
