#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[200], str2[200];
    printf("Lutfen bir kelime giriniz:\n");
    fgets(str2, sizeof(str2), stdin);
	//scanf("%s",str2);
    int j = strlen(str2);

    // Girilen kelimenin sonundaki \n karakterini kaldırır, fgets kullanıldığında.
    if (j > 0 && str2[j - 1] == '\n') {
        str2[j - 1] = '\0';
        j--;
    }

    for (int i = 0; i < 40; i++) {
        if (i < j) {
            str[i] = str2[i];
        } else {
            str[i] = ' ';
        }
    }

    printf("Girdi uzunlugu: %d\n", j);

    int c = j - 1;
    for (int i = c; i >= 0; i--) {
        char temp = str[2 * i];
        str[2 * i] = str[i];
        str[i] = temp;
    }

    puts(str);

    return 0;
}
















