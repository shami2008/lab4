#include <iostream>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Russian");
    double a, b, c;
    std::cout <<"введите первое число:";
    std::cin>>a;
    std::cout <<"введите второе число:";
    std::cin>>b;
    std::cout <<"введите третье число:";
    std::cin>>c ;

    double maximum;
    if (a>= b && b>=c) {
        maximum = a;
    } else  if (b>=a && b>= c){
        maximum = b;
    }else {
        maximum = c;
    }
    std::cout<<"максимум:" << maximum << "\n";

    return 0;
}
