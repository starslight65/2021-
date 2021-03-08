
#include <GL/glut.h>


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_TRIANGLES);

                glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);
                glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);
                glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);

    glEnd();
    glColor3f(1,1,0);
    glutSolidCube(0.5);

    glutSwapBuffers();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///設定GLUT初始化

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///顯示模式

    glutCreateWindow("統神 面臨財務危機 被迫兼差打工 辛酸畫面再流出");///開GLUT視窗


    glutDisplayFunc(display);///顯示函式

    glutMainLoop();///GLUT主要迴圈
}
