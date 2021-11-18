#include<stdio.h>
#include<stdlib.h>
struct studinfo
{
    char no[4];
    int s[3];
    float ave;
};
int main()
{
    FILE *fp;
    struct studinfo a;
    if((fp=fopen("score.txt","w"))==NULL)
    {
        printf("Can not create the file. \n");
        exit(0);
    }
    printf("input no and 3 scores:");
    while(scanf("%s%d%d%d",a.no,&a.s[0],&a.s[1],&a.s[2])!=EOF)
    {
        a.ave=(a.s[0]+a.s[1]+a.s[2])/3.0f;
        fprintf(fp,"%3s%4d%4d%4d%6.1f\n",a.no,a.s[0],a.s[1],a.s[2],a.ave);
        printf("input no and 3 scores:");
    }
    fclose(fp);
    return 0;
}