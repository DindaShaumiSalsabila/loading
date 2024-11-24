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

void save_credentials(const char *username, const char *password) {
    FILE *file = fopen("credentials.txt", "w");
    if (file != NULL) {
        fprintf(file, "Username: %s\n", username);
        fprintf(file, "Password: %s\n", password);
        fclose(file);
    } else {
        printw("Gagal menyimpan data.\n");
        refresh();
        sleep(2);
    }
}

void welcome_message(const char *username) {
    clear();
    printw("Selamat datang, %s!\n", username);
    refresh();
    sleep(2);
}
void save_credentials(const char *username, const char *password) {
    FILE *file = fopen("credentials.txt", "w");
    if (file != NULL) {
        fprintf(file, "Username: %s\n", username);
        fprintf(file, "Password: %s\n", password);
        fclose(file);
    } else {
        printw("Gagal menyimpan data.\n");
        refresh();
        sleep(2);
    }
}

void welcome_message(const char *username) {
    clear();
    printw("Selamat datang, %s!\n", username);
    refresh();
    sleep(2);
}
