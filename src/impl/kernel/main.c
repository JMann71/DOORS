#include "../interface/print.h"

void kernel_main(unsigned long mboot_addr) {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to 64 bit kernel land!");
}