#define HASH_SIZE 997

typedef HASHCELL;

//returns -1 if hash not initialized
HASHCELL* addHash(char* text, int token);
//returns -1 if hash not initialized
//and -2 if no record could be found
int getHash(char* text);
void initHash(void);
