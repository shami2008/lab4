#include <iostream>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Russian");//локализация
    double a, b, c;
    std::cout <<"введите первое число:";
    std::cin>>a;
    std::cout <<"введите второе число:";
    std::cin>>b;
    std::cout <<"введите третье число:";
    std::cin>>c ;

    double maximum;
    if (a>= b && b>=c) {//если а>b , a b>c ,то а--максимум
        maximum = a;
    } else  if (b>=a && b>= c){//если b>a , a a>c ,то b--максимум
        maximum = b;
    }else {//если c>a , a a>b ,то c--максимум
        maximum = c;
    }
    std::cout<<"максимум:" << maximum << "\n";//вывод максимума

    return 0;
}
