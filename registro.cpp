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
    cout << "Programa Funcionário" << endl;
    cout << "[1] Adicionar Funcionário" << endl;
    if (total < 25) {
        cout << "Nome: "; cin >> func[total].nome;
        cout << "CPF: "; cin >> func[total].cpf;
        cout << "Salário: "; cin >> func[total].salario;
        total++;
    } else {
        cout << "Programa Lotado" << endl;
    }
}

void buscar() {
    int op2;
    int sal;
    long int cpf;
    cout << "Programa Funcionário" << endl;
    cout << "Buscar " << endl;
    cout << "[1] Buscar por CPF" << endl;
    cout << "[2] Buscar por salário" << endl;
    cout << "Opção: "; cin >> op2;
    switch(op2) {
        case 1: 
            cout << "Digite o CPF: "; 
            cin >> cpf;
            for(int i = 0; i < total; i++) {
                if (func[i].cpf == cpf) {
                    cout << "Nome: " << func[i].nome << endl;
                    cout << "CPF: " << func[i].cpf << endl;
                    cout << "Salário: " << func[i].salario << endl;
                }
            }
            break;
        case 2: 
            cout << "Digite o salário: "; 
            cin >> sal;
            for(int i = 0; i < total; i++) {
                if (func[i].salario >= sal) {
                    cout << "Nome: " << func[i].nome << endl;
                    cout << "CPF: " << func[i].cpf << endl;
                    cout << "Salário: " << func[i].salario << endl;
                }
            }
            break;
    }
}

void excluir() {
    long int cpf;
    cout << "Programa Funcionário" << endl;
    cout << "Excluir " << endl;
    cout << "Digite o CPF do funcionário a ser excluído: ";
    cin >> cpf;
    for (int i = 0; i < total; i++) {
        if (func[i].cpf == cpf) {
            // Sobrescreve o funcionário a ser excluído com o último funcionário da lista
            func[i] = func[total - 1];
            total--;
            cout << "Funcionário excluído com sucesso!" << endl;
            return;
        }
    }
    cout << "CPF não encontrado. Nenhum funcionário excluído." << endl;
}

int main() {
    int op;
    do {
        cout << "Programa Funcionário" << endl;
        cout << "[1] Adicionar Funcionário" << endl;
        cout << "[2] Buscar Funcionário" << endl;
        cout << "[3] Excluir Funcionário" << endl;
        cout << "[0] Sair" << endl;
        cout << "Opção: ";
        cin >> op;
        switch(op) {
            case 1: adicionar(); break;
            case 2: buscar(); break;
            case 3: excluir(); break;
        }
    } while (op != 0);
    return 0;
}

