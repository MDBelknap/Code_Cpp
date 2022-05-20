#include <iostream>
#include <string>

class cEntity
{
    public:
    int x, y;

    cEntity(int x, int y){
        this->x = x;
        this->y = y;

    }
    int getX() const {
        const cEntity* e = this;
        return x;

    }
};

int main(){

    


}