// funcoes da calculadora.

typedef struct calc Calc;

Calc* cria_calc(char* c);

void operando (Calc* c, float v);

void operador (Calc* c, char op);

void libera_calc (Calc* c);
