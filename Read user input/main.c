#include <stdio.h>

int main() {

    //region Reading a character
    char c;
    printf("Enter a character: \n");
    c = getchar();
    printf("character = %c", c);
    putchar('\n');
    //endregion

    //flush buffer
    fseek(stdin,0,SEEK_END);

    //region scanf
    //region Reading an character using scanf
    printf("Enter another character: \n");
    scanf("%c", &c);
    printf("character = %c", c);
    putchar('\n');
    //endregion

    //flush buffer
    fseek(stdin,0,SEEK_END);

    //region Reading an integer using scanf
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("number = %d", number);
    putchar('\n');
    //endregion

    //flush buffer
    fseek(stdin,0,SEEK_END);

    //region Reading a floating-point number using scanf
    float fnumber;
    printf("Enter a floating point number: \n");
    scanf("%f", &fnumber);
    printf("floating point number = %f\n", fnumber);

    //flush buffer
    fseek(stdin,0,SEEK_END);
    //endregion

    //region Reading words number using scanf
    char word[256];
    printf("Enter a word: \n");
    scanf("%s", word);
    printf("word = %s\n", word);
    //endregion

    //flush buffer
    fseek(stdin,0,SEEK_END);
    //endregion

    //region Reading words with whitespace number using scanf
    char sentence[256];
    printf("Enter a sentence with whitespace: \n");
    scanf("%s[^x]s", sentence);
    printf("sentence = %s\n", sentence);
    //endregion
    return 0;
}