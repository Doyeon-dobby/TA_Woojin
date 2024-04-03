#include <iostream>

void drawPyramid(int n) { //n 줄의 높이를 가진 피라미드 모양의 별을 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void drawInvertedPyramid(int n) { //n 줄의 높이를 가진 역피라미드 모양의 별을 출력
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            std::cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void drawDiamond(int n) {
    drawPyramid(n);
    drawInvertedPyramid(n - 1);
}

void drawHourglass(int n) {
    drawInvertedPyramid(n);
    drawPyramid(n - 1);
}

bool isValidInput(int choice, int n) {
    return (choice >= 1 && choice <= 4) && (n > 0);
}

void printMenu() {
    std::cout << "별 찍기 프로그램에 오신 것을 환영합니다.\n";
    std::cout << "1. 피라미드\n";
    std::cout << "2. 역피라미드\n";
    std::cout << "3. 다이아몬드\n";
    std::cout << "4. 모래시계\n";
    std::cout << "원하는 별 찍기 모양의 번호와 줄 수를 입력하세요 (예: 1 5): ";
}

int main() {
    int choice, n;

    printMenu();
    while(!(std::cin >> choice >> n) || !isValidInput(choice, n)) {
        std::cout << "잘못된 입력입니다. 별 찍기 모양의 번호와 줄 수를 다시 입력해주세요 (예: 1 5): ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    switch(choice) {
        case 1:
            drawPyramid(n);
            break;
        case 2:
            drawInvertedPyramid(n);
            break;
        case 3:
            drawDiamond(n);
            break;
        case 4:
            drawHourglass(n);
            break;
        default:
            std::cout << "잘못된 선택입니다. 프로그램을 종료합니다." << std::endl;
    }

    return 0;
}
