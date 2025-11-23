#include <stdio.h>

struct Book {
    char title[50];
    int pages;
};

void show(struct Book b) {
    printf("\nBook Title: %s\n", b.title);
    printf("Pages: %d\n", b.pages);
}

int main() {
    struct Book bk = {"C Programming", 350};
    show(bk);
    return 0;
}
