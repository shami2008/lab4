#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int age;
    std::cout<<"введите возраст:";
    std::cin>>age;
    if (age < 0) {//возрвст ниже нуля не может быть
        std::cout<< "неккоректный возраст\n";
    } else if (age <=12){// от 0 до 12 -- ребенок
        std::cout <<"ребенок\n";
    }else if (age<=17) {//от 12 до 17 -- подросток
        std::cout << "подросток\n";
    } else if (age<= 64){//от 18 до 64 -- взрослый
        std::cout<< "взрослый\n";
    } else {
        std::cout<<"пожилой\n";
    }
    return 0;
}
