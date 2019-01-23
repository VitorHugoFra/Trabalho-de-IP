#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <ctype.h>

#define Tam_Name 200 //Tamanho maximo para nome
#define Data 12//Tamanho maximo para o data
#define Cod 201799999 //Codigo que sera atualizado por funcionário

/*	Colégio Técnico da UFMG - 1ºANO Informática 2017
*	Trabalho de gerenciamento de funcionários da dupla: Vitor Hugo(102A) e Vitória Morais(102A)
*/
typedef struct gerenciamento_de_Usuarios {

	char Nome[Tam_Name]; //Nome do Usuário
	char Email[Tam_Name]; //Seu E-mail
	char Senha[Tam_Name];//Sua Senha

}Usuario;

typedef struct Gerenciamento_de_Funcionarios {

	char Nome[Tam_Name]; //Nome do funcionario
	char Status; //Adimitido ou Demitido
	char dataAdmissaoFuncionario[Data];//Data de Adm
	char dataDemissaoFuncionario[Data];//Data de Dem
	int Codigo;//Codigo do Funcionario
	float Salario;//Salário de cada funcionario

}Funcionarios;

Usuario *U;
Funcionarios *fun;//Variavél Global da struct funcionarios
int Num = 0;// Número de funcionarios
void erro(){

	system("clear");
	system("mpg123 -q Bug.mp3");
	system("mpg123 -q Bug.mp3");
	system("mpg123 -q Bug.mp3");
	system("mpg123 -q Bug.mp3");

	for (int i = 0; i < 2; ++i){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t███████╗██████╗ ██████╗  ██████╗     ██╗  ██╗ ██████╗ ██╗  ██╗\n");
		printf("\t\t\t\t\t\t██╔════╝██╔══██╗██╔══██╗██╔═══██╗    ██║  ██║██╔═████╗██║  ██║\n");
		printf("\t\t\t\t\t\t█████╗  ██████╔╝██████╔╝██║   ██║    ███████║██║██╔██║███████║\n");
		printf("\t\t\t\t\t\t██╔══╝  ██╔══██╗██╔══██╗██║   ██║    ╚════██║████╔╝██║╚════██║\n");
		printf("\t\t\t\t\t\t███████╗██║  ██║██║  ██║╚██████╔╝         ██║╚██████╔╝     ██║\n");
		printf("\t\t\t\t\t\t╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝          ╚═╝ ╚═════╝      ╚═╝\n");
	    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	    system("sleep 0.5");
		fflush(stdout);
    }
}
void inicio(){
	int r = 0;

	for (int i = 0; i < 1; ++i){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t  ██╗    ██╗███████╗██╗      ██████╗ ██████╗ ███╗   ███╗███████╗\n");
		printf("\t\t\t\t  ██║    ██║██╔════╝██║     ██╔════╝██╔═══██╗████╗ ████║██╔════╝\n");
		printf("\t\t\t\t  ██║ █╗ ██║█████╗  ██║     ██║     ██║   ██║██╔████╔██║█████╗\n");
		printf("\t\t\t\t  ██║███╗██║██╔══╝  ██║     ██║     ██║   ██║██║║██╔╝██║██╔══╝  \n");
		printf("\t\t\t\t  ╚███╔███╔╝███████╗███████╗╚█████═╗████████║██║║██║ ██║███████╗\n");
		printf("\t\t\t\t   ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝ ╚══════╝╚═╝╚══╝ ╚═╝╚══════╝ \n");
		system("sleep 1");
		fflush(stdout);
    }

    for (int i = 0; i < 2; ++i){
    	if(r == 0 || r == 2 || r == 4){
    		printf("\t\t\t\t\t\t\t");
    		printf("The System is Opening\n");
    		system("sleep 0.7");
    		r++;
			fflush(stdout);
		}
		else{
			r++;
			system("sleep 0.3");
			fflush(stdout);
		}
	}
}
void imprime(int i){
//Imprime funcionário em uma posição especifica
	printf("\n\t\t\t\t\t\tNome:%s\n",fun[i].Nome);
	printf("\t\t\t\t\t\tStatus:%c\n",fun[i].Status);
	printf("\t\t\t\t\t\tData de admissão:%s\n\t\t\t\t\t\tData de demissão:%s\n",fun[i].dataAdmissaoFuncionario,fun[i].dataDemissaoFuncionario);
	printf("\t\t\t\t\t\tCodigo:%d \n",fun[i].Codigo);
	printf("\t\t\t\t\t\tSalário:%.2f \n",fun[i].Salario);
	system("sleep 5");
	fflush(stdout);

}

void imprime_All(){
//Imprime todos os funcionarios
	for (int i = 0; i < Num; ++i){
		printf("\n\t\t\t\t\t\tNome:%s\n",fun[i].Nome);
		printf("\t\t\t\t\t\tStatus:%c\n",fun[i].Status);
		printf("\t\t\t\t\t\tData de admissão:%s\n\t\t\t\t\t\tData de demissão:%s\n",fun[i].dataAdmissaoFuncionario,fun[i].dataDemissaoFuncionario);
		printf("\t\t\t\t\t\tCodigo:%d \n",fun[i].Codigo);
		printf("\t\t\t\t\t\tSalário:%.2f \n",fun[i].Salario);
		system("sleep 5");
		fflush(stdout);
	}


}
void add(){
//Adimite um novo funcionário
	int i,Por = 0,Enable = 0,t,t1,t2;
	char Confirma, Stast= 'A';
	FILE *file;
	//Realoca para ter uma posição para o novo funcionário, mas como quero preencher o '0' uso Num-1 poderia somar mais um ao fim mais preferi assim
	Num +=1;//mudar para final
	fun = (Funcionarios*) malloc(Num * sizeof(Funcionarios));
	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVocê tem certeza que quer adicionar um funcionário? \n\t\t\t\t\tSe quiser digite 'S', Se não digite 'N' ou se quer sair digite 'Z':\n");
	printf("\t\t\t\t\t");
	getchar();
	printf("Sua escolha: ");
	scanf("%c",&Confirma);
	system("clear");

	if(Confirma == 'S'){
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("------------------------------------------------------------- ADICIONAR FUNCIONÁRIOS ----------------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t\t\t\tDigite o nome do funcionário:\n");
		printf("\t\t\t\t\t\t");
		getchar();
		fgets(fun[Num-1].Nome,Tam_Name,stdin);
		t = (strlen(fun[Num-1].Nome)-1);
		fun[Num-1].Nome[t]='\0';

		fun[Num-1].Codigo = Cod - (Num-1) ;

		fun[Num-1].Status = Stast;


		for(int i = 0;i < Data;i++){
			fun[Num-1].dataDemissaoFuncionario[i] ='-';
		}
		t2 = strlen(fun[Num-1].dataDemissaoFuncionario-1);
		fun[Num-1].dataDemissaoFuncionario[t2]='\0';
		printf("\t\t\t\t\t\tO status do funcionário é: %c\n",fun[Num-1].Status);
		printf("\t\t\t\t\t\tO código do funcionário é: %d\n",fun[Num-1].Codigo);
		printf("\t\t\t\t\t\tDigite o salário do funcionário:\n");
		printf("\t\t\t\t\t\t");
		scanf("%f",&fun[Num-1].Salario);
		printf("\t\t\t\t\t\tDigite a data de sua admissão:\n\t\t\t\t\t\tObs:No formato DD/MM/AAAA\n");
		printf("\t\t\t\t\t\t");
		getchar();
		scanf("%s",fun[Num-1].dataAdmissaoFuncionario);

		t1 = strlen(fun[Num-1].dataAdmissaoFuncionario-1);
		fun[Num-1].dataAdmissaoFuncionario[t1]='\0';
		printf("\n\t\t\t\t\t\tNome:%s\n",fun[Num-1].Nome);
		printf("\t\t\t\t\t\tStatus:%c\n",fun[Num-1].Status);
		printf("\t\t\t\t\t\tData de admissão:%s\n\t\t\t\t\t\tData de demissão:%s\n",fun[Num-1].dataAdmissaoFuncionario,fun[Num].dataDemissaoFuncionario);
		printf("\t\t\t\t\t\tCodigo:%d \n",fun[Num-1].Codigo);
		printf("\t\t\t\t\t\tSalário:%.2f \n",fun[Num-1].Salario);

		file = fopen("Funcionarios1.txt", "a");
		//Coloca o novo funcionario no arquivo
		fprintf(file, "%s\n", fun[Num-1].Nome);
		fprintf(file, "%c\n", fun[Num-1].Status);
		fprintf(file, "%s\n%s\n", fun[Num-1].dataAdmissaoFuncionario, fun[Num-1].dataDemissaoFuncionario);
		fprintf(file, "%d\n", fun[Num-1].Codigo);
		fprintf(file, "%f\n", fun[Num-1].Salario);
		Enable = 1;
		fclose(file);

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSALVANDO ");
		for(i = 0;i < 3;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}

		printf(" \n\t\t\t\t\t\t  |");
		for(i = 0;i < 10;i++){

			Por+=10;
			printf("%d%%|",Por);
			system("sleep 0.5");
			if(Por == 100){
				if(Enable == 1){
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tADICIONADO COM SUCESSO");
					system("sleep 0.5");
				}
				else{
					erro();
				}
			}
			fflush(stdout);
		}

	}

	else if(Confirma == 'Z'){
		exit(1);
	}
	else{
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
	}

}
void Demitido(){
//Demiti um funcionário
	int i,Por = 0,cod;
	char Confirma,dem = 'D';

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVocê tem certeza que quer demitir um funcionário? \n\t\t\t\t\tSe quiser digite 'S', Se não digite 'N' ou se quer sair digite 'Z':\n");
	printf("\t\t\t\t\t");
	getchar();
	printf("Sua escolha: ");
	scanf("%c",&Confirma);

	if(Confirma == 'S'){
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("------------------------------------------------------------- FUNCIONÁRIOS ADIMITIDOS ---------------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t\t\t\tQual e o codigo do funcionários quer demitir\n");
		scanf("%d",&cod);
		//Função propriamente dita
		for(int i = 0;i < Num;i++){
				if (fun[i].Codigo != 0){
					if (fun[i].Codigo == cod){
						fun[i].Status = dem;
						printf("Qual e a data de sua demissão\n");
						scanf("%s",fun[i].dataDemissaoFuncionario);
				}
			}
		}
		FILE *file;
		file = fopen("Funcionarios1.txt","w");
		for (int i = 0; i < Num; ++i){
			fprintf(file,"%s",fun[i].Nome);
			fprintf(file,"%c\n",fun[i].Status);
			fprintf(file,"%s",fun[i].dataAdmissaoFuncionario);
			fprintf(file,"%s\n",fun[i].dataDemissaoFuncionario );
			fprintf(file,"%d\n",fun[i].Codigo );
			fprintf(file,"%f\n",fun[i].Salario );
		}
		fclose(file);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCARREGANDO ");
		for(i = 0;i < 3;i++){
			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}

		printf(" \n\t\t\t\t\t\t  |");

		for(i = 0;i < 10;i++){
			Por+=10;
			printf("%d%%|",Por);
			system("sleep 0.5");
			fflush(stdout);
		}

	}

	else if(Confirma == 'Z'){
		exit(1);

	}
	else{
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
	}

}
void Excluir(){
//Exclui um funcionario ele e feito como o professor falou coloco 0 no codigo do funcionario e nunca mais o utilizo
	int i,Por = 0, CodigoEx;
	char Confirma;

	system("clear");
	printf("\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tVocê tem certeza que quer excluir permanentemente um funcionário? \n\t\t\t\t\tSe quiser digite 'S', se não digite 'N' ou se quer sair digite 'Z':\n");
	getchar();
	scanf("%c",&Confirma);
	system("clear");

	if(Confirma == 'S'){
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("-------------------------------------------------------------- EXCLUIR FUNCIONÁRIOS -----------------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");

		printf("\t\t\t\t\t\tDigite o codigo do funcionário que você quer excluir:\n");
		getchar();
		scanf("%d",&CodigoEx);
		printf("\t\t\t\t\t\t");

		//Função propriamente dita
		for(int i = 0;i < Num;i++){
			if (fun[i].Codigo != 0){
				if(fun[i].Codigo == CodigoEx){
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tUsuario encontrado\n");
					fun[i].Codigo =0;
					imprime(i);
				}
			}
		}
		FILE *file;
		file = fopen("Funcionarios1.txt","w");
		for (int i = 0; i < Num; ++i){
			fprintf(file,"%s",fun[i].Nome);
			fprintf(file,"%c\n",fun[i].Status);
			fprintf(file,"%s",fun[i].dataAdmissaoFuncionario);
			fprintf(file,"%s",fun[i].dataDemissaoFuncionario );
			fprintf(file,"%d\n",fun[i].Codigo );
			fprintf(file,"%f\n",fun[i].Salario );
		}
		fclose(file);

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tAPAGANDO ");
		for(i = 0;i < 3;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}

		printf(" \n\t\t\t\t\t\t  |");
		for(i = 0;i < 3;i++){

			Por+=10;
			printf("%d%%|",Por);
			system("sleep 0.5");
			if (Por == 100){
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEXCLUIDO COM SUCESSO");
			}
			fflush(stdout);
		}

	}

	else if(Confirma == 'Z'){
		exit(1);

	}
	else{
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
	}
}
void Seach_Name(){
//Procura nome,utilizo strstr pois ele returna um ponteiro que possui o que da striing que usuario digitou tem no nomme do funcioinario então se tiver um nome ou sobrenome igual ao que foi digitado imprime este funcionario
	int i,Por = 0,t;
	char Confirma,Opcao[Tam_Name], *inter;

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê tem certeza que quer buscar funcionários pelo nome? \n\t\t\t\t\t\tSe quiser digite 'S', se não digite 'N' ou se quer sair digite 'Z':\n");
	getchar();
	scanf("%c",&Confirma);
	system("clear");

	if(Confirma == 'S'){
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("---------------------------------------------------------- BUSCA DE FUNCIONÁRIOS PELO NOME ----------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");

		imprime_All();
		printf("\n\t\t\t\t\t\t\tDigite o nome do funcionários\n");
		getchar();
		fgets(Opcao,Tam_Name,stdin);
		t = (strlen(Opcao)-1);
		Opcao[t]='\0';

		//Função propriamente dita
		for (int i = 0; i < Num; ++i){
			inter = strstr(fun[i].Nome, Opcao) ;
			if (inter != NULL){
				if (fun[i].Codigo != 0){
						printf("Nome:%s\n",fun[i].Nome);
						printf("Codigo:%d \n",fun[i].Codigo);
						system("sleep 5");
						fflush(stdout);
				}
			}
		}
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCARREGANDO ");
		for(i = 0;i < 3;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}


		printf(" \n\t\t\t\t\t\t  |");
		for(i = 0;i < 10;i++){

			Por+=10;
			printf("%d%%|",Por);
			system("sleep 0.5");
			fflush(stdout);
		}

	}

	else if(Confirma == 'Z'){
		exit(1);

	}
	else{
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
	}

}
void Seach_Cod(){
//Procura pelo código,se digitado for igual ao codigo da varivel testada imprime
	int i,Por = 0,NomeS;
	char Confirma;

	system("clear");
	printf("\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tVocê tem certeza que quer buscar algum um funcionário? \n\t\t\t\t\t\tSe quiser digite 'S', se não digite 'N' ou se quer sair digite 'Z':\n");
	getchar();
	scanf("%c",&Confirma);
	system("clear");

	if(Confirma == 'S'){
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("-------------------------------------------------------- BUSCAR FUNCIONÁRIOS POR CÓDIGO -------------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");

		printf("\t\t\t\t\t\tDigite o código do funcionário que você quer buscar:\n");
		scanf("%d",&NomeS);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tBUSCANDO ");
		for(i = 0;i < 3;i++){

			printf(".");
			system("sleep 01");
			fflush(stdout);
		}
		//Função propriamente dita
		for(int i = 0; i < Num;i++){
			if (fun[i].Codigo == NomeS){
				if (fun[i].Codigo != 0){
					imprime(i);
				}
			}
		}
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSAINDO ");
			for(i = 0;i < 3;i++){

				printf(".");
				system("sleep 0.5");
				fflush(stdout);
		}

		printf(" \n\t\t\t\t\t\t  |");
		for(i = 0;i < 10;i++){

			Por+=10;
			printf("%d%%|",Por);
			system("sleep 0.5");
			fflush(stdout);
		}

	}

	else if(Confirma == 'Z'){
		exit(1);

	}
	else{
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
	}
}
void Maior(){
//Mostra o maior salário entre os funcionários
	int i,Por = 0, Maior2;
	char Confirma;
	float Maior;

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê tem certeza que quer listar o menor funcionário? \n\t\t\t\t\t\tSe quiser digite 'S', se não digite 'N' ou se quer sair digite 'Z':\n");
	getchar();
	scanf("%c",&Confirma);
	system("clear");

	if(Confirma == 'S'){
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("----------------------------------------------------------- LISTAR O MAIOR FUNCIONÁRIOS -------------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");


		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCARREGANDO ");
		for(int i = 0;i < 3;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}

		printf(" \n\t\t\t\t\t\t  |");
		for(int i = 0;i < 10;i++){
			Por+=10;
			printf("%d%%|",Por);
			system("sleep 0.5");
			fflush(stdout);
		}
		//Função propriamente dita
		Maior = fun[0].Salario;
		for(int u = 0;u < Num;u++){
			if (fun[u].Codigo != 0){
				if(fun[u].Status == 'A'){
					if(fun[u].Salario > Maior){
						Maior = fun[u].Salario;
						Maior2 = u;
					}
				}
			}
		}
		printf("\n\t\t\t\t\t\t\tO maior salário e do funcionário %d que  e :%f\n",Maior2,Maior );
		//imprime(Maior2);

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}

	}

	else if(Confirma == 'Z'){
		exit(1);

	}
	else{
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(int i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
	}

}
void Menor(){
//Mostra o menor salário entre os funcionários
	int i,Por = 0, Menor2;
	char Confirma;
	float Menor;

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê tem certeza que quer listar o menor funcionário? \n\t\t\t\t\t\tSe quiser digite 'S', se não digite 'N' ou se quer sair digite 'Z':\n");
	getchar();
	scanf("%c",&Confirma);
	system("clear");

	if(Confirma == 'S'){
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("----------------------------------------------------------- LISTAR O MENOR FUNCIONÁRIOS -------------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");


		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCARREGANDO ");
		for(int i = 0;i < 3;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}

		printf(" \n\t\t\t\t\t\t  |");
		for(int i = 0;i < 10;i++){
			Por+=10;
			printf("%d%%|",Por);
			system("sleep 0.5");
			fflush(stdout);
		}
		//Função propriamente dita
		Menor = fun[0].Salario;
		for(int u = 0;u < Num;u++){
			if (fun[u].Codigo != 0){
				if(fun[u].Status == 'A'){
					if(fun[u].Salario < Menor){
						Menor = fun[u].Salario;
						Menor2 = u;
					}
				}
			}
		}
		printf("\n\t\t\t\t\t\t\tO menor salário e do funcionário %d que  e :%f\n",Menor2,Menor );
		//imprime(Menor2);

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}

	}

	else if(Confirma == 'Z'){
		exit(1);

	}
	else{
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(int i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
	}

}
void Soma(){
//Soma todos os s
	int i,Por = 0;
	float Soma = 0;
	char Confirma;

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê tem certeza que quer listar o menor funcionário? \n\t\t\t\t\t\tSe quiser digite 'S', se não digite 'N' ou se quer sair digite 'Z':\n");
	getchar();
	scanf("%c",&Confirma);
	system("clear");

	if(Confirma == 'S'){
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("-------------------------------------------------------- SOMA OS SALÁRIOS DOS FUNCIONÁRIOS ----------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");


		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCARREGANDO ");
		for(int i = 0;i < 3;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}

		printf(" \n\t\t\t\t\t\t  |");
		for(int i = 0;i < 10;i++){
			Por+=10;
			printf("%d%%|",Por);
			system("sleep 0.5");
			fflush(stdout);
		}
		//Função propriamente dita
		for(int u = 0;u < Num;u++){
			if (fun[u].Codigo != 0){
				if(fun[u].Status == 'A'){
					Soma += fun[u].Salario;

				}
			}
		}
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n A soma dos salário e :%f",Soma);

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}

	}

	else if(Confirma == 'Z'){
		exit(1);

	}
	else{
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(int i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
	}

}
void Fun_add(){
//Lista os funcionarios admitidos
	int i,Por = 0;
	char Confirma;

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê tem certeza que quer ver os funcionários adicionados? \n\t\t\t\t\t\tSe quiser digite 'S', se não digite 'N' ou se quer sair digite 'Z':\n");
	getchar();
	scanf("%c",&Confirma);
	system("clear");

	if(Confirma == 'S'){
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("------------------------------------------------------------- FUNCIONÁRIOS ADIMITIDOS ---------------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCARREGANDO ");
		for(i = 0;i < 3;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
		//Função propriamente dita
		for(i = 0;i < Num;i++){
			if(fun[i].Status == 'A'){
				if (fun[i].Codigo != 0){
					printf("%s\n",fun[i].Nome);
					printf("%d\n",fun[i].Codigo);
					system("sleep 0.5");
				}
			}

		}

		printf(" \n\t\t\t\t\t\t  |");
		for(i = 0;i < 10;i++){

			Por+=10;
			printf("%d%%|",Por);
			system("sleep 0.5");
			fflush(stdout);
		}

	}

	else if(Confirma == 'Z'){
		exit(1);

	}
	else{
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
	}
}
void Fun_demit(){
//Lista os funcionarios demitidos
	int i,Por = 0;
	char Confirma;

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê tem certeza que quer ver os funcionários demitidos? \n\t\t\t\t\t\tSe quiser digite 'S', se não digite 'N' ou se quer sair digite 'Z':\n");
	getchar();
	scanf("%c",&Confirma);
	system("clear");

	if(Confirma == 'S'){
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("------------------------------------------------------------- FUNCIONÁRIOS DEMITIDOS ---------------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCARREGANDO ");
		for(i = 0;i < 3;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
		//Função propriamente dita
		for(i = 0;i < Num;i++){
			if(fun[i].Status == 'D'){
				if (fun[i].Codigo != 0){
					printf("\n%s",fun[i].Nome);
					printf("%d\n",fun[i].Codigo);
					printf("%s\n",fun[i].dataDemissaoFuncionario );
					system("sleep 0.5");
				}
			}

		}

		printf(" \n\t\t\t\t\t\t  |");
		for(i = 0;i < 10;i++){

			Por+=10;
			printf("%d%%|",Por);
			system("sleep 0.5");
			fflush(stdout);
		}

	}

	else if(Confirma == 'Z'){
		exit(1);

	}
	else{
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tRETORNANDO");
		for(i = 0;i < 4;i++){

			printf(".");
			system("sleep 0.5");
			fflush(stdout);
		}
	}
}
void Menu (int cont) {
//Menu e direcionador de funções
	char Escolha,escolha1, escolha2;
	FILE *file;

	if(cont == 1){

		printf ("\t\t\t\t\t\t(A)dicionar um novo funcionario;\n");
		printf ("\t\t\t\t\t\t(D)emitir algum funcionario;\n");
		printf ("\t\t\t\t\t\t(E)xcluir algum funcionario;\n");
		printf ("\t\t\t\t\t\t(L)istar o(s) funcionário;\n");
		printf ("\t\t\t\t\t\t(B)uscar algum funcionario;\n");
		printf ("\t\t\t\t\t\t(S)air;\n\n");
		printf("\t\t\t\t\t\tOpção:");
		scanf("%c", &Escolha);
	}

	else if (cont != 1){

		system("clear");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("---------------------------------------------------- SISTEMA DE GERENCIAMENTO DE FUNCIONÁRIOS -------------------------------------------------\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("@Eai_Jovem ® - Belo Horizonte 1ºANO Informática 2017\t\t\t\t\t\t\t\tVitória & Vitor Enterprise\n\n\n\n\n\n");
		printf ("\t\t\t\t\t\t(A)dicionar um novo funcionario;\n");
		printf ("\t\t\t\t\t\t(D)emitir algum funcionario;\n");
		printf ("\t\t\t\t\t\t(E)xcluir algum funcionario;\n");
		printf ("\t\t\t\t\t\t(L)istar o(s) funcionário;\n");
		printf ("\t\t\t\t\t\t(B)uscar algum funcionario;\n");
		printf ("\t\t\t\t\t\t(S)air;\n");
		printf("\t\t\t\t\t\tOpção:");
		scanf("%c", &Escolha);

	}

	Escolha = toupper(Escolha);
	printf("***%c****\n",Escolha );

	switch(Escolha){

		case 'A':
			add();
		break;
		case 'D':
			Demitido();
		break;

		case 'E':

			Excluir();

		break;
		case 'B':

			printf("\t\t\t\t\t\tDigite:\n");
			printf ("\t\t\t\t\t\t(C)onsultar o funcionário pelo nome;\n");
			printf ("\t\t\t\t\t\t(B)uscar o funcionário pelo código;\n");
			printf("\t\t\t\t\t\t");
			getchar();

			scanf("%c", &escolha1);
			escolha1 = toupper(escolha1);
				 if (escolha1 == 'C'){
				 		Seach_Name();
				        }

				 if(escolha1 == 'B'){
				 	Seach_Cod();

				    }
		break;
		case 'L':

			printf("\t\t\t\t\t\tDigite:\n");
			printf ("\t\t\t\t\t\t(M) para maior salário e seus dados;\n");
			printf ("\t\t\t\t\t\t(N) para menor salário e seus dados;\n");
			printf ("\t\t\t\t\t\t(O) para a soma dos salários dos funcionários ativos;\n");
			printf ("\t\t\t\t\t\t(P) para todos os funcionários com status admitido;\n");
			printf ("\t\t\t\t\t\t(Q) para todos os funcionários com status demitido;\n");
			printf("\t\t\t\t\t\t");
			getchar();

			scanf("%c", &escolha2);
			escolha2 = toupper(escolha2);
			if (escolha2 == 'M'){
				Maior();
				}
			if (escolha2 == 'N'){
				Menor();
			}
			if (escolha2 == 'O'){
				Soma();
			}
			if (escolha2 == 'P'){
				Fun_add();
			}
			if (escolha2 == 'Q'){
				Fun_demit();
			}
		break;
		case 'Y':
			erro();//Easter egg
		break;
		case 'T':
			imprime_All();//Easter egg
		break;

		case'S':
			//Atualiza as informaçoes no aquivo pois como eu apenas pego do arquivo ao abrir o programa ele tem que estar pronto só na saida da vez anterior
			file = fopen("Funcionarios1.txt","w");
			for (int i = 0; i < Num; ++i){
				fprintf(file,"%s",fun[i].Nome);
				fprintf(file,"%c\n",fun[i].Status);
				fprintf(file,"%s",fun[i].dataAdmissaoFuncionario);
				fprintf(file,"%s",fun[i].dataDemissaoFuncionario );
				fprintf(file,"%d\n",fun[i].Codigo );
				fprintf(file,"%f\n",fun[i].Salario );
			}
			fclose(file);

			free(fun);
			free(U);

			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tThank you for access our program\n");
			exit(1);
		break;
		default:
			printf("\n**Opção inválida**\n\n");
		break;
	}
}


int main(void){

    
	int i, Condiciona_Menu, codigo, inter = 0, j, m = 0, inter2 =0;
	char Leitura[200], c, esc, NumU, Email1[Tam_Name], Senha1[Tam_Name];

	FILE *file;// Desclaração do arquivo
	FILE *fileUsuarios;

	file = fopen("Funcionarios1.txt","a+");//Abre o arquivo

	if (file != NULL){ //Ver se já possue algo
		while(!feof(file)){ // Conta quantas inhas tem até o fim do arquivo

            c = fgetc(file);

            if(c == '\n'){
                inter += 1;
            }
        }
    }
    Num = inter/6;//Vê quandos funcionarios tem pois cada funcionario tem 6 linhas um para cada um dos campos que possue
    fclose(file);

    fun = (Funcionarios*) malloc(Num * sizeof(Funcionarios));
	file = fopen("Funcionarios1.txt","a+");

	if (file != NULL){	 //lê o conteudo do arquivo está como problemas
		for(m = 0;m < Num;m++){
			fgets(Leitura,Tam_Name,file);
           	strcpy(fun[m].Nome, Leitura);

       		fgets(Leitura,100,file);
           	fun[m].Status = Leitura[0];

           	fgets(Leitura,12,file);
           	strcpy(fun[m].dataAdmissaoFuncionario, Leitura);

           	fgets(Leitura,100,file);
           	strcpy(fun[m].dataDemissaoFuncionario, Leitura);

           	fgets(Leitura,100,file);
           	fun[m].Codigo = atoi(Leitura);


           	fgets(Leitura,100,file);
           	fun[m].Salario = atof(Leitura);
		}

    }
    fclose(file);
    fileUsuarios = fopen("Usuario.txt","a+");//Abre o arquivo

	if (fileUsuarios != NULL){ //Ver se já possue algo
		while(!feof(fileUsuarios)){ // Conta quantas inhas tem até o fim do arquivo
           	c = fgetc(fileUsuarios);
            if(c == '\n'){
               	inter2 += 1;
            }
        }
   	}
	NumU = inter2/3;//Vê quandos funcionarios tem pois cada funcionario tem 6 linhas um para cada um dos campos que possue
	fclose(fileUsuarios);

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tVocê possue conta no em nosso app??\n\t\t\t\t\t\t\tSe sim digite 'S' e senão digite 'N': ");
	scanf("%c",&esc);
	printf("%c\n",esc );

	if(esc == 'S'){

		   	printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
			printf("--------------------------------------------------------------------- LOGIN -------------------------------------------------------------------\n\n");
			printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		    U = (Usuario*) malloc(NumU * sizeof(Usuario));

			fileUsuarios = fopen("Usuario.txt","a+");

			if (fileUsuarios != NULL){	 //lê o conteudo do arquivo está como problemas
				for(int m = 0;m < NumU;m++){

					fgets(Leitura,Tam_Name,fileUsuarios);
		           	strcpy(U[m].Nome, Leitura);

					fgets(Leitura,Tam_Name,fileUsuarios);
		           	strcpy(U[m].Email, Leitura);

		           	fgets(Leitura,Tam_Name,fileUsuarios);
		           	strcpy(U[m].Senha, Leitura);
				}

		    }
		    fclose(fileUsuarios);
		    bool a = false, b = false;

		    for(int m = 0;m <= NumU && a != true && b != true;m++){
			    do {
		     		printf("Digite seu e-mail:");
		     		getchar();
		     		fflush (stdout);
		   			fgets(Email1,Tam_Name,stdin);
		   			if(strcmp (U[m].Email,Email1) == 0){
		   				a = true;
		   			}

		   		} while (strcmp (U[m].Email,Email1) != 0);

		   		do{
		   			printf("Digite a senha:");
		     		fflush (stdout);
		   			fgets(Senha1,Tam_Name,stdin);
		   			if(strcmp (U[m].Senha,Senha1) == 0){
		   				b = true;
		   			}

		   		}while (strcmp (U[m].Senha,Senha1) != 0);
		   		printf("Bem - Vindo de volta usuário %s",U[m].Nome);
	  			system("sleep 01");
		   	}

            
        }

		else{
			NumU +=1;
			U = (Usuario*) malloc(NumU * sizeof(Usuario));
			system("clear");
			printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
			printf("------------------------------------------------------------------- NOVA CONTA ----------------------------------------------------------------\n\n");
			printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
			printf("\n\n\nNome:");
			getchar();
			fgets(U[NumU-1].Nome,Tam_Name,stdin);
			printf("E-mail:");
			fgets(U[NumU-1].Email,Tam_Name,stdin);
			printf("Senha:");
			fgets(U[NumU-1].Senha,Tam_Name,stdin);

			do {
     			printf("Digite novamente a senha:");
     			fflush (stdout);
   				fgets(Senha1,Tam_Name,stdin);
  			} while (strcmp (U[NumU-1].Senha,Senha1) != 0);

  			printf("Saved successfully!! Thank you %s",U[NumU-1].Nome);
  			system("sleep 01");

			fileUsuarios = fopen("Usuario.txt","a+");
			printf("%d\n",NumU );

			fprintf(fileUsuarios,"%s",U[NumU -1].Nome);
			fprintf(fileUsuarios,"%s",U[NumU-1].Email);
			fprintf(fileUsuarios,"%s",U[NumU-1].Senha);

			fclose(fileUsuarios);
			system("clear");


        }
	system("clear");
	inicio();
	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tLOADING");

	for(int i = 0;i < 4;i++){

		printf(".");
		system("sleep 01");
		fflush(stdout);
	}
	inicio();
	system("mpg123 -q w.mp3");//Musica do Windows
	system("clear");
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
	printf("---------------------------------------------------- SISTEMA DE GERENCIAMENTO DE FUNCIONÁRIOS -------------------------------------------------\n\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
	system("sleep 01");
	printf ("\n\t\t\t\t\t\tSeja Bem-Vindo ao aplicativo da empresa Eai_Jovem.;-)\n\n\t\t\t\t\t\tNesse app você gerência as informações de sua empresa.\n\n");
	system("sleep 01");
	printf ("\t\t\t\t\t\tA seguir, listamos o que você pode fazer.\n\t\t\t\t\t\tEscolha alguma opção:\n\n");

	for (Condiciona_Menu = 1;Condiciona_Menu!= 0;Condiciona_Menu++) {
		Menu(Condiciona_Menu);
		getchar();
		file = fopen("Funcionarios1.txt","a+");

	if (file != NULL){	 //lê o conteudo do arquivo está como problemas
		for(m = 0;m < Num;m++){
			fgets(Leitura,Tam_Name,file);
           	strcpy(fun[m].Nome, Leitura);

       		fgets(Leitura,100,file);
           	fun[m].Status = Leitura[0];

           	fgets(Leitura,12,file);
           	strcpy(fun[m].dataAdmissaoFuncionario, Leitura);

           	fgets(Leitura,100,file);
           	strcpy(fun[m].dataDemissaoFuncionario, Leitura);

           	fgets(Leitura,100,file);
           	fun[m].Codigo = atoi(Leitura);

           	fgets(Leitura,100,file);
           	fun[m].Salario = atof(Leitura);

		}

    }

		system("clear");
	}

	return 0;
}
