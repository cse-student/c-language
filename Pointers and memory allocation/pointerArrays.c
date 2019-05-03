void arrayOfStrings() {
    char *array[] = {
            "c-language",
            "c++",
            "java",
            "c#",
            "kotlin"
    };
    char *language;
    for (int i = 0; i < __crt_countof(array); i++) {
        language = *(array+i);
        while (*language) {
            putchar(*language);
            *language = toupper(*language);
            language++;
        }
        putchar('\n');
    }

    for (int i = 0; i < __crt_countof(array); i++) {
        printf("Element at index %d: %s\n", i, array[i]);
    }
}