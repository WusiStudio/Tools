#include "../../include/uuidExt.hpp"

#include <iostream>
#include <algorithm>

int main(int argc, char ** argv)
{
    ws::uuid tUuid;

    std::cout << tUuid.toString() << std::endl;

    std::cout << tUuid.toLowerString() << std::endl;

    return 0;
}