#include <iostream>
#include <string>

int main()
{
    std::string keywords[] = { "alignas", "alignof", "and b", "and_eq b", "and_eq b", "and_eq b", "asm a", "auto",
    "bitand b", "bitand b", "bool", "break", "case", "catch", "char", "char8_t c", "char16_t",
    "char32_t", "class", "compl b", "concept c", "const", "const_cast", "consteval c", "constexpr",
    "constinit c", "continue", "co_await c", "co_return c", "co_yield c", "decltype", "default",
    "delete", "do", "double", "dynamic_cast", "else", "enum", "explicit", "export c", "extern",
    "false", "float", "for", "friend", "goto", "if", "inline", "int", "long", "mutable", "namespace",
    "new", "noexcept", "not b", "not_eq b", "nullptr", "operator", "or b", "or_eq b", "private",
    "protected", "public", "register reinterpret_cast", "requires c", "return", "short",
    "signed", "sizeof", "static", "static_assert", "static_cast", "struct", "switch", "template",
    "this", "thread_local", "throw", "true", "try", "typedef", "typeid", "typename", "union",
    "unsigned", "using declaration", "using directive", "virtual", "void", "volatile", "wchar_t",
    "while", "xor b", "xor_eq b" };

    for (int i = 0; i < sizeof(keywords); i++) {
        std::cout << keywords[i] + "\n";
    }   
}