#include <cstdio>

void wichtel_loesch_den_zahlencode(int code[]);

int main() {
    int code[3];
    printf("Code eingeben (3 Ziffern, durch Leerzeichen getrennt): ");
    scanf("%d %d %d", &code[0], &code[1], &code[2]);
    wichtel_loesch_den_zahlencode(code);
}