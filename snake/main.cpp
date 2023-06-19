#include <string>
#include <iostream>
using namespace std;
#define width 20
#define length 20

class snake
{
private:
    int xpos;
    int ypos;
public:
    //Setup kode (constructor)
snake(){};
    //Kode til at lave banen outlinen
void map(){
    
};

    //Slangekoden
void snakeBody(int x, int y){
    xpos = x / width;
    ypos = y / length;
};
    
    //Kode til logikken, som opdatering af slangen

    //Kode til bevægelsen (muligvis linked list)


    
};

int main(){
    snake snake1;
    snake1.map();

return 0;
}
