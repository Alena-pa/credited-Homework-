#include <stdio.h>

int check(char* string, char* miniString) {
    int occurrenceCount = 0;
    for (int i = 0; i < (strlen(string) - strlen(miniString) + 1); i++) {
        int matchCount = 0;
        int index = i;
        for (int j = 0; j < strlen(miniString); j++) {
            if (string[index + j] == miniString[j]) {
                matchCount++;
            }
        }
        if (matchCount == strlen(miniString)) {
            occurrenceCount++;
        }
    }
    return occurrenceCount;
}

int main() {
    const char string[] = "inthisstringtherearealotofwordswordswords";
    const char miniString[] = "word";
    int answer = check(string, miniString);
    printf("%d", answer);
}