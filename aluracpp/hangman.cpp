#include <iostream>
#include <map>
#include <vector>
#include <fstream>
using namespace std;

const string SECRET_WORD = "OUSADIA";
map <char, bool> chutou;
vector <char> chutes_errados;

bool letra_existe(char chute){
  for (char letra: SECRET_WORD){
    if ( chute == letra){
      return true;
    }
  }
  return false;
}

bool nao_acertou(){
  for(char letra : SECRET_WORD){
    if(!chutou[letra])
    return true;
  }
  return false;
}

bool nao_enforcou(){
  return chutes_errados.size() < 5;
}

int main () {
  while (nao_acertou() && nao_enforcou()){
    for(char letra: SECRET_WORD){
      if(chutou[letra]){
        cout << letra << " ";
      }else {
        cout << "_ ";
      }
    }
    cout << endl;
    char chute;
    cin >> chute;

    chutou[chute] = true;

    if(letra_existe(chute)){
      cout << "Você acertou!" << endl;
    }else {
      cout << "Você errou!" << endl;
      chutes_errados.push_back(chute);
    }
  }

  cout << "Fim de jogo!" << endl;
  cout << "A palavra secreta era: " << SECRET_WORD << endl;
  if(nao_acertou()){
    cout << "Você perdeu!" << endl;
  }else{
    cout << "Parabéns! Você acertou" << endl;
  }
}