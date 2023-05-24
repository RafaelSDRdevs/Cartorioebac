#include <stdio.h>// biblioteca de comunica��o com usu�rio
#include <stdlib.h>// biblioteca de aloca��o de espa�o na mem�ria
#include <locale.h>// biblioteca de aloca��o de texto por regi�o
#include <string.h> // biblioteca de vari�vel					
				
				int registro() //fun��o respons�vel por cadastrar os usu�rios no sistema
			{	//in�cio da cria��o de vari�veis/ strings
				char arquivo[200];
				char cpf[40];
				char nome[40];
				char sobrenome[40];
				char cargo[200];
				//final da cria��o de vari�veis/ strings
				
				printf("Digite o cpf a ser cadastrado: "); // Coletando informa��o do usu�rio
				scanf("%s", cpf); //%s refere-se a string
				
				strcpy(arquivo, cpf); //Respons�vel por copiar os valores da String
				
				FILE *file; //Cria o arquivo
				file = fopen(arquivo, "w"); //cria o arquivo // "w" = escrever
				fprintf(file,cpf);
				fclose(file); //fecha o arquivo
							
				file = fopen(arquivo , "a");
				fprintf(file, ","); // colocando v�rgula
				fclose(file);
				
				printf("Digite o nome a ser cadastrado ");
				scanf("%s", nome);
				
				file = fopen(arquivo, "a");
				fprintf(file, nome);
				fclose(file);
				
				file = fopen(arquivo , "a");
				fprintf(file, ",");
				fclose(file);
				
				printf("Digite o sobrenome a ser cadastrado ");
				scanf("%s", sobrenome);
				
				file = fopen(arquivo, "a");
				fprintf(file, sobrenome);
				fclose(file);
				
				file = fopen(arquivo , "a");
				fprintf(file, ",");
				fclose(file);
				
				
				file = fopen(arquivo , "a");
				fprintf(file, ",");
				fclose(file);
				
				printf("Digite o cargo a ser cadastrado ");
				scanf("%s", cargo);
				
				file = fopen(arquivo, "a");
				fprintf(file,cargo);
				fclose(file);
				
				system("pause");		
			}	
				
				int consulta()
			{	
				setlocale(LC_ALL,"portuguese");
				
				char cpf[40];
				char conteudo[200];
				
				printf("Digite o cpf a ser consultado:");
				scanf("%s", cpf);
				
				FILE *file;
				file = fopen(cpf, "r"); // "r" refere-se a ler
				
				if(file == NULL)
				{
					printf("N�o localizado");
				}
					while(fgets(conteudo, 200, file) != NULL)
					{
						printf("\n Essas s�o as informa��es do usu�rio.");
						printf("%s", conteudo);
						printf("\n\n");
						system("pause");
						
					}
				
				
				system("pause");	
			}
				int deletar()
			{	
				char cpf[40];
				
				
				printf("Informe o CPF que deseja deletar:\n");
				scanf("%s",cpf);
				
				
				remove(cpf);
				
				FILE *file;
				file = fopen(cpf, "r");
				if(file == NULL)
				{
					printf("O usu�rio n�o se encontra no sitema. \n");
					system("pause");
					
				}
					
			}
				
				
				int main()

			{		
				int opcao=0;//Definindo vari�veis
				int laco=1;
				for(laco=1;laco=1;)
			{
				system("cls");
			
				setlocale(LC_ALL,"portuguese");//Definindo a linguagem
				printf("\t***Cart�rio da EBAC ***\n\n"); //In�cio do menu
				printf("\tEscolha a op��o desejada do menu:\n\n");
				printf("\t1 - Registrar nomes\n");
				printf("\t2 - Consultar nomes\n");
				printf("\t3 - Deletar nomes\n");
				printf("\t4 - Sair do sistema\n\n");
				printf("Op��o:"); //Fim do menu
				
				scanf("%d", &opcao); //Armazenando a escolha do usu�rio
				system("cls"); //respons�vel por limpar a tela
		
				switch(opcao)
			{
				case 1:
				registro(); //chamada de fun��o
				break;
			
				case 2:
				consulta();
				break;
			
				case 3:
				deletar();
				break;
				
				case 4:
				printf("Obrigado por utilizar o sistema!\n");
				return 0;
				break;
			
				default:
				printf("Op��o n�o dispon�vel\n");
				system("pause");
				break;
			}
	
}
}
	




		
	
		
		

