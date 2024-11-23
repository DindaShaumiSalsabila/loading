#include <ncurses.h>
#include <string>
#include <thread>
#include <chrono>

void animateLogin() {
    const std::string loading = "Loading...";
    int x = 0;

while (true) {
        clear();
        mvprintw(10, x, loading.c_str());
        refresh();
        x++;
        if (x > COLS) {
            x = 0;
        }
std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main() {
    // Inisialisasi ncurses
    initscr();
    cbreak(); // Mengaktifkan mode cbreak
    noecho(); // Menyembunyikan input pengguna
    curs_set(0); // Menyembunyikan kursor

    // Mengatur warna
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
