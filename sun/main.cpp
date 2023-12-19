#include<windows.h>
#include<bits/stdc++.h>
#include<malloc.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>
#include <stdlib.h>
using namespace std;
float translate=505,translate2=940,translate3=630,translate4=610,rotateFlag=1;
float sunFlag=1,x_tran=-65,y_tran=0,angle_sun=0,one=1,two=0,three=0.001,four=0.01,five=.001,six=.01,seven=0.02,eight=.9,nine=.9,ten=.9;
float ctrans1=-75,ctrans2=-40,ctrans3=50,ctrans4=0,ctrans5=20,ctrans6=70,cloudFlag=1;
float x_btran=10,y_btran=10,x_btran1=480,y_btran1=40,angle1=135,angle2=65,birdFlag=1;
float xx=.01,yy=.5;
float m_xtran=95,m_ytran=50;
float star1=0,star2=.01,star3=.5;
void color(string s)
{
    if(s=="red")glColor3f(1.0,0.0,0.0);
    if(s=="green")glColor3f(0.0,1.0,0.0);
    if(s=="blue")glColor3f(0.0,0.0,1.0);
    if(s=="yellow")glColor3f(1.0,1.0,0.0);
    if(s=="purple")glColor3f(1.0,0.0,1.0);
    if(s=="cyan")glColor3f(0.0,1.0,1.0);
    if(s=="white")glColor3f(1.0,1.0,1.0);
    if(s=="black")glColor3f(0.0,0.0,0.0);
    if(s=="orange")glColor3f(1.0,0.5,0.0);
    if(s=="green_yellow")glColor3f(0.5,1.0,0.0);
    if(s=="light_green")glColor3f(0.5,1.0,0.5);
    if(s=="dark_green")glColor3f(0.0,0.20,0.0);
    if(s=="brown")glColor3f(0.647059,0.164706,0.164706);
}


void sky()

{
    glColor3f(0.0,xx,yy);
    glLineWidth(2.0);
	glBegin(GL_TRIANGLE_FAN) ;


    glVertex3f(-80,0,0);
        glVertex3f(-80,80,0);
        glVertex3f(80,80,0);
        glVertex3f(80,0,0);
         glVertex3f(-80,0,0);


    glEnd();
}

void bird_r()

{

    glColor3f(0.0,0.0,0.0);
    glLineWidth(2.0);
	glBegin(GL_LINE_STRIP) ;
	glVertex3f(-2,1,0);
        glVertex3f(-.5,1,0);
        glVertex3f(0,0,0);
         glEnd();


}

void bird_l()

{

    glColor3f(0.0,0.0,0.0);
    glLineWidth(2.0);
	glBegin(GL_LINE_STRIP) ;

        glVertex3f(0,0,0);
        glVertex3f(.5,1,0);
        glVertex3f(2,1,0);

         glEnd();


}

void combird()
{
    glPushMatrix();
    glTranslated(0,0,0);
    glRotated(angle1,0.5,0,0);
    bird_l();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,0,0);
    glRotated(angle2,0.5,0,0);
    bird_r();
    glPopMatrix();
}
void many_bird()
{
glPushMatrix();
    glTranslated(-90,12,0);
    combird();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-91,15,0);
    combird();
    glPopMatrix();


    glPushMatrix();
    glTranslated(-92,10,0);
    combird();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-92,17,0);
    combird();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-95,12,0);
    combird();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-95,15,0);
    combird();
    glPopMatrix();


    glPushMatrix();
    glTranslated(-97,17,0);
    combird();
    glPopMatrix();

        glPushMatrix();
    glTranslated(-97,11,0);
    combird();
    glPopMatrix();


    glPushMatrix();//nxt jhak
    glTranslated(-280,12,0);
    combird();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-280,15,0);
    combird();
    glPopMatrix();


    glPushMatrix();
    glTranslated(-283,17,0);
    combird();
    glPopMatrix();


    glPushMatrix();//reverse jhak
    glTranslated(280,12,0);
    combird();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-280,15,0);
    combird();
    glPopMatrix();


    glPushMatrix();
    glTranslated(-283,17,0);
    combird();
    glPopMatrix();


        glPushMatrix();
    glTranslated(-283,11,0);
    combird();
    glPopMatrix();





}
void bird_anim()
{

    glPushMatrix();
    glTranslated(x_btran,y_btran,0);
    many_bird();
    glPopMatrix();

    glPushMatrix();
    glTranslated(x_btran1,y_btran1,0);
    many_bird();
    glPopMatrix();
}



void ghash()

{
    color("dark_green");
    glLineWidth(1.0);
	glBegin(GL_TRIANGLE_FAN) ;


    glVertex3f(-79,-80,0);
        glVertex3f(-75,-72,0);
        glVertex3f(-77,-80,0);
        glEnd();

      glBegin(GL_TRIANGLE_FAN) ;

        glVertex3f(-77,-80,0);
        glVertex3f(-72,-68,0);
        glVertex3f(-75,-80,0);


    glEnd();

    glBegin(GL_TRIANGLE_FAN) ;

        glVertex3f(-75,-80,0);
        glVertex3f(-70,-65,0);
        glVertex3f(-73,-80,0);


    glEnd();

    glBegin(GL_TRIANGLE_FAN) ;

        glVertex3f(-73,-80,0);
        glVertex3f(-70,-74,0);
        glVertex3f(-71,-80,0);


    glEnd();
}

void comghash()

{
            glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(-4,0,0);
        ghash();
        glPopMatrix();

      glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(4,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(12,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(20,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(28,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(36,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(44,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(52,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(60,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(68,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(76,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(84,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(92,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
       glRotatef(0,0,0,0);
		glTranslatef(100,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(108,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(116,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(124,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(132,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(140,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(148,0,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(152,0,0);
        ghash();
        glPopMatrix();

}

void circle(float cx=0.0, float cy=0.0, float r=5.0)
{

    int num=50;
    float pi=2*3.1416;
    glLineWidth(1.0);

    glBegin(GL_TRIANGLE_FAN);
    for(int i=0;i<=num;i++)
    {
        float theta = pi*float(i)/float(num);
        float x= r*cosf(theta);
        float y= r*sinf(theta);


        glVertex2d(x+cx,y+cy);
    }
    glEnd();

}

void circle2(float cx=0.0, float cy=0.0, float r=1.0)
{

    int num=50;
    float pi=2*3.1416;
    glLineWidth(0.01);

    glBegin(GL_TRIANGLE_FAN);
    for(int i=0;i<=num;i++)
    {
        float theta = pi*float(i)/float(num);
        float x= r*cosf(theta);
        float y= r*sinf(theta);


        glVertex2d(x+cx,y+cy);
    }
    glEnd();

}




void circle_half(float cx=0.0, float cy=0.0, float r=2.0)
{
    int num=50;
    float pi=3.1416;
    glLineWidth(10.0);

    glBegin(GL_TRIANGLE_FAN);
    for(int i=0;i<=num;i++)
    {
        float theta = pi*float(i)/float(num);
        float x= r*cosf(theta);
        float y= r*sinf(theta);
         glColor3f(0.0,0.0,0.0);

        glVertex2d(x+cx,y+cy);
    }
    glEnd();
}


void boat()
{

    glColor3f(0.1,0.2,0.3);
    glLineWidth(1.0);

     glBegin(GL_TRIANGLE_FAN);
    glVertex3f(-3.5,0,0);
    glVertex3f(3,0,0);
    glVertex3f(3,-4.5,0);
    glVertex3f(-3.5,-4.5,0);

   glEnd();
}

void man()
{
 glColor3f(0.0,0.0,0.0);
   glLineWidth(2.0);
   glBegin(GL_LINES);
   glVertex3f(0,5,0);
   glVertex3f(1,.5,0);
   glEnd();
   glBegin(GL_LINES);
  glVertex3f(.25,3,0);
  glVertex3f(-.70,2,0);
  glVertex3f(-.70,2,0);
  glVertex3f(1,-4,0);
  glVertex3f(-.70,2,0);
  glVertex3f(-1.25,4.5,0);

  glEnd();

  glBegin(GL_TRIANGLE_FAN);
  glVertex3f(1,-4,0);
  glVertex3f(0,-6,0);
  glVertex3f(2,-6,0);
  glVertex3f(1,-4,0);

  glEnd();



}
void comman()
{


  glPushMatrix();
  glTranslatef(0,-5,0);
  glScaled(.15,.15,.15);
    circle();
    glPopMatrix();

  glPushMatrix();
glTranslatef(0,-10,0);
     man();
    glPopMatrix();




}
void boat2(){

        glPushMatrix();
    glTranslatef(0,-24.5,0);
    boat();
    glPopMatrix();
    glColor3f(0.0,0.0,0.0);


    glPushMatrix();
    glTranslatef(-3.5,-27.5,0);
    glScaled(0.10,0.55,0);
    circle();
    glPopMatrix();

glColor3f(0.5,0.5,0.5);
    glPushMatrix();
    glRotated(180,0,0,0);
    glTranslatef(0,29,0);
    glScaled(4,1.5,3);
    circle_half();
    glPopMatrix();



}

void comboat()
{
     glPushMatrix();
    glTranslatef(10,-35,0);
    glScaled(2,1,1);
    boat2();
    glPopMatrix();

   glPushMatrix();
    glTranslatef(20,-55,0);

    comman();
    glPopMatrix();

}



void cloud()
{

    color("dark_green");

    circle(-8,1,6);
    circle(-5,8,6);
    circle(4,10,6);
    circle(9,4,7);
    circle(9,-2,6);
    circle(2,1,6);
    circle(-4,-5,6);
}
void cloud2()
{
    circle(-8,1,6);
    circle(-5,8,6);
    circle(4,10,6);
    circle(9,4,7);
    circle(9,-2,6);
    circle(2,1,6);
    circle(-4,-5,6);
}


void comcloud()
{
    glPushMatrix();
    glTranslatef(-52,9,0);
    glScaled(.5,.5,.5);
    cloud();
    glPopMatrix();
}


void comcloud2()
{   glColor3f(eight,nine,ten);
    glPushMatrix();

		glTranslatef( ctrans1,30,0);
		glScaled(.5,.5,.5);
        cloud2();
        glPopMatrix();

        glPushMatrix();
		glTranslatef( ctrans2,60,0);
		glScaled(.5,.5,.5);
        cloud2();
        glPopMatrix();

         glPushMatrix();
		glTranslatef( ctrans3,30,0);
		glScaled(.5,.5,.5);
        cloud2();
        glPopMatrix();

        glPushMatrix();
		glTranslatef( ctrans4,60,0);
		glScaled(.5,.5,.5);
        cloud2();
        glPopMatrix();



        glPushMatrix();
		glTranslatef( ctrans5,50,0);
		glScaled(.5,.5,.5);
        cloud2();
        glPopMatrix();

        glPushMatrix();
		glTranslatef( ctrans6,70,0);
		glScaled(.5,.5,.5);
        cloud2();
        glPopMatrix();

}


void tree()
{
    glLineWidth(10.0);
    glBegin(GL_LINE_STRIP);
    glVertex2d(-10,20);
    glVertex2d(-6,15);
    glVertex2d(-5,12);
    glVertex2d(-5,3);
    glVertex2d(-6,-4);
    glVertex2d(-7,-8);
    glVertex2d(-8,-12);
    glVertex2d(-9,-16);
    glVertex2d(-11,-20);
    glVertex2d(-14,-25);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex2d(-5,20);
    glVertex2d(-2,17);
    glVertex2d(1,20);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex2d(3,20);
    glVertex2d(1,15);
    glVertex2d(1,2);
    glVertex2d(3,-7);
    glVertex2d(4,-15);
    glVertex2d(5,-20);
    glVertex2d(7,-25);
    glEnd();
}

void comtree()
{

  comcloud();
color("brown");

    glPushMatrix();
    glScaled(.25,.25,.15);
    glTranslated(-200,3,0);
    tree();
    glPopMatrix();


}


void house()
{
glColor3f(0.0,0.10,0.0);
glBegin(GL_TRIANGLE_FAN) ;  //base1
        glVertex3f(-8.5,2,0);
        glVertex3f(-8.5,1.5,0);
        glVertex3f(-3,1.5,0);
        glVertex3f(-3,2,0);
        glVertex3f(-8.5,2,0);
        glEnd();

glColor3f(0.0,0.10,0.0);
glBegin(GL_TRIANGLE_FAN) ;  //base2
        glVertex3f(-3,2,0);
        glVertex3f(-3,1.5,0);
        glVertex3f(-1,2.5,0);
        glVertex3f(-1,3,0);
        glVertex3f(-3,2,0);

        glEnd();

   glColor3f(0.0,0.20,0.0);
        glBegin(GL_TRIANGLE_FAN);  //chal2
        glVertex3f(-9,4,0);
        glVertex3f(-3,4,0);
        glVertex3f(-2,6,0);
        glVertex3f(-1.5,4.5,0);
        glVertex3f(-1,4.5,0);
        glVertex3f(-2,6,0);
        glVertex3f(-9.15,6,0);
        glVertex3f(-9,4,0);


    glEnd();

glColor3f(0.0,0.40,0.0);
     glBegin(GL_TRIANGLE_FAN);

        glVertex3f(-3,2,0);   //2nd ghorer 2nd side
        glVertex3f(-3,4,0);
        glVertex3f(-2,5.5,0);
        glVertex3f(-1.5,4.5,0);
        glVertex3f(-1.5,2.6,0);
        glVertex3f(-3,2,0);


    glEnd();
    glBegin(GL_TRIANGLE_FAN);

        glVertex3f(-9,4,0);   //2nd ghorer 1st side
        glVertex3f(-3,4,0);
        glVertex3f(-3,2,0);
        glVertex3f(-9,2,0);
        glVertex3f(-9,4,0);

    glEnd();

glColor3f(0.5,0.0,0.0);
        glBegin(GL_TRIANGLE_FAN);   //1st window
        glVertex3f(-8,2.5,0);
        glVertex3f(-8,3.5,0);
        glVertex3f(-9,3.5,0);
        glVertex3f(-9,2.5,0);
        glVertex3f(-8,2.5,0);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);  //2nd window
        glVertex3f(-4,2.5,0);
        glVertex3f(-4,3.5,0);
        glVertex3f(-5,3.5,0);
        glVertex3f(-5,2.5,0);
        glVertex3f(-4,2.5,0);

    glEnd();

glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLE_FAN);   //door
        glVertex3f(-6,2,0);
        glVertex3f(-6,3.5,0);
        glVertex3f(-7,3.5,0);
        glVertex3f(-7,2,0);
        glVertex3f(-6,2,0);

    glEnd(); //end 2nd house




   glColor3f(0.2,0.2,0.2);
    glBegin(GL_TRIANGLE_FAN);  //chal

        glVertex3f(-20,5,0);
        glVertex3f(-22,5,0);
        glVertex3f(-20,7,0);
        glVertex3f(-10.5,7,0);
        glVertex3f(-8,5,0);
        glVertex3f(-9,5,0);

    glEnd();

glColor3f(0.2,0.2,0.2);
    glLineWidth(2.0);
	glBegin(GL_TRIANGLE_FAN) ;   //base1
        glVertex3f(-20.5,0,0);
        glVertex3f(-12,0,0);
        glVertex3f(-12,1,0);
        glVertex3f(-20.5,1,0);
        glVertex3f(-20.5,0,0);
        glEnd();

    glBegin(GL_TRIANGLE_FAN);    //base2
        glVertex3f(-12,1,0);
        glVertex3f(-8.5,2.5,0);
        glVertex3f(-8.5,1.5,0);
        glVertex3f(-12,0,0);

    glEnd();

    glColor3f(0.9,0.5,0.2);
    glBegin(GL_TRIANGLE_FAN);
        glVertex3f(-20,1,0);     //1st ghor er rectangle
        glVertex3f(-20,5,0);
        glVertex3f(-12,5,0);
        glVertex3f(-12,1,0);
        glVertex3f(-20,1,0);

    glEnd();


    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex3f(-12,1,0);
        glVertex3f(-12,5,0);
    glEnd();

     glColor3f(0.9,0.5,0.2);
    glBegin(GL_TRIANGLE_FAN);   //1st ghor side er rectangle

        glVertex3f(-12,5,0);
        glVertex3f(-10.5,6.8,0);
        glVertex3f(-9,5,0);
        glVertex3f(-9,2.15,0);
        glVertex3f(-12,1,0);
        glVertex3f(-12,5,0);

    glEnd();




glColor3f(0.0,0.10,0.0);
    glBegin(GL_TRIANGLE_FAN);   //door
        glVertex3f(-16.5,1,0);
        glVertex3f(-16.5,3,0);
        glVertex3f(-15.5,3,0);
        glVertex3f(-15.5,1,0);

glEnd();
glColor3f(0.5,0.0,0.0);
glBegin(GL_TRIANGLE_FAN);      //1st window
        glVertex3f(-19,2.5,0);
        glVertex3f(-19,4,0);
        glVertex3f(-17.5,4,0);
        glVertex3f(-17.5,2.5,0);
        glVertex3f(-19,2.5,0);


glEnd();

glColor3f(0.5,0.0,0.0);
glBegin(GL_TRIANGLE_FAN);    //2nd window
        glVertex3f(-14,2.5,0);
        glVertex3f(-14,4,0);
        glVertex3f(-12.5,4,0);
        glVertex3f(-12.5,2.5,0);
        glVertex3f(-14,2.5,0);


glEnd(); //end first house


}


void comhouse()
{
        glPushMatrix();
        glRotatef(0,1,0,0);
		glTranslatef(-1,-1,0);
		glScalef(2.0f, 2.50f, 2.0f);
        house();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,1,0,0);
		glTranslatef(17,3,0);
		glScalef(1.0f, 1.50f, 1.0f);
        house();
        glPopMatrix();

}

void road()

{
   glColor3f(0.0,0.0,0.0);
    glLineWidth(2.0);
	glBegin(GL_LINES) ;
	glVertex3f(-.5,5,0);
        glVertex3f(.5,5,0);

        glVertex3f(-1,4,0);
        glVertex3f(1,4,0);

        glVertex3f(-1.5,3,0);
        glVertex3f(1.5,3,0);

        glVertex3f(-2,2,0);
        glVertex3f(2,2,0);

        glVertex3f(-2.5,1,0);
        glVertex3f(2.5,1,0);

        glEnd();

}

void comroad()
{


    glPushMatrix();
    glTranslated(-33.5,-6.5,0);
    road();
    glPopMatrix();
}


void back_tree()
{


        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-78.5,0,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-75,0,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-75,2,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();


        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-72,0,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-69,0,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-67.5,2,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-66,0,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-60.5,2,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-63,0,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-60,0,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-57,0,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-54,0,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-51,0,0);
        circle_half();
        glPopMatrix();

         glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-48,0,0);
        circle_half();
        glPopMatrix();


 glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-45,0,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(-44,0,0);
        circle_half();
        glPopMatrix();


        glPushMatrix();  //2nd step
		glTranslatef(18,7,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(23,8.5,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(22,7,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(26,7,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(31,8.5,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(30,7,0);
        circle_half();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(34,7,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(40,8.5,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(38,7,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(42,7,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(47,8.5,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(46,7,0);
        circle_half();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(48,7,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(54,8.5,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(52,7,0);
        circle_half();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(56,7,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(62,8.5,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(60,7,0);
        circle_half();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(64,7,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(70,8.5,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(68,7,0);
        circle_half();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(72,7,0);
        circle_half();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(77,8.5,0);
		glScaled(.15,.15,.15);
        cloud();
        glPopMatrix();


        glPushMatrix();
		glTranslatef(76,7,0);
        circle_half();
        glPopMatrix();


        glPushMatrix();
        glRotatef(0,0,0,0);
		glTranslatef(80,7,0);
        circle_half();
        glPopMatrix();


        glPushMatrix();//gaser niche
        glScaled(.25,.25,.25);
		glTranslatef(-128,57,0);
        ghash();
        glPopMatrix();
        glPushMatrix();
        glScaled(.25,.25,.25);
		glTranslatef(-132,57,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.25,.25,.25);
		glTranslatef(-132,63,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.25,.25,.25);
		glTranslatef(-122,57,0);
        ghash();
        glPopMatrix();


        //river side tree
        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-150,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-142,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-134,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-126,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-118,-33,0);
        ghash();
        glPopMatrix();

                        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-110,-33,0);
        ghash();
        glPopMatrix();

                        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-102,-33,0);
        ghash();
        glPopMatrix();

                        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-94,-33,0);
        ghash();
        glPopMatrix();

                        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-86,-33,0);
        ghash();
        glPopMatrix();

                        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-78,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-70,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-62,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-54,-33,0);
        ghash();
        glPopMatrix();

         glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-46,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-38,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-30,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-22,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-14,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(-8,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(0,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(8,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(16,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(24,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(32,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(40,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(48,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(56,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(64,-33,0);
        ghash();
        glPopMatrix();

                glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(72,-33,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(105,-5,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(100,-8,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(95,-11,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(90,-14,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(87,-18,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(85,-21,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(82,-26,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(79,-30,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(76,-34,0);
        ghash();
        glPopMatrix();

   glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(110,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(118,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(126,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(134,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(142,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(150,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(158,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(164,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(172,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(180,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(188,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(196,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(204,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(212,-5,0);
        ghash();
        glPopMatrix();
           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(220,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(228,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(234,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(242,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(250,-5,0);
        ghash();
        glPopMatrix();
           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(258,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(266,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(272,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(280,-5,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(288,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(296,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(308,-5,0);
        ghash();
        glPopMatrix();

           glPushMatrix();
        glScaled(.35,.35,.35);
		glTranslatef(316,-5,0);
        ghash();
        glPopMatrix();

        glPushMatrix();
		glTranslatef(25,53,0);
		glScaled(.5,.5,.5);
        ghash();
        glPopMatrix();


}
void river()

{
    glColor3f(five,six,seven);
    glLineWidth(1.0);
	glBegin(GL_TRIANGLE_FAN) ;

	glVertex2d(-80,-40);
    glVertex2d(0,-40);
    glVertex2d(0,-80);
    glVertex2d(-80,-80);
    glVertex2d(-80,-40);
    glEnd();

    glBegin(GL_TRIANGLE_FAN) ;

	glVertex2d(0,-40);
    glVertex2d(10,-30);
    glVertex2d(80,-30);

	glVertex2d(80,-80);
    glVertex2d(0,-80);
    glVertex2d(0,-40);




glEnd();

}

void street()
{

    glColor3f(three,four,0.0);
    glLineWidth(1.0);
	glBegin(GL_TRIANGLE_FAN) ;
	glVertex2d(-80,0);
	glVertex2d(-80,-40);
	glVertex2d(0,-40);
    glVertex2d(0,0);
	glVertex2d(-80,0);
	glEnd();

	glBegin(GL_TRIANGLE_FAN) ;
	glVertex2d(0,0);
	glVertex2d(10,0);
	glVertex2d(10,-30);
	glVertex2d(0,-40);
	glVertex2d(0,0);
	glEnd();


	glBegin(GL_TRIANGLE_FAN) ;
	glVertex2d(10,0);
	glVertex2d(10,-30);
	glVertex2d(80,-30);
	glVertex2d(80,0);
	glVertex2d(10,0);

	glEnd();


	glBegin(GL_TRIANGLE_FAN) ;
	glVertex2d(-40,0);
	glVertex2d(12,7);
	glVertex2d(80,7);
	glVertex2d(80,0);
	glVertex2d(-40,0);

	glEnd();

}

void sun()
{

       glPushMatrix(); //sun animation
       glColor3f(one,two,three);
       //glTranslatef(x_tran,y_tran,0);
       glRotated(angle_sun,0,0,1);
       glTranslated(-60,0,0);
       circle(0,0,8);
       glPopMatrix();
}

void moon()
{

       glPushMatrix();
       glColor3f(.9,.9,.9);
       glTranslated(m_xtran,m_ytran,0);
       circle(0,0,7);
       glPopMatrix();
}

void star()
{
    glPushMatrix();
       glColor3f(star1,star2,star3);
       glTranslated(60,40,0);
      glScaled(.7,.7,.7);
       circle2();

       glPopMatrix();

      /* glPushMatrix();
      glColor3f(star1,star2,star3);
       glTranslated(40,40,0);
       circle(0,0,.9);
       glPopMatrix();*/

glPushMatrix();
      glColor3f(star1,star2,star3);
       glTranslated(70,50,0);
       glScaled(.7,.7,.7);
       circle2();

       glPopMatrix();

   /*    glPushMatrix();
      glColor3f(star1,star2,star3);
       glTranslated(-60,45,0);
       circle(0,0,.9);
       glPopMatrix();*/

       glPushMatrix();
      glColor3f(star1,star2,star3);
       glTranslated(-46,35,0);
       glScaled(.7,.7,.7);
       circle2();

       glPopMatrix();

       glPushMatrix();
       glColor3f(star1,star2,star3);
       glTranslated(0,65,0);
      glScaled(.7,.7,.7);
       circle2();

       glPopMatrix();

       /*glPushMatrix();
       glColor3f(star1,star2,star3);
       glTranslated(30,70,0);
       circle(0,0,.9);
       glPopMatrix();*/

       glPushMatrix();
       glColor3f(star1,star2,star3);
       glTranslated(10,30,0);
        glScaled(.7,.7,.7);
       circle2();

       glPopMatrix();

       glPushMatrix();
       glColor3f(star1,star2,star3);
       glTranslated(-10,30,0);
      glScaled(.7,.7,.7);
       circle2();

       glPopMatrix();

       glPushMatrix();
      glColor3f(star1,star2,star3);
       glTranslated(-30,60,0);
       glScaled(.7,.7,.7);
       circle2();

       glPopMatrix();

       glPushMatrix();
      glColor3f(star1,star2,star3);

       glTranslated(-76,70,0);
      glScaled(.7,.7,.7);
       circle2();

       glPopMatrix();

}

void comstar()
{

    glPushMatrix();
    glTranslatef(0,0,0);
    star();
	glPopMatrix();
}
void boat_anim()

{
    glPushMatrix();//boat animation
    glRotatef(0,1,0,0);
    glTranslatef(translate,0,0);
    comboat();
	glPopMatrix();

	glPushMatrix();
    glRotatef(0,1,0,0);
    glTranslatef(translate2,-5,0);
    comboat();
	glPopMatrix();

	glPushMatrix();
    glRotatef(0,1,0,0);
    glTranslatef(translate3,-6,0);
    comboat();
	glPopMatrix();

	glPushMatrix();
    glRotatef(0,1,0,0);
    glTranslatef(translate4,-1,0);
    comboat();
	glPopMatrix();


}





void display(){
    glClear( GL_COLOR_BUFFER_BIT) ;
	glMatrixMode(GL_MODELVIEW) ;
	glLoadIdentity();
	cout<<angle_sun<<endl;
	    sky();

     comstar();
	   ghash();
	    comghash();
        sun();
        moon();
        street();
        back_tree();
        comhouse();
        comroad();
         river();
        comcloud2();//cloud animation
        comtree();
        bird_anim();
	    boat_anim();

    glutSwapBuffers() ;
}

void anim()
{

    if( rotateFlag == 1 ){

		translate  =translate -.3;



		if( translate <=-110)
			translate=80000;

		translate2  =translate2 -.4;
		if( translate2 <=-110)
			translate2=40000;

			translate3  =translate3 -.5;
		if( translate3 <=-110)
			translate3=40000;

			translate4  =translate4 -.4;
		if( translate4 <=-110)
			translate4=40000;



    }

    if(sunFlag == 1)
    {



            angle_sun-=.05;
            if(angle_sun<-360)
                {
                    two=0;
                    xx=.1;
                    star2=xx;
                    yy=.5;
                    star3=yy;
                    three=.001;
                    four=.01;
                    five=.001;
                    six=.01;
                    seven=0;
                    angle_sun=0;
                }
            if(angle_sun<-10 && angle_sun>-120)
                {
                    two+=.009;

                    if(two>1)two=1;
                    if(xx>.001){
                        xx+=.001;
                        star2=xx;
                    }
                    if(xx>.6)
                    {xx=.6;
                     star2=xx;
                     }

                    if(yy>.01){
                            yy+=.01;
                    star3=yy;
                    }
                    if(yy>1)
                    {yy=1;
                    star3=yy;
                    }
                    if(three>.0001)three+=.001;
                    if(three>.5)three=.5;
                    if(five>.0001)five+=.001;
                    if(five>.5)five=.5;
                    if(four>.001)four+=.001;
                    if(four>.6)four=.6;
                    if(six>.001)six+=.005;
                    if(six>.9)six=.9;
                    if(seven>.001)seven+=.009;
                    if(seven>1)seven=1;
                }
            if(angle_sun<-115)

                    two-=.001;


                if(angle_sun<-152)
                {

                    three-=.001;//field
                    four-=.001;//field
                    xx-=.008;//sky
                    star2=xx;
                    yy-=.001;//sky
                    star3=yy;
                    five-=.001;//river
                    six-=.001;//river
                    seven-=.01;//river

                    eight-=.002;//cloud
                        nine-=.002;//cloud
                        ten-=.002;//cloud
                    if(xx<0)
                    {xx=0;
                    star2=xx;
                    }
                    if(yy<0)
                    {
                        yy=0;
                        star3=yy;
                        }
                    if(three<.001)three=.001;
                    if(four<.01)four=.01;

                    if(five<.001)three=.001;
                    if(six<.01)four=.01;

                    if(seven<.001)
                        seven=.001;

                        if(eight<.2)eight=.2;
                    if(nine<.2)nine=.2;

                    if(ten<.2)ten=.2;


                }
                if(angle_sun<-155)
                        m_xtran-=.01;

                        if(angle_sun<-185)
                        angle_sun+=0001;

                         if(angle_sun<-184){
                               star1=1;
                               star2=1;
                               star3=1;
                         }





        }

        if(cloudFlag == 1)
    {
        ctrans1=ctrans1+.01;
        if(ctrans1>88)
            ctrans1=-88;
        ctrans2=ctrans2+.01;
        if(ctrans2>88)
            ctrans2=-88;
        ctrans3=ctrans3+.01;
        if(ctrans3>88)
            ctrans3=-88;
        ctrans4=ctrans4+.01;
        if(ctrans4>88)
            ctrans4=-88;
        ctrans5=ctrans5+.01;
        if(ctrans5>88)
            ctrans5=-88;
        ctrans6=ctrans6+.01;
        if(ctrans6>88)
            ctrans6=-88;




        }

         if(birdFlag == 1)
    {
         angle1=angle1+.5;
        angle2=angle2-.5;
        if(angle1==160)
            angle1=135;
        if(angle2==20)
            angle2=65;

         x_btran=x_btran+.4;
                  x_btran1=x_btran1-.4;


        }


    glutPostRedisplay();
}

void init(){

	glClearColor( 1.0 , 1.0 , 1.0 , 1.0 );  //Setting Background-RGBA
	glMatrixMode( GL_PROJECTION) ;
	glLoadIdentity() ;
	glOrtho( -80.0 , 80.0 , -80.0 , 80.0 , -1.0 , 1.0) ;


}


void keyboardHandler(unsigned char key, int x, int y)
{

switch (key)
	{
		case 'r':

			if(rotateFlag == 0)
                 rotateFlag = 1;
			else rotateFlag = 0;

			break ;

        case 's':

			if(sunFlag == 0)
                 sunFlag = 1;
			else sunFlag = 0;

			break ;

			case 'c':

			if(cloudFlag == 0)
                 cloudFlag = 1;
			else cloudFlag = 0;

			break ;

			case 'b':

			if(birdFlag == 0)
                 birdFlag = 1;
			else birdFlag = 0;

			break ;


			case 27:
			 exit(0);

}
}


int main()
{

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); //display mode

	glutInitWindowSize(700,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("SUN AND MOON") ;

	init() ;
	glutDisplayFunc(display) ;
	glutKeyboardFunc(keyboardHandler);
	glutIdleFunc(anim) ;

	glutMainLoop() ;
	return 0;

}

