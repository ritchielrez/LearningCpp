#include <fmt/core.h>

int main() {
    fmt::print("Hello {1}{0}{1}", "World!", "\n");
}
