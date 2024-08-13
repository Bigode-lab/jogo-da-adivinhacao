#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl;

    const int NUMERO_SECRETO = 42;

    bool nao_acertou = true;
    int tentaticas = 1;
    int chute = 0;

    
    while(nao_acertou) {

        cout << "Tentativa " << tentaticas << endl;
        cout << "Qual o seu chute: ";
        cin >> chute;
        cout << "O valor do chute e: " << chute << endl;
        
        if(chute == NUMERO_SECRETO) {
            cout << "Parabens, voce acertou! O numero secreto e: " << NUMERO_SECRETO << endl;
            nao_acertou = false;
        } else if(chute > NUMERO_SECRETO) {
            cout << "Voce errou! O numero secreto e menor." << endl;
        } else {
            cout << "Voce errou! O numero secreto e maior." << endl;
        }
        tentaticas++;
    }

    cout << "Fim de jogo!" << endl;
    cout << "Voce acertou o numero secreto em " << tentaticas << "tentativas" << endl;

}
