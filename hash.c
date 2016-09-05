#include "hash.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct hashcell {
  char* text;
  int token;
  struct hashcell *next;
}HASHCELL;

int inicializado = 0;
HASHCELL* table[HASH_SIZE];

void initHash(void){
  int i;
  if(inicializado!=0)
    return;
  for(i=0;i<HASH_SIZE;i++) {
    table[i]=NULL;
  }
  inicializado=1;
  return;
}

int hashFunction(char* text) {
  int address = 1;
  int i;
  for(i=0; i<strlen(text); i++) {
    address = (address * text[i])%HASH_SIZE +1;
  }
  return address;
}

HASHCELL* addHash(char* text, int token) {
  if(inicializado==0)
    initHash();
  if(getHash(text)>0)
    return getHASHCELL(text);
  int address = hashFunction(text);
  HASHCELL* new = (HASHCELL*) malloc(sizeof(HASHCELL));
  new->token = token;
  char* textadd = (char*) malloc(strlen(text)+1);
  strncpy(textadd, text, strlen(text));
  new->text = textadd;
  new->next = NULL;
  HASHCELL** position = &table[address];
  while(*position!=NULL){
    position = &((*position)->next);
  }
  *position = new;
  return position*;
}


HASHCELL* getHASHCELL(char* text) {
  int address = hashFunction(text);
  HASHCELL* position = table[address];
  if(position==NULL)
      return -2;
  while(strcmp(position->text, text)!=0){
    if(position->next == NULL)
      return -2;
    position = position->next;
  }
  return position;
}


int getHash(char* text){
  if(inicializado==0)
    return -1;
  HASHCELL* position = getHASHCELL(text);
  return position->token;
}
