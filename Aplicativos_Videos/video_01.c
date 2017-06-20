#include <stdio.h>
#include <stdlib.h>

/*
Programa criado por : 
Caique Silva Cruz   RA : 2216200644
Felipe Porto   RA : 2216204329
*/
int main () {
	
	int a = 0 , V;
	char texto[50], nome[50];
	
		printf("\n\n\t\t\t\t\t\tTECNICA FEYNMAN\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
		printf(" Qual seu nome : ");
		gets(nome);
		printf(" Qual assunto voce quer aplicar a tecnica de feynman : ");
		gets(texto);
		system("cls");
	
	while (a != -1){
		
		V = 0;
		system("cls");
		printf("\n\n\t\t\t\t\t\tTECNICA FEYNMAN\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
		printf ("\n\n Bem Vindo %s.\n Esse programa tem como objetivo mostrar como funciona a Tecnica Feynman, a qual ajuda entender as ideias\n nas quais voce tem dificuldade em compreender e aumenta memorizacao de ideias!\n Essa tecnica esta dividida em 5 partes que veremos agora.\n\n\n" , nome);
		printf("________________________________________________________________________________________________________________________\n\n");
		printf (" Abaixo esta as etapas para aplicar a tecnica de feynman em %s:\n\n [1] Primeira Etapa\n [2] Segunda Etapa\n [3] Terceira Etapa\n [4] Quarta Etapa\n [5] Quinta Etapa\n\n [0] Fechar Arquivo\n" , texto);
		scanf ("%d",&a);
		system("cls");
		printf("\n\n\t\t\t\t\t\tTECNICA FEYNMAN\n\n");
		printf("________________________________________________________________________________________________________________________\n\n");
		
		while (V != 1){
			if (a==1){
				printf(" Primeira Etapa :\n Para estudar %s, comece como de costume, para isso pesquise por livros e sites.\n\n" , texto);
			} else if (a==2){
				printf(" Segunda Etapa :\n Escrever numa folha de papel tudo o que voce aprendeu sobre o tema, escreva de uma forma como se fosse \n explicando para uma outra pessoa.\n\n");
			} else if (a==3){
				printf(" Terceira Etapa :\n Fale quando voce estiver escrevendo e de prefrencia em voz alta.\n\n");
			} else if (a==4){
				printf(" Quarta Etapa :\n Assim que terminar a explicacao, voce vai perceber em quais pontos voce esta indo bem e em quais voce nao \n esta indo muito bem. Caso nao esteja conseguindo aprender algum topico, volte e estude ate que voce esteja\n indo bem no topico.\n\n");
			} else if (a==5){
				printf(" Quinta Etapa :\n Quando terminar e voce perceber que esta dominando o assunto, repita novamente esses passos mas tente \n simplificar mais sua explicacao de preferencia com algumas analogias graficas ou algumas imagens.\n\n");
			} else if (a==0){
				a = -1;
			}
			
			if (a == 1 || a == 2 || a == 3 || a == 4 || a == 5){
				printf("________________________________________________________________________________________________________________________\n\n");
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
