// funcoes em pilha.

typedef struct no No;

typedef struct pilha Pilha;

Pilha* criar(void);

void push (Pilha* p, float v);

float pop (Pilha* p);

int vazia (Pilha* p);

void libera(Pilha* p);

void imprime (Pilha* p);
