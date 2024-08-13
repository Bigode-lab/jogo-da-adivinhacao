#include <stdio.h>
#include <iostream>

using namespace std;

double perdaDePontos(int chute, int numeroPerdido){
    return abs(chute - numeroPerdido)/2.0;
}

int main(){
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl;
    cout << "Escolha o seu nível de dificuldade:" << endl;
    cout << "Facil (F), Medio (M) ou Dificil (D)" << endl;
    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;

    if(dificuldade == 'F'){
        numero_de_tentativas = 15;
    }
    else if(dificuldade == 'M'){
        numero_de_tentativas = 10;
    }
    else {
        numero_de_tentativas = 5;
    }

    const int NUMERO_SECRETO = 42;
    int chute = 0;
    int tentativas;
    double pontos = 1000;
    bool acertou = false;

    
    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++) {

        cout << "Tentativa " << tentativas << endl;
        cout << "Qual o seu chute: ";
        cin >> chute;
        cout << "O valor do chute e: " << chute << endl;

        pontos = pontos - perdaDePontos(chute, NUMERO_SECRETO);

        if(chute == NUMERO_SECRETO) {
            cout << "Parabens, voce acertou! O numero secreto e: " << NUMERO_SECRETO << endl;
            cout << "Fim de jogo!" << endl;
            cout << "Voce acertou o numero secreto em " << tentativas << " tentativas" << endl;
            cout.precision(2);
            cout << fixed;
            cout << "Sua pontuacao foi: " << pontos << " pontos." << endl;
            acertou = true;
            break;
        } else if(chute > NUMERO_SECRETO) {
            cout << "Voce errou! O numero secreto e menor." << endl;
        } else {
            cout << "Voce errou! O numero secreto e maior." << endl;
        }
    }
    if(!acertou) {
        pontos = pontos/2;
        cout << "Fim de jogo!" << endl;
        cout << "Voce perdeu! O numero secreto era: " << NUMERO_SECRETO << endl;
        cout << "Voce atingiu o numero de tentativas limite." << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao foi: " << pontos << " pontos." << endl;
    }
    
}
