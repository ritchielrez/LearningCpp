#include <fmt/core.h>

// This program uses the fmt library, a really useful library for formatting your strings. It's really fast,
// also used by a lot of popular apps, such as aesprite(Pixel image editor), Windows Terminal, MongoDB etc.

int main() {
    // Here, we're using positional arguments to format strings like C#
    std::string s = fmt::format("Hello {1}{0}{1}", "World!", "\n");
    
    fmt::print("{}", s);

    return 0;
}
