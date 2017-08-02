#define MAX 100

struct aluno{
	int matricula;
	char nome[30];
	float n1, n2,n3;
};
typedef struct lista Lista;

// CRIA A LISTA
Lista* cria_lista();

// LIBERA A LISTA
void libera_lista(Lista* li);

// TAMANHO DA LISTA
int tamanho_lista(Lista* li);

// LISTA CHEIA
int lista_cheia(Lista* li);

// LISTA VAZIA
int lista_vazia(Lista* li);

// INSERE NO FINAL DA LISTA
int insere_lista_final(Lista* li, struct aluno al);

// INSERE NO INICIO DA LISTA
int insere_lista_inicio(Lista* li, struct aluno al);

// INSERE NA LISTA DE FORMA ORDENADA
int insere_lista_ordenada(Lista* li, struct aluno al);

// REMOVE NO FINAL DA LISTA
int remove_lista_final(Lista* li);

// CONSULTA ELEMENTO NA LISTA POR POSIÇÃO
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);

// CONSULTA ELEMENTO NA LISTA POR VALOR
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);