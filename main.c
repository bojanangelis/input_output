#include <stdio.h>
#include <string.h>
int main() {
    FILE * inputFile = fopen("/Users/bojanangjeleski/CLionProjects/untitled130/input.txt", "r");
    FILE * outputFile = fopen("/Users/bojanangjeleski/CLionProjects/untitled130/output.txt", "w");

    char currLine[101];
    while(fgets(currLine, 100, inputFile) != NULL){
        fprintf(outputFile, "%d\n%s", strlen(currLine), currLine);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
