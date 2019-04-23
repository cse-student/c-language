#include <stdio.h>

int main() {
    //region declaring and printing string
    char string1[] = "Hello World";
    //Print string
    printf("%s\n", string1);
    //endregion

    //region Reading strings from console
    char string2[256];
    printf("Enter a sentence: \n");
    fgets(string2, 256, stdin);
    printf("Sentence = %s\n", string2);

    //region Printing strings
    //Printing from specific index
    printf("Char at position 0 in sentence1 = %c\n", string1[0]);

    //Printing range in sentence
    printf("Printing Sentence 1 between position 1 & 3: ");
    for (int i = 1; i < 3; ++i) {
        printf("%c", string1[i]);
    }
    printf("\n");
    //endregion

    //region Modifying string
    char c;
    printf("Enter a character: \n");
    c = getchar();
    string1[0] = c;
    printf("sentence1 has been modified to: %s", string1);
    //endregion

    return 0;
}