#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//programa de jogo de adivinhaçao
class JogoAdivinhacao {
    //o que nao vai aparecer para o jogador
    private:
    int numerosecreto;
    int tentativas;
    //o que aparece para o jogador
    public:
    JogoAdivinhacao() {
        //codigo para gerar o numero secreto
        srand(time(0));
        numerosecreto = rand() % 100 + 1;
        tentativas = 0;
    }
    //o comeco do jogo
    void jogar() {
        //o numero que o jogador ira chutar
        int palpite;
        do {
            cout << "Digite um numero entre 1 a 100: ";
            cin >> palpite;
            tentativas++;
            if (palpite > numerosecreto) {
                cout << " O numero secreto é menor! " << endl;
            } else if (palpite < numerosecreto) {
                cout << " O numero secreto é maior! " << endl;
            } else {
                cout << " Parabéns, voce acertou o numero em " << tentativas << " tentativas! " << endl;
            }
            //quando algum numero que ele colocar for igual ao numero secreto gerado pelo codigo, ele ganha
        } while (palpite != numerosecreto);
    }
};  
//codigo para ele poder jogar de novo
int main() {
    JogoAdivinhacao jogo;
    jogo.jogar();
    return 0;
}