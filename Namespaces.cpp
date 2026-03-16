#include <iostream>

namespace first{
    int X = 1;
}
namespace second{
    int X = 2;
}

int main(){
    using namespace second;   
   
    std::cout << first::X;

    return 0;
}