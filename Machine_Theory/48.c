#include<math.h>
#include<dos.h>
#include<graphics. h>
#include<conio.h>
#include<stdio.h>
#define l 135.0
#define Aa 42
#define r_b 40
#define rr 8
#define K (3.1415926/180)
#define dt 0.25
float Q_max,Q_t,Q_s,Q_h;
float Q_a;
double L,pr;
float e[1500],f[1500],g[1500];
void Cal(float Q,double Q_Q[3])
{
    Q_max=15,Q_t=75,Q_s=10,Q_h=70;
    if(Q>=0&&Q<=Q_t/2)
    {
    Q_Q[0]=K*(2 *Q_max*Q*Q/(Q_t* Q_t));
    Q_Q [1]=4* Q_max*Q/(Q_t*Q_t);
    Q_Q [2 ] =4* Q_max/ (Q_t* Q_t);
    }
    if(Q>Q_t/2&&Q<=Q_t)
    {
    Q_Q[0] =K*(Q_max-2* Q_max* (Q-Q_t)* (Q-Q_t)/(Q_t*Q_t));
    Q_Q[l]=4*Q_max* (Q_t-Q)/(Q_t* Q_t);
    Q_Q [2 ] =-4 * Q_max/ (Q_t* Q_t);
    }
    if(Q>Q_t&&Q<=Q_t+Q_s)
    {
    Q_Q[0] =K* Q_max;
    Q_Q[1]=0;
    Q_Q[2]=0;
    }
    if(Q>Q_t+Q_s&&Q<=Q_t+Q_s+Q_h/2)
    {
    Q_Q [0] =K* (Q_max-2 * Q_max* (Q-Q_t-Q_s)* (Q-Q_t-Q_s)/(Q_h * Q_h));
    Q_Q[l]=-4* Q_max* (Q-Q_t-Q_s)/(Q_h*Q_h);
    Q_Q [2] = 4* Q_max/(Q_h* Q_h);
    } 
    if(Q>Q_t+Q_s+Q_h/2&&Q<=Q_t+Q_s+Q_h)
    {
    Q_Q[0]=K*(2*Q_max*(Q_h-Q+Q_t+Q_s)* (Q_h-Q+Q_t+Q_s)/(Q_h*Q_h));
    Q_Q[1]=-4* Q_max* (Q_h-Q+Q_t+Q_s)/(Q_h* Q_h);
    Q_Q [2] =4* Q_max/(Q_h* Q_h);
    }
    if(Q>Q_t+Q_s+Q_h&&Q<=360)
    {
    Q_Q[0]=K*0;
    Q_Q[1]=0;
    Q_Q[2]=0;
    }
}
void Draw(float Q_m)
{
float tt,x,y,x1,y1,x2 ,y2,x3,y3 ,x4,y4,dx,dy;
double QQ[3];
circle(240,240,3);
circle(240+L*sin(50*K)+4*cos(240*K),240+L*cos(50*K)-4*sin(240*K),3)；
moveto(240,240);
lineto(240+20* cos(240* K),240-20* sin(240*K));
lineto(260+20* cos(240* K),340-20* sin(240*K));
lineto(240,240);
moveto(240+L*sin(50*K)+4*cos(240*K),240+L*cos(50*K)-4*sin(240*K));
lineto(240+L*sin(50*K)+20*cos(240*K),240+L*cos(50*K)-20*sin(240*K)); 
lineto(255+L*sin(50*K)+20*cos(240*K),240+L*cos(50*K)-20*sin(240*K));
lineto(240+L*sin(50*K)+4* cos(240*K),240+L* cos(50*K)-4* sin(240*K)); 
for(tt=0;tt<=720;tt=tt+2)
{
Cal(tt,QQ);
x1=L*cos(tt*K)-l*cos(Q_a+QQ[0]-tt*K);
y1=l * sin(Q_a+QQ [0] -tt* K)+L* sin(tt* K);
x2=x1* cos(Q_m * K+40 * K)+y1 * sin(Q_m *K+40* K);
y2=-x1 * sin(Q_m * K+40 *K)+y1* cos(Q_m * K+40 *K);
putpixel(x2+240,240-y2,2);
dx=(QQ[1]-1)*l*sin(Q_a+QQ[0]-tt*K)-L*sin(tt*K);
dy=(QQ[1]-1)*l*cos(Q_a+QQ [0] -tt*K)+L* cos(tt* K);
x3=x1-rr* dy/sqrt(dx* dx+dy*dy);
y3 =y1+rr* dx/ sqrt(dx* dx+dy* dy);
x4=x3 * cos(Q_m* K+40* K)+y3 * sin(Q_m *K+40* K);
y4=-x3 * sin(Q_m* K+40 *K)+y3 * cos(Q_m* K+40 *K);
putpixel(x4+240,240-y4,YELLOW);
}
}
void Curvel()
{
    int t;
    float y1,y2,y3,a=0;
for(t=0;t<=360/dt;t++)
{
delay(300);
a=t*dt;
if((a>=0)&&(a<=Q_t/2))
{
y1=(2 *Q_max* pow(a,2)/pow(Q_t,2))* 10;
y2 =(4 * Q_max* (dt* K)* a/pow(Q_t,2)) * pow(l 0,4.8); 
y3=(4*Q_max* pow((dt*K)3)/pow(Q_t,2))* pow(10,8.5); 
putpixel(100+a,300-y1,1);
putpixel(100+a,300-y2,2);
putpixel(100+a,300-y3,4);
line(100+Q_t/2,300-y3,100+Q_t/2,300);
}
if((a>Q_t/2)&&(a<=Q_t))
{
y1=(Q_max-2* Q_max* pow((Q_t-a),2)/pow(Q_t,2))* 10; 
y2 =(4 * Q_max* (dt* K)* (Q_t-a)/ pow(Q_t,2)) * pow(10,4.8);
y3 =((-4)* Q_max*pow((dt*K),2)/ pow(Q_t,2)) * pow(10,8.5); 
putpixel(100+a,300-y1,1);
putpixel(100+a,300-y2,2); 
putpixel(100+a,300-y3,4);
line(100+Q_t,300-y3,100+Q_t,300)；
line(100+Q_t/2,300,100+Q_t/2,300-y3);
}
if((a>Q_t)&&(a<=Q_t+Q_s))
{
    y1=Q_max*10;
    y2=0;
    y3=0;
    putpixel(100+a,300-y1,1);
    putpixel(100+a,300-y2,2);
    putpixel(100+a,300-y3,4);
    line((100+Q_t+Q_s),300,(100+Q_t+Q_s),300-y3);
}
if((a>Q_t+Q_s)&&(a<=Q_t+Q_s+Q_h/2)) 
{
y1=(Q_max-2 *Q_max* pow((a-Q_t-Q_s),2)/pow(Q_h,2))* 10;
y2=((-4)* Q_max* (dt*K) * (a-Q_t-Q_s)/pow(Q_h,2)) * pow(10,4.8);
y3 =((-4)* Q_max* pow((dt* K)2)/pow(Q_h,2)) * pow(10,8.5); 
putpixel(100+a,300-y1,1);
putplxel(100+a,300-y2,2);
putpixel(100+a,300-y3,4);
line((100+Q_t+Q_s+Q_h/2),300,(100+Q_t+Q_s+Q_h/2),300-y3); 
line((100+Q_t+Q_s),300,(100+Q_t+Q_s),300-y3);
}
if((a>Q_t+Q_s+Q_h/2)&&(a<=Q_t+Q_s+Q_h))
{
y1=(2 *Q_max* pow((Q_h-a+Q_t+Q_s),2)/pow(Q_h,2))* 10;
y2=((-4)* Q_max*(dt*K)*(Q_h-a+Q_t+Q_s)/pow(Q_h,2))* pow(10,4.8); 
y3 =(4* Q_max*pow((dt*K),2)/pow(Q_h,2)) * pow(10,8.5);
putpixel(100+a,300-y1,1);
putpixel(100+a,300-y2,2);
putpixel(100+a,300-y3,4); 
line((100+Q_t+Q_s+Q_h),300-y3,(100+Q_t+Q_s+Q_h),300); 
line((100+Q_t+Q_s+Q_h/2),300,(100+Q_t+Q_s+Q_h/2),300-y3);
}
if((a>Q_t+Q_s+Q_h)&&(a<=360))
{
    y1=0;
    y2=0;
    y3=0;
    putpixel(100+a,300,1);
    putpixel(100+a,300,2);
    putpixel(100+a,300,4);
}
e[t]=y1;
f[t]=y2;
g[t]=y3;
}
}
main()
{
int gd=DETECT,gm;
int i,t,choice,x_1,y_1,flag=1;
double QQ1[3],aa;
FILE *fl;
if((f1=fopen("liliangliang.txt","w"))==NULL)
{
printf("liliangliang.txt cannot open!\n");
exit(0);
}
initgraph(&gd,&gm," ");
cleardevice();
for(t=0;!kbhit();t++)
{
for(;t>360;)
t-=360;
if(flag==1) 
for(L=l-r_b+70;L<l+r_b;L+=2)
{
Q_a=acos((L*L+l*l-r_b*r_b)/(2.0*L*l));
Cal(t,QQ1); 
aa=atan(l*(1-QQ1[1]-L*cos(Q_a-QQ1[0]))/(L*sin(Q_a+QQ1[0])));
/* 压力角 */ 
pr=(pow((L*L+l*l*(1+QQ1[1])*(1+QQ1[1])-2.0*L*l*(1+QQ1[1]*cos(Q_a+QQ1[0]))),3.0/2))
/*	曲	率	半  径	*/
((1+QQ1[1])*(2+QQ1[1])*L*l*cos(Q_a+QQ1[0])+QQ1[2]*L*l*sin(Q_a+QQ1[0])-L*L-l*l*pow((1+QQ1[1]),3));
if(aa<=Aa&&pr>rr)
flag=0;
break;
}
if(flag==0)
Cal(t,QQ1);
Draw(t); 
cleardevice();
 x_1=240+L*sin(50*K)-l*cos(Q_a+QQ1[0]+40*K); 
 y_1=240+L* cos(50*K)-l* sin(Q_a+QQ1[0]+40*K); 
circle(x_1,y_1,rr);
line(240+L*sin(50*K),240+L*cos(50*K),x_1,y_1);
moveto(240+L* sin(50*K),240+L* cos(50*K));
lineto(240+L* sin(50*K)+l* cos(Q_a+QQ1[0]+40* K),480+2*L*cos(50*K)-y_1);
lineto(140+L+l*cos(Q_a+QQ1[0])*2,480+2*L*cos(50*K)-y_1);
delay(1);
}
getch();
cleardevice();
llne(100,80,100,445);
line(70,300,530,300); 
line(100,80,98,90);
line(100,80,102,90);
line(520,298,530,300);
line(520,302,530,300);
setcolor(2);
outtextxy(300,150,"The analysis of the worm gear's movement"); 
printf("\n\n\n\n\n	            Q(w,a)");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tt");
Curvel();
getch();
printf(" \n\n\n\n\n\n\n\n\n\n");
for(i=0;i<=1440;i=i+20)
{
delay(1000);
printf("％d                        	%f                          %f                              %f\n",i/4,e[i],f[i],g[i]);
fprintf(fl,"％d	                           %f                               %f                              %f\n",i/4,e[i],f[i],g[i]);
}
getch();
fclose(f1);
closegraph();
}