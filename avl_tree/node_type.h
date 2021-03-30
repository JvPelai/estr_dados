#include "aluno.h"
#include <iostream>

struct NodeType {
  Aluno aluno;
  int fatorB;
  NodeType *esquerda;
  NodeType *direita;
};