#include <iostream>
using namespace std;

int main() {
    // Defina as dimensões da matriz
    const int linhas = 3;
    const int colunas = 4;

    // Declare e inicialize a matriz multidimensional
    int matriz[linhas][colunas] = {{1, 2, 3, 4},
                                    {5, 6, 7, 8},
                                    {9, 10, 11, 12}};

    // Acesse e imprima elementos da matriz
    cout << "Matriz:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Modifique um elemento da matriz
    matriz[1][2] = 42;

    // Imprima a matriz após a modificação
    cout << "\nMatriz apos a modificacao:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}