#include <stdio.h>

int main()
{
    FILE *new_file, *target_file;
    char data[100] = "uday";
    char ch;

    new_file = fopen(data, "w");
    ch = fgetc(new_file);

    fputc(ch, target_file);

    fclose(new_file);
    fclose(target_file);
}