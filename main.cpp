#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    long long int casos, cont = 0, num_1, num_2, soma;
    string nome_1, nome_2, par_impar_1, par_impar_2;
    cin >> casos;
    while (cont < casos){
        cin >> nome_1;
        cin >> par_impar_1;
        cin >> nome_2;
        cin >> par_impar_2;
        cin >> num_1;
        cin >> num_2;
        soma = num_1 + num_2;
        if (soma%2 == 0){
            if (par_impar_1[0] == 'P'){
                cout << nome_1;
            }else{
                cout << nome_2;
            }
        }else{
            if (par_impar_1[0] != 'P'){
                cout << nome_1;
            }else{
                cout << nome_2;
            }
        }
        cout <<endl;
        cont++;
    }
    return 0;
}
