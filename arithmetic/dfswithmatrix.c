
//�����ڽӾ���洢ͼ������������ȵķ�ʽ����

#include<stdio.h>
int book[101],sum,n,e[101][101];

void dfs(int cur)
{
    int i;
    printf("%d ",cur);
    sum++;//sum��������
    //������е�ķ��ʹ���
    if(sum == n)
    {
        return;
    }
    for(i = 1;i<=n;i++)
    {
        if(e[cur][i]==1 && book[i] == 0)
        {
            book[i] = 1;
            dfs(i);
        }
    }
    return;
}

int main()
{
    int i,j,m,a,b;
    scanf("%d%d",&n,&m);
    //��ʼ������
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                e[i][j] = 0;
            }
            else
            {
                e[i][j] = 9999999;
            }
        }
    }
    for(i=1;i<=m;i++)
    {
        scanf("%d%d",&a,&b);
        e[a][b] = 1;
        e[b][a] = 1;
    }
    book[1] = 1;
    dfs(1);//�Ӷ���1��ʼ
    return 0;
}