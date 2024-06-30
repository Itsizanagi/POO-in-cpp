#include <iostream>

class paper{

public:
    std::string type;
    int FILE;
    void getstart(int init);

private:    
    
};

void paper::getstart(int init){
    if(init == 1){
        this->FILE = 12;
        this->type = {"arquivo.txt"};
    } else if(init == 2){
        this->FILE = 24;
        this->type = {"arquivo.py"};
    } else {
        this->FILE = 0;
        this->type = {"empty file"};
    }
}

int main() {
    
    paper *Paper = new paper();

    Paper->getstart(2);
    std::cout << Paper->FILE;
    std::cout << Paper->type;

    return 0;
}
