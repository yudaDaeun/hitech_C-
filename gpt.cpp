#include <stdio.h>

// 사각형을 나타내는 구조체 정의
struct Rectangle {
    float width;
    float height;
};

int main() {
    // 사각형 정보를 저장할 구조체 변수 선언
    struct Rectangle rect;

    // 사용자로부터 사각형의 가로와 세로 길이 입력 받기
    printf("사각형의 가로 길이를 입력하세요: ");
    scanf("%f", &rect.width);
    printf("사각형의 세로 길이를 입력하세요: ");
    scanf("%f", &rect.height);

    // 사각형의 정보 출력
    printf("\n입력된 사각형의 정보:\n");
    printf("가로 길이: %.2f\n", rect.width);
    printf("세로 길이: %.2f\n", rect.height);
    printf("넓이: %.2f\n", rect.width * rect.height);
    printf("둘레: %.2f\n", 2 * (rect.width + rect.height));

    return 0;
}
