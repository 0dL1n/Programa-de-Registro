#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct{
	char nome[15];
	long int cpf;
	float salario;
}Pessoa;

Pessoa fun[25];
int total= 0;

//funcao para adicionar pessoas
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

//funcao para buscar pessoas
void buscar(){
	long int op2; int cpf; float sal;
	system("cls");
	 cout<< "PROGRAMA FUNCIONARIO"<<endl;
	 cout<< "BUSCAR "<<endl;
	 cout<< "[1] BUSCAR POR CPF"<<endl;
	 cout<< "[2] BUSCAR POR SALARIO"<<endl;
	 cout<< "OPCAO: "; cin >> op2;
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

//funcao para demitir pessoa

void demitir(){
	long int cpf; int op3; int op4;
	cout << "Programa Funcionario" << endl;
	cout << "DEMITIR " << endl;
	cout << "[1] BUSCAR POR CPF" << endl;
    cout << "[2] BUSCAR POR NOME" << endl;
    cout << "OPCAO: "; cin >> op3;
    switch (op3) {
    case 1:
        cout << endl << "CPF PARA PESQUISA: "; cin >> cpf;
        for (int i = 0; i < total; i++) {
            if (fun[i].cpf == cpf) {
                cout << "NOME: " << fun[i].nome << endl << "Salario: " << fun[i].salario << endl;

                cout << "Deseja Demitir este funcionario?" << endl;
                cout << "[1] SIM" << endl;
                cout << "[2] NAO" << endl;
                cout << "OPCAO: "; cin >> op4;
                switch (op4) {
                case 1:
                    // Sobrescreve o funcionário a ser excluído com o último funcionário da lista
                    fun[i] = fun[total - 1];
                    total--;
                    cout << "Funcionario demitido com sucesso!" << endl;
                    break;
                case 2:
                    cout << "Operação cancelada." << endl;
                    break;
                }
            }
        }
        break;
    case 2:
        // Implementar busca por nome aqui
        cout << "Buscar por nome não implementado." << endl;
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
	 cout << "[3] DEMITIR FUNCIONARIO" << endl;
	 cout<< "[0] SAIR"<<endl;
	 cout<< "OPCAO: "; cin>>op;
	 switch (op){
	  case 1: add(); break;
	  case 2: buscar(); break;
	  case 3: demitir(); break;
}
    }while (op !=0);
}
