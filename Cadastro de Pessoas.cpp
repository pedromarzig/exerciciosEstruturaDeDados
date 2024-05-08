#include <iostream>

using namespace std;

// Definição de um nó da árvore
struct Pessoas {
    int age;
    string name;
    float salary;
    Pessoas* left;
    Pessoas* right;
    Pessoas(int age, const string& name, float salary) : age(age), name(name), salary(salary), left(nullptr), right(nullptr) {}
};

// Função para inserir um valor na árvore
Pessoas* insert(Pessoas* person, int age, string name, float salary) {
    // Se a árvore estiver vazia, cria um novo nó
    if (person == nullptr) {
        return new Pessoas(age, name, salary);
    }

    // Se o valor for menor que o valor do nó atual, insere na subárvore esquerda
    if (name < person->name) {
        person->left = insert(person->left, age, name, salary);
    }
    // Se o valor for maior que o valor do nó atual, insere na subárvore direita
    else {
        person->right = insert(person->right, age, name, salary);
    }

    return person;
}

// Função para percorrer a árvore em ordem (in-order traversal)
void list(Pessoas* person) {
    if (person == nullptr) {
        return;
    }
    list(person->left);
    cout << person->name << ", " << person->age << ", "<<  person->salary << "k"<< endl;
    list(person->right);
}


int main() {
    // Raiz da árvore
    Pessoas* person = nullptr;

    // Adicionando valores à árvore
    person = insert(person, 30, "Erick", 1.900);
    person = insert(person, 25, "Pedro", 2.500);
   	person = insert(person, 58, "Bartolomeu", 15.000);

    // Exibindo a árvore em ordem
    cout << ":Listando pessoas \n";
    list(person);
    cout << endl;

    
}

