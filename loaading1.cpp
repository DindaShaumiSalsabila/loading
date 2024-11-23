p#include <ncurses.h>
#include <string>
#include <thread>
#include <chrono>

void animateLogin() {
    const std::string loading = "Loading...";
    int x = 0;

