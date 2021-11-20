#include<stdio.h>
#include<stdlib.h>
// 构造函数studinfo        //studentinformation
struct studinfo
{
    char name[100];
    int score[4];
    float average;
};
int main()
{
    FILE *fp;
    struct studinfo a;
    int i,n;
    if((fp=fopen("score.txt","w"))==NULL)
    {
        printf("Can not create the file.\n");
        exit(0);
    }
    // 生成文件
    printf("How many people do you want to record?\n");
    scanf("%d",&n);

    fprintf(fp,"name\tM\tE\tC\tAve\n");
    // 打印文件开头明细
    for(i=0;i<n;i++)
    {
        printf("Input name and Math English Chinese scores:"); 
        scanf("%s%d%d%d",a.name,&a.score[0],&a.score[1],&a.score[2]);
        // 输入名字和成绩
        a.average=(a.score[0]+a.score[1]+a.score[2])/3.0f;
        // 平均数
        fprintf(fp,"%s%5d%5d%5d%6.1f\n",a.name,a.score[0],a.score[1],a.score[2],a.average);
        // 记录到文件中
    }
    fclose(fp);

    printf("over\n");
    
    return 0;
}