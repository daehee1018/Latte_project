#include <stdio.h>
#include <Windows.h>

void choice() {
    char choice;
    int currentSnack = 0;
    // ���Ͽ��� ���� ���� �о����
    FILE* file = fopen("score.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &currentSnack);
        fclose(file);

        // ����ڿ��� ���� �ʱ�ȭ ���� ����
        printf("���� ���� �� : %d��\n", currentSnack);
        printf("������ �ʱ�ȭ �Ͻðڽ��ϱ�? (Y/N):  ");
        scanf("  %c", &choice);

        // ���� �ʱ�ȭ
        FILE* file = fopen("score.txt", "w");
        if (choice == 'Y' || choice == 'y') {
           currentSnack = currentSnack* 0; 
            fseek(file, 0, SEEK_SET); // ���� ������ ��ġ�� ������ �������� �̵�
            fprintf(file, "%d", currentSnack);
            fclose(file);
            printf("������ �ʱ�ȭ�Ǿ����ϴ�.\n");
        }

        else {
            printf("������ �� �� �����ϴ�. �ʱ�ȭ ����.\n");
        }
        printf("�ƹ� Ű�� ���� ����ȭ������ ���ư���\n");
        _getch();
        system("cls");  title();
    }
}
      
