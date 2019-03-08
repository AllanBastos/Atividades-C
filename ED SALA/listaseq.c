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

#include "listaseq.h"
#include <stdio.h>
//#include <stdlib.h>

/***** Implementação da Interface de uso do TAD Lista Sequencial ******/


/* Procedimento que inicializa uma lista sequencial 
 * Parâmetros: um ponteiro para a lista (passando-a por referência)
 */
void criarLista( TLista* lista ){ lista->posUltimo = 0; }


/* Função que verifica se a lista está (ou não) vazia
 * Parâmetros: um ponteiro para a lista (passando-a por referência)
 */
int listaVazia( TLista* lista ) { return lista->posUltimo == 0; }


/* Função que verifica se a lista está (ou não) cheia
 * Parâmetros: um ponteiro para a lista (passando-a por referência)
 */
int listaCheia( TLista* lista ){ return lista->posUltimo == MAX; }


/* Função que retorna a quantidade de elementos na lista
 * Parâmetros: um ponteiro para a lista (passando-a por referência)
 */
int tamanhoLista( TLista* lista ){	return lista->posUltimo; }


/* Função que retorna um elemento dentro da lista mediante uma posição
 * Parâmetros: lista = um ponteiro para a lista (passando-a por referência)
 * posicao = posição que se quer encontrar o elemento
 * dado = um apontador (passagem por referência) que permitirá 
 *        "retornar" o elem. encontrado 
 * Retorno: 1 em caso de sucesso ou 0, caso contrário
 */
int elementoNaPosicao( TLista* lista, int posicao, int* dado ) {
	
	// se lista está vazia ou posição inválida
	if ( listaVazia( lista ) || posicao < 1 || 
	     	posicao > tamanhoLista( lista ) ) return 0;
	
	*dado = lista->elementos[ posicao - 1 ];
	return 1;
}


/* Função que retorna a posição de um dado elemento na lista (se houver)
 * Parâmetros: lista = um ponteiro para a lista (passando-a por referência)
 * elemento =  o elemento cuja posição queremos descobrir
 * Retorno: a posicao do elemento ou 0, caso contrário
 */
int posicaoDoElemento( TLista* lista, int elemento ) {
	
	// se a lista está vazia
   	if ( listaVazia( lista ) ) return 0;

    for ( register int posicaoRetorno = 1; 
          	posicaoRetorno <= lista->posUltimo; posicaoRetorno++ )
		if ( elemento == lista->elementos[ posicaoRetorno - 1 ] )
    		return posicaoRetorno;
    return 0;
}


/* Função que insere um elemento na lista mediante uma posição 
 * Parâmetros: lista = um ponteiro para a lista (passando-a por referência)
 * posicao =  a posição na qual se deseja inserir o dado 
 * elemento =  o elemento a ser inserido na lista
 * Retorno: 1 em caso de sucesso ou 0, caso contrário
 */
int inserirElemento( TLista* lista, int posicao, int elemento ) {
	
	// se lista está cheia ou posição inválida
	if ( listaCheia( lista ) || posicao < 1 ||
	    	posicao > tamanhoLista( lista ) + 1 ) return 0;

	// deslocando os outros dados para "a direita"
	for ( register int i = lista->posUltimo; i >= posicao; i-- )
		lista->elementos[ i ] = lista->elementos[ i - 1 ];

	lista->elementos[ posicao - 1 ] = elemento;
	lista->posUltimo++;
	return 1;
}


/* Função que remove um elemento na lista mediante uma posição 
 * Parâmetros: lista = um ponteiro para a lista (passando-a por referência)
 * posicao =  a posição do elemento a ser removido
 * dado = um apontador (passagem por referência) que permitirá 
 *        "retornar" o elem. encontrado 
 * Retorno: 1 em caso de sucesso ou 0, caso contrário
 */
int removerElemento( TLista* lista, int posicao, int *dado ) {

	if ( listaVazia( lista ) || posicao < 1 || 
	     	posicao > tamanhoLista( lista ) ) return 0;

	// "salvar" o elemento
	*dado = lista->elementos[ posicao - 1 ];

	for ( register int i = posicao; i <= lista->posUltimo - 1; i++ )
		lista->elementos[ i - 1 ] = lista->elementos[ i ];

	lista->posUltimo--;
    return 1;
}

/* Procedimento que imprime todos os elementos da lista sequencial 
 * Parâmetros: lista = um ponteiro para a lista (passando-a por referência)
 */
void imprimir( TLista* lista ){
	
	printf("\nLista seq.: [ " );
	
	for ( register int i = 1; i <= lista->posUltimo; i++ )
		printf("%d ", lista->elementos[ i - 1 ] );
	
	printf("]" );	
}

