#ifndef HEADERFILE_HASH
#define HEADERFILE_HASH
#define HASH_SIZE 997
typedef struct hashcell {
  char* text;
  int token;
  struct hashcell *next;
}HASHCELL;

//returns -1 if hash not initialized
HASHCELL* addHash(char* text, int token);
//returns -1 if hash not initialized
//and -2 if no record could be found
int getHash(char* text);
void initHash(void);

#endif
