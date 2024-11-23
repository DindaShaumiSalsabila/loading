#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <unistd.h>

#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

void loading_screen() {
    clear();
    printw("Loading");
    for (int i = 0; i < 10; i++) {
        printw(".");
        refresh();
        usleep(500000); // 0.5 detik
    }
    clear();
}

void get_user_credentials(char *username, char *password) {
    echo();
    printw("Masukkan Username: ");
    getnstr(username, MAX_USERNAME_LENGTH);
    printw("Masukkan Password: ");
    getnstr(password, MAX_PASSWORD_LENGTH);
    noecho();
}
