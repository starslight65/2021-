
#include <GL/glut..h>


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSoildTeapot(0.3);

    glutSwapBuffers();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);//設定GLUT初始化

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);//顯示模式

    glutCreateWindow("08160634李昀洋");//開GLUT視窗


    glutDisplayFunc(display);//顯示函式

    glutMainLoop();//GLUT主要迴圈
}
