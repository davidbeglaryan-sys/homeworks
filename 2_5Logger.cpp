#include <iostream>
#include <string>


class Logger{
private:
    int num;
    
    template <typename T>
    void printByOne(T value){
        for(int i=0; i<num; i++){
            std::cout << " " ;
        }
        std::cout << value << std::endl;
    }
    
public:
    Logger(int n): num(n) {}
    
    template <typename... Args>
    void log(const Args&... args) {
        (printByOne(args), ...);
    }
    
    
};

int main()
{
    Logger logger(4); 

    logger.log("Hello", 123, 45.67, std::string("World"));
}