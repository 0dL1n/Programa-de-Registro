#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct{
	char nome[15];
	int cpf;
	float salario;
}Pessoa;

Pessoa fun[25];
int total=0;

void add(){
	 system("cls");
	 cout<< "PROGRAMA FUNCIONÁRIO"<<endl;
	 cout<< "ADICIONAR"<<endl;
	 
	 if (total < 25){
	 
	 cout<< "CPF: "; cin>>fun[total].cpf;
	 cout<< "NOME: "; cin>>fun[total].nome;
	 cout<< "SALARIO: "; cin>>fun[total].salario;
	 total++;
    
}
else
    cout<< "PROGRAMA LOTADO " <<endl;
    system("pause");
}

void buscar(){
	int op2; int cpf; float sal;
	system("cls");
	 cout<< "PROGRAMA FUNCIONARIO"<<endl;
	 cout<< "BUSCAR"<<endl;
	 cout<< "[1] BUSCAR POR CPF"<<endl;
	 cout<< "[2] BUSCAR POR SALARIO"<<endl;
	 cout<< "OPCAO: "; cin>>op2;
	 switch (op2){
	 	case 1: cout<<endl<<"CPF PARA PESQUISA: "; cin>>cpf;
	 	for (int i=0;i<total;i++){
	 		if(fun[i].cpf == cpf){
	 			cout<<"NOME: "<<fun[i].nome<<endl<<"Salario: "<<fun[i].salario<<endl;
			 }
		 }
		 break;
		 case 2: cout<<endl<<"SALARIOS MAIORES QUE: "; cin>>sal;
		 for(int i=0;i<total;i++){
		 	if (fun[i].salario >= sal)
		 	   cout<<"NOME: "<<fun[i].nome<<endl<<"Salario: "<<fun[i].salario<<endl<<endl;
		 }
		 break;
	 }
	 system("pause");
}

main(){
	int op;
	do {	
	 system("cls");
	 cout<< "PROGRAMA FUNCIONARIO"<<endl;
	 cout<< "[1] ADICIONAR FUNCIONARIO"<<endl;
	 cout<< "[2] BUSCAR FUNCIONARIO"<<endl;
	 cout<< "[0] SAIR"<<endl;
	 cout<< "OPCAO: "; cin>>op;
	 switch (op){
	  case 1: add(); break;
	  case 2: buscar(); break;
}
    }while (op !=0);
}
