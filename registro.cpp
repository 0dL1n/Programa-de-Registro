#include <iostream>
#include <string>

using namespace std;

struct Pessoa {
    string nome;
    long int cpf;
    float salario;
};

Pessoa func[25];
int total = 0;

void adicionar() {
    cout << "Programa Funcion�rio" << endl;
    cout << "[1] Adicionar Funcion�rio" << endl;
    if (total < 25) {
        cout << "Nome: "; cin >> func[total].nome;
        cout << "CPF: "; cin >> func[total].cpf;
        cout << "Sal�rio: "; cin >> func[total].salario;
        total++;
    } else {
        cout << "Programa Lotado" << endl;
    }
}

void buscar() {
    int op2;
    int sal;
    long int cpf;
    cout << "Programa Funcion�rio" << endl;
    cout << "Buscar " << endl;
    cout << "[1] Buscar por CPF" << endl;
    cout << "[2] Buscar por sal�rio" << endl;
    cout << "Op��o: "; cin >> op2;
    switch(op2) {
        case 1: 
            cout << "Digite o CPF: "; 
            cin >> cpf;
            for(int i = 0; i < total; i++) {
                if (func[i].cpf == cpf) {
                    cout << "Nome: " << func[i].nome << endl;
                    cout << "CPF: " << func[i].cpf << endl;
                    cout << "Sal�rio: " << func[i].salario << endl;
                }
            }
            break;
        case 2: 
            cout << "Digite o sal�rio: "; 
            cin >> sal;
            for(int i = 0; i < total; i++) {
                if (func[i].salario >= sal) {
                    cout << "Nome: " << func[i].nome << endl;
                    cout << "CPF: " << func[i].cpf << endl;
                    cout << "Sal�rio: " << func[i].salario << endl;
                }
            }
            break;
    }
}

void excluir() {
    long int cpf;
    cout << "Programa Funcion�rio" << endl;
    cout << "Excluir " << endl;
    cout << "Digite o CPF do funcion�rio a ser exclu�do: ";
    cin >> cpf;
    for (int i = 0; i < total; i++) {
        if (func[i].cpf == cpf) {
            // Sobrescreve o funcion�rio a ser exclu�do com o �ltimo funcion�rio da lista
            func[i] = func[total - 1];
            total--;
            cout << "Funcion�rio exclu�do com sucesso!" << endl;
            return;
        }
    }
    cout << "CPF n�o encontrado. Nenhum funcion�rio exclu�do." << endl;
}

int main() {
    int op;
    do {
        cout << "Programa Funcion�rio" << endl;
        cout << "[1] Adicionar Funcion�rio" << endl;
        cout << "[2] Buscar Funcion�rio" << endl;
        cout << "[3] Excluir Funcion�rio" << endl;
        cout << "[0] Sair" << endl;
        cout << "Op��o: ";
        cin >> op;
        switch(op) {
            case 1: adicionar(); break;
            case 2: buscar(); break;
            case 3: excluir(); break;
        }
    } while (op != 0);
    return 0;
}

