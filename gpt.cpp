#include <stdio.h>

// �簢���� ��Ÿ���� ����ü ����
struct Rectangle {
    float width;
    float height;
};

int main() {
    // �簢�� ������ ������ ����ü ���� ����
    struct Rectangle rect;

    // ����ڷκ��� �簢���� ���ο� ���� ���� �Է� �ޱ�
    printf("�簢���� ���� ���̸� �Է��ϼ���: ");
    scanf("%f", &rect.width);
    printf("�簢���� ���� ���̸� �Է��ϼ���: ");
    scanf("%f", &rect.height);

    // �簢���� ���� ���
    printf("\n�Էµ� �簢���� ����:\n");
    printf("���� ����: %.2f\n", rect.width);
    printf("���� ����: %.2f\n", rect.height);
    printf("����: %.2f\n", rect.width * rect.height);
    printf("�ѷ�: %.2f\n", 2 * (rect.width + rect.height));

    return 0;
}
