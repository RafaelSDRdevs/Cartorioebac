#include <stdio.h>// biblioteca de comunicação com usuário
#include <stdlib.h>// biblioteca de alocação de espaço na memória
#include <locale.h>// biblioteca de alocação de texto por região
#include <string.h> // biblioteca de variável					
				
				int registro() //função responsável por cadastrar os usuários no sistema
			{	//início da criação de variáveis/ strings
				char arquivo[200];
				char cpf[40];
				char nome[40];
				char sobrenome[40];
				char cargo[200];
				//final da criação de variáveis/ strings
				
				printf("Digite o cpf a ser cadastrado: "); // Coletando informação do usuário
				scanf("%s", cpf); //%s refere-se a string
				
				strcpy(arquivo, cpf); //Responsável por copiar os valores da String
				
				FILE *file; //Cria o arquivo
				file = fopen(arquivo, "w"); //cria o arquivo // "w" = escrever
				fprintf(file,cpf);
				fclose(file); //fecha o arquivo
							
				file = fopen(arquivo , "a");
				fprintf(file, ","); // colocando vírgula
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
					printf("Não localizado");
				}
					while(fgets(conteudo, 200, file) != NULL)
					{
						printf("\n Essas são as informações do usuário.");
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
					printf("O usuário não se encontra no sitema. \n");
					system("pause");
					
				}
					
			}
				
				
				int main()

			{		
				int opcao=0;//Definindo variáveis
				int laco=1;
				for(laco=1;laco=1;)
			{
				system("cls");
			
				setlocale(LC_ALL,"portuguese");//Definindo a linguagem
				printf("\t***Cartório da EBAC ***\n\n"); //Início do menu
				printf("\tEscolha a opção desejada do menu:\n\n");
				printf("\t1 - Registrar nomes\n");
				printf("\t2 - Consultar nomes\n");
				printf("\t3 - Deletar nomes\n");
				printf("\t4 - Sair do sistema\n\n");
				printf("Opção:"); //Fim do menu
				
				scanf("%d", &opcao); //Armazenando a escolha do usuário
				system("cls"); //responsável por limpar a tela
		
				switch(opcao)
			{
				case 1:
				registro(); //chamada de função
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
				printf("Opção não disponível\n");
				system("pause");
				break;
			}
	
}
}
	




		
	
		
		

