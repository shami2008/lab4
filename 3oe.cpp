#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int age;
    std::cout<<"введите возраст:";
    std::cin>>age;
    if (age < 0) {
        std::cout<< "неккоректный возраст\n";
    } else if (age <=12){
        std::cout <<"ребенок\n";
    }else if (age<=17) {
        std::cout << "подросток\n";
    } else if (age<= 64){
        std::cout<< "взрослый\n";
    } else {
        std::cout<<"пожилой\n";
    }
    return 0;
}
