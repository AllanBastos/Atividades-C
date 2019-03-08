/*****************************************************************************
 * Instituto Federal de Educação Ciência e Tecnologia da Paraíba			 
 * Campus Campina Grande													 
 * Curso Superior em Engenharia da Computação								 
 * Professor: Cesar Vasconcelos												 
 * 																			 
 * Copyright - Cesar Vasconcelos											 
 * Este marerial foi elaborado apenas para ser utilizado pelos alunos da 	 
 * disciplina Estruturas de Dados, do curso de Eng. da Computação do IFPB.	 
 * 																			 
 * Nenhuma parte deste material pode ser reproduzida ou transmitida			 
 * de qualquer modo ou por qualquer meio sem prévia autorização do 			 
 * autor e sem lhe ser dado o devido crédito.								 
 * **************************************************************************/


/*************** Área de dados do TAD Lista Sequencial *********************/

// número máximo de nós na lista
#define MAX 10

// Definição da estrutura lista sequencial
typedef struct lista {
	int elementos[ MAX ]; // vetor que vai armazenar os elementos
	int posUltimo; // posição do último elemento na lista (e não no vetor)
}TLista;

/************** Protótipos dos serviços do TAD Lista Sequencial ************/

// Procedimento que inicializa a lista sequencial
void criarLista( TLista* lista );

// Função que verifica se uma lista sequencial está (ou não) vazia
int listaVazia( TLista* lista );

// Função que verifica se uma lista sequencial está (ou não) cheia
int listaCheia( TLista* lista );

// Função que verifica a quantidade de elementos em uma lista sequencial
int tamanhoLista( TLista* lista );

// Função que retorna um elemento dentro da lista mediante uma posição
int elementoNaPosicao( TLista* lista, int posicao, int* dado );

// Função que retorna a posição de um dado elemento dentro da lista
int posicaoDoElemento( TLista* lista, int dado );

// Função que insere um elemento na lista sequencial mediante posição
int inserirElemento( TLista* lista, int posicao, int dado );

// Função que remove um elemento na lista sequencial mediante posição
int removerElemento( TLista* lista, int posicao, int *dado );

// Procedimento que imprime todos os elementos da lista sequencial
void imprimir( TLista* lista );