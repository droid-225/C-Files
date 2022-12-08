#include <stdio.h>

void main() {
    /*
    // file writing
    FILE *pF = fopen("C:\\Users\\aryan\\OneDrive\\Desktop\\test.txt", "a"); 
    // fopen("file_name.file_type", "w for write, r for read, a for append(adding text)")
    // if absolute file path is not specified, it will save to program folder

    fprintf(pF, "\nzig Squarepants");

    fclose(pF);
    */

    /*
    // removing a file
    if(remove("test.txt") == 0) {
        printf("That file was deleted successfully!");
    }
    else
        printf("That file was not deleted!");
    */

    FILE *pF = fopen("C:\\Users\\aryan\\OneDrive\\Desktop\\test.txt", "r");
    char buffer[255]; // buffer stores each line of text in file

    if(pF == NULL) {
        printf("Unable to open file!\n");
    }
    else {
        while(fgets(buffer, 255, pF) != NULL) {
            printf("%s", buffer);
        }
    }

    fclose(pF);
}