#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
    double A,A0,B,B0,C,a,l,r0,Rr,v,w;
    double ic,ic1,ic2,ic3,ic4,cop,sip,phi,gam,bel,del=5.0,q,t;                   /*定义变量*/
    double e=10.0,ro=40.0,rt=10.0,h=20.0,phi1=75.0,phis=10.0,phi_1=75.0,phi_s=200.0;
/*各字母含义：e偏距，基圆半径ro,滚子半径rt,行程h,推程运动角phi1,远休止角phis,回程运动角phi_1,近休止角phi_s*/
    double s,alp[73],x[73],y[73],xr[73],yr[73],x1,y1;           
    int i;       
	/*分别代表从动件位移，压力角，理论轮廓曲线点的位置x,y，x，y对运动角的微分，实际轮廓曲线的位置x,y*/
    // 理论轮廓上的点坐标x，y；工作轮廓上的点坐标x1，y1；微分dx，dy；
    // 角位移A；推杆的初始位置角A0；推杆相对凸轮转过的角度B；理论轮廓上某点法线与x轴夹角C；
    // 凸轮轴心到推杆轴心的距离a；推杆长度l；基圆半径r0；滚子半径Rr；
    gam=phi1+phis;
	bel=phi1+phis+phi_1;
	ic=(int)(360.0/del);
	ic1=(int)(phi1/del);
	ic2=(int)(gam/del);
	ic3=(int)((phi1+phis+phi_1/2.0)/del);
	ic4=(int)(bel/del);
	so=sqrt(ro*ro-e*e);                                                                   
	printf("\n No  DETA     理论轮廓        曲线          实际轮廓         凸轮曲线       压力角   \n");      
   /*在屏幕上输出文件头*/
	printf("                deg         x/mm        y/mm           X/mm              Y/mm                 rad\n");
    for(i=0;i<=ic;i++)                                             /*每隔五度建立循环*/
	{
		// phi=i*del*PI/180.0;                                        /*将角度化为幅度*/
        // cop=cos(phi);
		// sip=sin(phi);
		if(i<=ic1)                                                /*推程运动判断*/
		{
			// s=h/2.0*(1.0-cos(180.0*phi/phi1));
            s=h/2.0*(1.0-cos(PI*B/B0));
			// s1=h*PI*sin(180.0*phi/phi1)/2.0/phi1;                 
            v=PI*h*w*sin(PI*B/B0)/(2*B0);
            x= a*sin(B)-l*sin(B+A+A0);
            y=a*cos(B)-l*cos(B+A+A0);        
		    // x1=-(s+so)*sip+s1*cop-e*cop;                          
		    // y1=(s+so)*cop+s1*sip-e*sip;
		}
		else if(i<=ic2)                                             /*远休止角*/
		{
			s=h;
			s1=0;
		    x1=-(s+so)*sip-e*cop;
		    y1=(so+s)*cop-e*sip;
		}
		else if(i<=ic3)                                             /*回程等加速运动判断*/
		{
			s=h-2.0*h*(phi-gam)*(phi-gam)/phi_1/phi_1;
			s1=-4.0*h*(phi-gam)/phi_1/phi_1;
		    x1=s1*cop-(s+so)*sip-e*cop;
		    y1=s1*sip+(so+s)*cop-e*sip;
		}
		else if(i<=ic4)                                             /*回程等减速运动判断*/
		{
			s=2.0*h*(bel-phi)*(bel-phi)/phi_1/phi_1;
			s1=-4.0*h*(bel-phi)/phi_1/phi_1;
		    x1=s1*cop-(so+s)*sip-e*cop;
		    y1=s1*sip+(so+s)*cop-e*sip;
		}
		else                                                     /*近休止角*/
		{
			s=0;    
			s1=0;
		    x1=-(s+so)*sip-e*cop;
		    y1=so*cop-e*sip;
		}
        t=fabs(s1-e);
		alp[i]=atan2(t,(s+so));                                     /*计算压力角*/
		q=rt/sqrt(x1*x1+y1*y1);
        x[i]=(s+so)*cop-e*sip;                                    /*理论轮廓曲线位置*/
		y[i]=(s+so)*sip+e*cop;
		xr[i]=x[i]-q*y1;                                         /*实际轮廓曲线位置*/
		yr[i]=y[i]+q*x1;
		phi=i*del;
		printf("\n%2d%12.3f%12.3f%12.3f%12.3f%12.3f%12.3f",i+1,phi,x[i],y[i],xr[i],yr[i],alp[i]);
    }
    return  0;
}