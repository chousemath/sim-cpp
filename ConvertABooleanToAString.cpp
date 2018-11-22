#include <assert.h>
#include <string>

std::string boolean_to_string(bool b) { return b ? "true" : "false"; }

int main()
{
    assert(boolean_to_string(true) == "true");
    assert(boolean_to_string(false) == "false");
    return 0;
}