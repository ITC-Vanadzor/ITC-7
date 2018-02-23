#include <iostream>
#include <cmath>
#include <GL\freeglut.h>

# define M_PI           3.14159265358979323846
int *pn;
int qanak(int n)
{
	if (n % 2 == 0)
	{
		return  n / 2;
	}
	else
	{
		return  n;
	}

}

int input()
{
	std::cout << "qani hyur uneqn";
	int n = 0;
	while (n < 1)
	{
		std::cin >> n;
	}
	
	return n;
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 1.0f, 0.0f);
	int a;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0f, 0.0f); 
	for (int i = 0; i <= 5000; i++) {
		a = (float)i / 50.0f * 3.1415f * 2.0f;
		glVertex2f(cos(a) * 5.0f, sin(a) * 5.0f);
	}
	glEnd();

	int n = *pn;
	int alpha = 360 / n;
	glBegin(GL_LINES);

	glColor3f(1.0f, 0.0f, 0.0f);
	//glVertex2f(0, 0);
//	glVertex2f(0, 5);
	for (int i = 0; i < n; ++i)
	{
		glVertex2f(0, 0);
		glVertex2f(5 * cos(M_PI*i*alpha / 180), 5*sin(M_PI*i*alpha/180));
	}
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{	
	
	int n = input();
	 pn = &n;
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(200, 200);
	glutInitWindowSize(200, 200);
	glutCreateWindow("Tort");

	glClearColor(1, 1, 1, 1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);

	glutDisplayFunc(Display);
	
	glutMainLoop();

	return 0;
}