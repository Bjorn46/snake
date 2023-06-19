#include <iostream>
#include "snake.h"

void snake::map(){
    for (size_t i = 0; i < 61; i++)
    {
        std::cout << "#" << std::endl;
    }
}