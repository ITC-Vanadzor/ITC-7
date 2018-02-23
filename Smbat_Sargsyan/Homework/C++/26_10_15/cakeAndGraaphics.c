#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>
// compile:
// gcc -Wall -Wextra -Werror -lglut -lGL -lm -std=gnu99 -D_GNU_SOURCE opengl.c -o openglcircle

#define _U_    __attribute__((__unused__))
// exit by ctrl+q or escape
float Sharavix;
int i;
float x,y;
float SektorAnkyun;
void keyPressed(unsigned char key, _U_ int x, _U_ int y){
  int mod = glutGetModifiers(); // window = glutGetWindow()
  if(mod == GLUT_ACTIVE_CTRL && key == 'q') exit(0);
  else if(key == 27) exit(0);
}

void DrawCircle(float cx, float cy, float r, int num_segments){
  float theta = 2. * M_PI / (float)num_segments;
  float c, s, t, x = r, y = 0.;
  sincosf(theta, &s, &c);
  glBegin(GL_LINE_LOOP);
  for(int ii = 0; ii < num_segments; ii++){
    glVertex2f(x + cx, y + cy);
    t = x;
    x = c * x - s * y;
    y = s * t + c * y;
  }
  glEnd();
}

void display(){
  glClear(GL_COLOR_BUFFER_BIT);
  DrawCircle(0.,0.,1,150);
  glFlush();
}

int main(int argc, char** argv){
int n=0;
	 std::cout << "Hyureri qanak@` n= ";
	 std::cin >> n;
	
	if (n%2==0) {
		std::cout << "ktrvacqneri nvazaguyn qanakn e` " << n/2 << std::endl;
	}
	else {
		std::cout << "ktrvacqneri nvazaguyn qanakn e` " << (n-1) << std::endl;
	}
        x=(Sharavix*cos(SektorAnkyun*i*M_PI/180));
        y=(Sharavix*sin(SektorAnkyun*i*M_PI/180));
	float SektorAnkyun=360/n;
	int Sharavix=0;
	std::cout << "nermucel sharavix@` R=  ";
	std::cin >> Sharavix;
	std::cout << "(0, 0) ---  " << Sharavix <<  ", 0" <<std::endl;
	for (int i=1; i<n; ++i) {
		std::cout << "(0, 0) ---  " << (Sharavix*cos(SektorAnkyun*i*M_PI/180)) << " , " << (Sharavix*sin(SektorAnkyun*i*M_PI/180)) << std::endl;
	}
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(400, 400);
  glutCreateWindow("A Simple Circle");
  glutDisplayFunc(display);
  glutKeyboardFunc(keyPressed);
  glutMainLoop();
return 0;
}
