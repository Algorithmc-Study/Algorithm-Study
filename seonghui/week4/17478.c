#include <stdio.h>

void recul(int n, int idx)
{
    int i = 0;
    if (idx == n)
    {
        for (i = 0; i < idx; i++)
            printf("____");
        printf("\"����Լ��� ������?\"\n");
        for (i = 0; i < idx; i++)
            printf("____");
        printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
        return;
    }
    else
    {
        for (i = 0; i < idx; i++)
            printf("____");
        printf("\"����Լ��� ������?\"\n");
        for (i = 0; i < idx; i++)
            printf("____");
        printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
        for (i = 0; i < idx; i++)
            printf("____");
        printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
        for (i = 0; i < idx; i++)
            printf("____");
        printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
        idx++;
        recul(n, idx);
        for (i = 0; i < idx; i++)
            printf("____");
        printf("��� �亯�Ͽ���.\n");
    }
}

int main()
{
    int n;
    printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
    scanf("%d", &n);
    recul(n, 0);
    printf("��� �亯�Ͽ���.\n");
}