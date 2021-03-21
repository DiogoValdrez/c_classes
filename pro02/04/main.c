#include <stdio.h>
#include <stdlib.h>
char CAPSLOCK(char*, int);
int charsize(char*);

int main()
{
    char word[100];
    printf("Insert a word\n");
    scanf(" %s", &word);
    int size = charsize(&word);
    CAPSLOCK(&word, size);
    printf("\nCAPSLOCK: %s", word);
    return 0;
}

char CAPSLOCK(char* word, int size)
{
    for(int i = 0; i <= size; i++)
    {
        if((word[i]>=97) && (word[i]<=122))
        {
            word[i] = word[i] - 32;
        }
    }
    return word;
}
int charsize(char *word)
{
    int size = 0;
    while(word[size] != '\0')
    {
        size++;
    }
    return size;

}
