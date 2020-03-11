#include <stdio.h>


//reading input using getchar();
//words count.
int main(){
    char c = getchar();
    int words = 1;
    while((c = getchar()) != '\n'){
        if(c == ' '){
            words++;
        }
    }
    printf("Count: %d\n", words);
    return 0;
}