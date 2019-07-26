#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<cmath>
GLfloat angle = 0.0f;
GLfloat boatPosition = 0.0f;
GLfloat boatSpeed = 0.009f;
void updateBoat(int value) {

    if(boatPosition > .20)
    {
        boatPosition = 0;
    }

       boatPosition += boatSpeed;

	glutPostRedisplay();


	glutTimerFunc(100, updateBoat, 0);
}
