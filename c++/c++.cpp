#include <iostream>

double calculateCircleArea(double radius) {
    return 3.14159 * radius * radius;
}

double calculateRingArea(double innerRadius, double outerRadius) {
    double innerArea = calculateCircleArea(innerRadius);
    double outerArea = calculateCircleArea(outerRadius);
    return outerArea - innerArea;
}

int main() {
    double innerRadius, outerRadius;
    setlocale(LC_ALL, "Rus");
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> innerRadius;

    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> outerRadius;

    double ringArea = calculateRingArea(innerRadius, outerRadius);

    std::cout << "Площадь кольца: " << ringArea << std::endl;

    return 0;
}
