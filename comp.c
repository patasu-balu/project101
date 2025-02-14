#include <stdio.h>

struct student 
{
    int rol;
    char name[50];
};

int main() {
    FILE *f = fopen("womala.txt", "w");
    if (f == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct student s = {1, "Dhanya"};
    fseek(f, 0,SEEK_SET);
    fwrite(&s, sizeof(struct student), 1, f);

    fclose(f);
    return 0;
}

