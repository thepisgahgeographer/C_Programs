// #include <stdio.h>
// FILE *ftpr;

// int main(){
//     ftpr = fopen("test.txt", "r");
//     char myString[100];

//     fgets(myString, 100,ftpr);

//     printf("%s", myString);
//     fclose(ftpr);
// }

#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *file = fopen("test.txt", "r");
    char ch;
    int words =0;
    int in_word = 0;

    if (file == NULL) return 1;

    while ((ch = fgetc(file))!= EOF){
        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

        fclose(file);
        printf("Words: %d\n", words);
        return 0;
}


