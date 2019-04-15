#include <stdio.h>


struct node{
    int data;
    struct node *next;
};

typedef struct node node;

typedef struct {
    node *begin;
} list;

// função que te retorna uma nova lista
list * createList();

// função que addciona um elemnto no final da lita;
void add(list *l, int elemento);

void printList(const list *l);

int isEmpty(const list *l);

void removeBack( list *l );

int size(const list *l);

int hasElement(list *l, int elemento);

int insertPosition(list *l, int elemento, int pos );

int removePosition(list *l, int pos);

int removeElement(list *l, int element);

int get(list *l, int pos, int *vret);





