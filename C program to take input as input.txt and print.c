#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char buffer[1000];

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
        printf("%s", buffer);
        fprintf(outputFile, "%s", buffer);
    }
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
