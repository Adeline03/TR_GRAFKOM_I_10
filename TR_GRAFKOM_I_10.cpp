#include <windows.h>
#include <stdlib.h>
#include <gl/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("TR_GRAFKOM_Palazzo Versace Dubai");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}


void tampil(void)
{
    if(is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    glPushMatrix();

    //1b
    glBegin(GL_QUADS);
    glColor3ub(193, 167, 140);
    glVertex3f(-14.0, 0.0, -18.0);
    glVertex3f(14.0, 0.0, -18.0);
    glVertex3f(14.0, 6.0, -18.0);
    glVertex3f(-14.0, 6.0, -18.0);
    glEnd();
    //2b
    glBegin(GL_QUADS);
    glVertex3f(14.0, 0.0, -18.0);
    glVertex3f(14.0, 10.0, -18.0);
    glVertex3f(14.0, 10.0, -7.0);
    glVertex3f(14.0, 0.0, -7.0);
    glEnd();
    //3b
    glBegin(GL_QUADS);
    glVertex3f(14.0, 0.0, -7.0);
    glVertex3f(29.0, 0.0, -9.0);
    glVertex3f(29.0, 10.0, -9.0);
    glVertex3f(14.0, 10.0, -7.0);
    glEnd();
    //4b
    glBegin(GL_QUADS);
    glVertex3f(29.0, 0.0, -9.0);
    glVertex3f(32.0, 0.0, 3.0);
    glVertex3f(32.0, 10.0, 3.0);
    glVertex3f(29.0, 10.0, -9.0);
    glEnd();
    //5b
    glBegin(GL_QUADS);
    glVertex3f(32.0, 0.0, 3.0);
    glVertex3f(24.0, 0.0, 4.0);
    glVertex3f(24.0, 10.0, 4.0);
    glVertex3f(32.0, 10.0, 3.0);
    glEnd();
    //6b
    glBegin(GL_QUADS);
    glVertex3f(24.0, 0.0, 4.0);
    glVertex3f(28.0, 0.0, 26.0);
    glVertex3f(28.0, 10.0, 26.0);
    glVertex3f(24.0, 10.0, 4.0);
    glEnd();
    //7b
    glBegin(GL_QUADS);
    glVertex3f(28.0, 0.0, 26.0);
    glVertex3f(16.0, 0.0, 28.0);
    glVertex3f(16.0, 10.0, 28.0);
    glVertex3f(28.0, 10.0, 26.0);
    glEnd();
    //8b
    glBegin(GL_QUADS);
    glVertex3f(16.0, 0.0, 28.0);
    glVertex3f(10.0, 0.0, -6.0);
    glVertex3f(10.0, 10.0, -6.0);
    glVertex3f(16.0, 10.0, 28.0);
    glEnd();
    //9b
    glBegin(GL_QUADS);
    glVertex3f(10.0, 0.0, -6.0);
    glVertex3f(-10.0, 0.0, -6.0);
    glVertex3f(-10.0, 10.0, -6.0);
    glVertex3f(10.0, 10.0, -6.0);
    glEnd();
    //10b
    glBegin(GL_QUADS);
    glVertex3f(-14.0, 0.0, -18.0);
    glVertex3f(-14.0, 10.0, -18.0);
    glVertex3f(-14.0, 10.0, -7.0);
    glVertex3f(-14.0, 0.0, -7.0);
    glEnd();
    //11b
    glBegin(GL_QUADS);
    glVertex3f(-14.0, 0.0, -7.0);
    glVertex3f(-29.0, 0.0, -9.0);
    glVertex3f(-29.0, 10.0, -9.0);
    glVertex3f(-14.0, 10.0, -7.0);
    glEnd();
    //12b
    glBegin(GL_QUADS);
    glVertex3f(-29.0, 0.0, -9.0);
    glVertex3f(-32.0, 0.0, 3.0);
    glVertex3f(-32.0, 10.0, 3.0);
    glVertex3f(-29.0, 10.0, -9.0);
    glEnd();
    //13b
    glBegin(GL_QUADS);
    glVertex3f(-32.0, 0.0, 3.0);
    glVertex3f(-24.0, 0.0, 4.0);
    glVertex3f(-24.0, 10.0, 4.0);
    glVertex3f(-32.0, 10.0, 3.0);
    glEnd();
    //14b
    glBegin(GL_QUADS);
    glVertex3f(-24.0, 0.0, 4.0);
    glVertex3f(-28.0, 0.0, 26.0);
    glVertex3f(-28.0, 10.0, 26.0);
    glVertex3f(-24.0, 10.0, 4.0);
    glEnd();
    //15b
    glBegin(GL_QUADS);
    glVertex3f(-28.0, 0.0, 26.0);
    glVertex3f(-16.0, 0.0, 28.0);
    glVertex3f(-16.0, 10.0, 28.0);
    glVertex3f(-28.0, 10.0, 26.0);
    glEnd();
    //16b
    glBegin(GL_QUADS);
    glVertex3f(-16.0, 0.0, 28.0);
    glVertex3f(-10.0, 0.0, -6.0);
    glVertex3f(-10.0, 10.0, -6.0);
    glVertex3f(-16.0, 10.0, 28.0);
    glEnd();

    //1a
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-14.0, 10.0, -18.0);
    glVertex3f(14.0, 10.0, -18.0);
    glVertex3f(14.0, 24.0, -18.0);
    glVertex3f(-14.0, 24.0, -18.0);
    glEnd();
    //2a
    glBegin(GL_QUADS);
    glVertex3f(14.0, 10.0, -18.0);
    glVertex3f(14.0, 24.0, -18.0);
    glVertex3f(14.0, 25.0, -7.0);
    glVertex3f(14.0, 10.0, -7.0);
    glEnd();
    //3a
    glBegin(GL_QUADS);
    glVertex3f(14.0, 10.0, -7.0);
    glVertex3f(29.0, 10.0, -9.0);
    glVertex3f(29.0, 24.0, -9.0);
    glVertex3f(14.0, 24.0, -7.0);
    glEnd();
    //4a
    glBegin(GL_QUADS);
    glVertex3f(29.0, 10.0, -9.0);
    glVertex3f(32.0, 10.0, 3.0);
    glVertex3f(32.0, 24.0, 3.0);
    glVertex3f(29.0, 24.0, -9.0);
    glEnd();
    //5a
    glBegin(GL_QUADS);
    glVertex3f(32.0, 10.0, 3.0);
    glVertex3f(24.0, 10.0, 4.0);
    glVertex3f(24.0, 24.0, 4.0);
    glVertex3f(32.0, 24.0, 3.0);
    glEnd();
    //6a
    glBegin(GL_QUADS);
    glVertex3f(24.0, 10.0, 4.0);
    glVertex3f(28.0, 10.0, 26.0);
    glVertex3f(28.0, 24.0, 26.0);
    glVertex3f(24.0, 24.0, 4.0);
    glEnd();
    //7a
    glBegin(GL_QUADS);
    glVertex3f(28.0, 10.0, 26.0);
    glVertex3f(16.0, 10.0, 28.0);
    glVertex3f(16.0, 24.0, 28.0);
    glVertex3f(28.0, 24.0, 26.0);
    glEnd();
    //8a
    glBegin(GL_QUADS);
    glVertex3f(16.0, 10.0, 28.0);
    glVertex3f(10.0, 10.0, -6.0);
    glVertex3f(10.0, 24.0, -6.0);
    glVertex3f(16.0, 24.0, 28.0);
    glEnd();
    //9a
    glBegin(GL_QUADS);
    glVertex3f(10.0, 10.0, -6.0);
    glVertex3f(-10.0, 10.0, -6.0);
    glVertex3f(-10.0, 24.0, -6.0);
    glVertex3f(10.0, 24.0, -6.0);
    glEnd();
    //10a
    glBegin(GL_QUADS);
    glVertex3f(-14.0, 10.0, -18.0);
    glVertex3f(-14.0, 24.0, -18.0);
    glVertex3f(-14.0, 24.0, -7.0);
    glVertex3f(-14.0, 10.0, -7.0);
    glEnd();
    //11a
    glBegin(GL_QUADS);
    glVertex3f(-14.0, 10.0, -7.0);
    glVertex3f(-29.0, 10.0, -9.0);
    glVertex3f(-29.0, 24.0, -9.0);
    glVertex3f(-14.0, 24.0, -7.0);
    glEnd();
    //12a
    glBegin(GL_QUADS);
    glVertex3f(-29.0, 10.0, -9.0);
    glVertex3f(-32.0, 10.0, 3.0);
    glVertex3f(-32.0, 24.0, 3.0);
    glVertex3f(-29.0, 24.0, -9.0);
    glEnd();
    //13a
    glBegin(GL_QUADS);
    glVertex3f(-32.0, 10.0, 3.0);
    glVertex3f(-24.0, 10.0, 4.0);
    glVertex3f(-24.0, 24.0, 4.0);
    glVertex3f(-32.0, 24.0, 3.0);
    glEnd();
    //14a
    glBegin(GL_QUADS);
    glVertex3f(-24.0, 10.0, 4.0);
    glVertex3f(-28.0, 10.0, 26.0);
    glVertex3f(-28.0, 24.0, 26.0);
    glVertex3f(-24.0, 24.0, 4.0);
    glEnd();
    //15a
    glBegin(GL_QUADS);
    glVertex3f(-28.0, 10.0, 26.0);
    glVertex3f(-16.0, 10.0, 28.0);
    glVertex3f(-16.0, 24.0, 28.0);
    glVertex3f(-28.0, 24.0, 26.0);
    glEnd();
    //16a
    glBegin(GL_QUADS);
    glVertex3f(-16.0, 10.0, 28.0);
    glVertex3f(-10.0, 10.0, -6.0);
    glVertex3f(-10.0, 24.0, -6.0);
    glVertex3f(-16.0, 24.0, 28.0);
    glEnd();

    //bawah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-14.0, 0.0, -18.0);
    glVertex3f(14.0, 0.0, -18.0);
    glVertex3f(14.0, 0.0, -6.0);
    glVertex3f(-14.0, 0.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(10.0, 0.0, -6.0);
    glVertex3f(14.0, 0.0, -7.0);
    glVertex3f(29.0, 0.0, -9.0);
    glVertex3f(32.0, 0.0, 3.0);
    glVertex3f(24.0, 0.0, 4.0);
    glVertex3f(28.0, 0.0, 26.0);
    glVertex3f(16.0, 0.0, 28.0);
    glVertex3f(10.0, 0.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-10.0, 0.0, -6.0);
    glVertex3f(-16.0, 0.0, 28.0);
    glVertex3f(-28.0, 0.0, 26.0);
    glVertex3f(-24.0, 0.0, 4.0);
    glVertex3f(-32.0, 0.0, 3.0);
    glVertex3f(-29.0, 0.0, -9.0);
    glVertex3f(-14.0, 0.0, -7.0);
    glVertex3f(-10.0, 0.0, -6.0);
    glEnd();

    //tengah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-14.0, 10.0, -18.0);
    glVertex3f(14.0, 10.0, -18.0);
    glVertex3f(14.0, 10.0, -6.0);
    glVertex3f(-14.0, 10.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(10.0, 10.0, -6.0);
    glVertex3f(14.0, 10.0, -7.0);
    glVertex3f(29.0, 10.0, -9.0);
    glVertex3f(32.0, 10.0, 3.0);
    glVertex3f(24.0, 10.0, 4.0);
    glVertex3f(28.0, 10.0, 26.0);
    glVertex3f(16.0, 10.0, 28.0);
    glVertex3f(10.0, 10.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-10.0, 10.0, -6.0);
    glVertex3f(-16.0, 10.0, 28.0);
    glVertex3f(-28.0, 10.0, 26.0);
    glVertex3f(-24.0, 10.0, 4.0);
    glVertex3f(-32.0, 10.0, 3.0);
    glVertex3f(-29.0, 10.0, -9.0);
    glVertex3f(-14.0, 10.0, -7.0);
    glVertex3f(-10.0, 10.0, -6.0);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-14.0, 24.0, -18.0);
    glVertex3f(14.0, 24.0, -18.0);
    glVertex3f(14.0, 24.0, -6.0);
    glVertex3f(-14.0, 24.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(10.0, 24.0, -6.0);
    glVertex3f(14.0, 24.0, -7.0);
    glVertex3f(29.0, 24.0, -9.0);
    glVertex3f(32.0, 24.0, 3.0);
    glVertex3f(24.0, 24.0, 4.0);
    glVertex3f(28.0, 24.0, 26.0);
    glVertex3f(16.0, 24.0, 28.0);
    glVertex3f(10.0, 24.0, -6.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-10.0, 24.0, -6.0);
    glVertex3f(-16.0, 24.0, 28.0);
    glVertex3f(-28.0, 24.0, 26.0);
    glVertex3f(-24.0, 24.0, 4.0);
    glVertex3f(-32.0, 24.0, 3.0);
    glVertex3f(-29.0, 24.0, -9.0);
    glVertex3f(-14.0, 24.0, -7.0);
    glVertex3f(-10.0, 24.0, -6.0);
    glEnd();
    
    glPopMatrix();
    glutSwapBuffers();
}

void idle()
{
    if (!mouseDown)
    {
        xrot += 0.4f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y)
{
    if(mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void keyboard(unsigned char key, int x, int y)
{
    //transparan
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
