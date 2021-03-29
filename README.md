# 2021-電腦圖學

2021/03/22
============

#include <stdio.h>

#include <GL/glut.h>

float vx[2000],vy[2000];

int N=0;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glBegin(GL_LINE_LOOP);
    
    for(int i=0;i<N;i++)
    {
        glVertex2f(vx[i],vy[i]);
    }
    
    glEnd();
    
    glutSwapBuffers();
    
}
void mouse(int buttin , int state, int x, int y)
{

}
void motion(int x,int y)
{
    printf("%d %d\n",x,y);
    
    vx[N] = (x-150)/150.0;
    
    vy[N] = -(y-150)/150.0;
    
    N++;
    
    display();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///設定GLUT初始化
    
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///顯示模式
    
    glutCreateWindow("統神 面臨財務危機 被迫兼差打工 辛酸畫面再流出");///開GLUT視窗
    
    glutDisplayFunc(display);///顯示函式
    
    glutMouseFunc(mouse);
    
    glutMotionFunc(motion);
    
    glutMainLoop();///GLUT主要迴圈
}

2021/03/29
============

#include <stdio.h>

#include <GL/glut.h>

float angle=0;

int N=0;

void hand()
{
    glPushMatrix();
        glScalef(0.5,0.1,0.1);
        glutSolidCube(1);
    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(-0.25,0,0);
        glRotatef(angle,0,0,1);
        glTranslatef(-0.25,0,0);
        hand();
        glPushMatrix();
            glTranslatef(-0.25,0,0);
            glRotatef(angle,0,0,1);
            glTranslatef(-0.25,0,0);
            hand();
         glPopMatrix();
        ///glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(+0.5,0,0);
        glRotatef(-angle,0,0,1);
        glTranslatef(+0.5,0,0);
        hand();
        glPushMatrix();
            glTranslatef(+0.25,0,0);
            glRotatef(-angle,0,0,1);
            glTranslatef(+0.25,0,0);
            hand();
         glPopMatrix();
        ///glutSolidCube(1);
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///設定GLUT初始化

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///顯示模式

    glutCreateWindow("統神 面臨財務危機 被迫兼差打工 辛酸畫面再流出");///開GLUT視窗

    glutIdleFunc(display);

    glutDisplayFunc(display);///顯示函式


    glutMainLoop();///GLUT主要迴圈
}


