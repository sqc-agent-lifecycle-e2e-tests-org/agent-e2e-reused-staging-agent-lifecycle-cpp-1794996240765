#include <cstdio>

int main(int argc, char **argv) {
    switch (argc) {
    case 1:
        std::puts("one");
    case 2:
        std::puts("two");
        break;
    default:
        break;
    }
    return 0;
}
