#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>     // for _countof

//region Prototypes
void charManipulations();
void stringManipulations();
//endregion

int main() {
    charManipulations();
    stringManipulations();
    return 0;
}

void charManipulations() {
    printf("Enter a character: \n");
    char c = getchar();

    //flush buffer
    fseek(stdin,0,SEEK_END);

    if (isdigit(c)) {
        printf("Character is a digit\n");
        return;
    }
    if (isspace(c)){
        printf("character is a space\n");
        return;
    }
    if (!isalpha(c)){
        printf("character is not an alphabet\n");
        return;
    }
    if (islower(c)) {
        printf("character is lower case\n");
        printf("character upper case: %c\n", toupper(c));
    }
    else {
        printf("character is upper case\n");
        printf("character lower case: %c\n", tolower(c));
    }
}

void stringManipulations() {
    //region declaring and printing string
    char string1[] = "##### String Manipulations #####";
    //Print string
    printf("%s\n", string1);
    //endregion
    //region Reading strings from console
    char sentence[256];
    printf("Enter a sentence: \n");
    fgets(sentence, 256, stdin);
    printf("Sentence = %s\n", sentence);
    //flush buffer
    fseek(stdin,0,SEEK_END);

    //region Printing strings
    //Printing from specific index
    printf("Char at position 0 in sentence1 = %c\n", sentence[0]);

    //Printing range in sentence
    printf("Printing Sentence 1 between position 1 & 3: ");
    for (int i = 1; i < 3; ++i) {
        printf("%c", sentence[i]);
    }
    printf("\n");
    //endregion

    //region Modifying string
    char c;
    printf("Enter a character: \n");
    c = getchar();
    sentence[0] = c;
    printf("sentence1 has been modified to: %s\n", sentence);
    //flush buffer
    fseek(stdin,0,SEEK_END);
    //endregion

    //Printing string length
    printf("Sentence length = %d\n", strlen(sentence));

    //region Concat 2 strings
    char sentence2[256];
    printf("Enter another sentence: \n");
    fgets(sentence2, 256, stdin);
    printf("Sentence = %s\n", sentence2);

    char concatenatedSentences[512];
    strcpy_s(concatenatedSentences, _countof(sentence), sentence);
    strcat(sentence, sentence2);
    printf("Concatenated sentences = %s\n", sentence);
    //endregion
}