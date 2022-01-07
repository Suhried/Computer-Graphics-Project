#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


void display();

void display() {

}

void displayEnd()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    display();
    glPopMatrix();
    glFlush();
}

void displayStart() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    display();
    glPopMatrix();
    glFlush();

}

void display_a() //1d
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.95f, 0.25f);

	glVertex2f(0.9f, 0.3f);

    glEnd();

    glBegin(GL_TRIANGLES);

	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.95f, 0.25f);
	glVertex2f(0.95f, 0.4f);
	glVertex2f(0.9f, 0.3f);

    glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.1f, -0.1f);
	glVertex2f(-0.95f, 0.25f);
	glVertex2f(-0.9f, 0.3f);

    glEnd();

    glBegin(GL_TRIANGLES);

	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.95f, 0.25f);
	glVertex2f(-0.95f, 0.4f);
	glVertex2f(-0.9f, 0.3f);

    glEnd();


    glBegin(GL_TRIANGLES);

	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.10f, 0.11f);
	glVertex2f(-0.10f, 0.19f);
	glVertex2f(-0.2f, 0.3f);

    glEnd();


    glBegin(GL_TRIANGLES);

	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.10f, 0.11f);
	glVertex2f(0.10f, 0.19f);
	glVertex2f(0.2f, 0.3f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.06f, 0.11f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(-0.06f, 0.11f);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.0,-0.05,0.0);
    glutSolidSphere(0.15,100,10);

    glEnd();

    glPopMatrix();

    glColor3f(0.255f, 0.412f, 0.882f);
    glutSolidSphere(0.15,100,10);

    glEnd();

    glColor3f(0.255f, 0.412f, 0.882f);
    glTranslatef(0.0,0.07,0.0);
    glutSolidSphere(0.15,100,10);

    glEnd();

    glPopMatrix();

    glTranslatef(0.0,-0.07,0.0);
	glBegin(GL_QUADS);

	glColor3f(0.604f,0.840f,0.196f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.1f, 0.0f);

    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(0.3,-0.08,0.0);
    glutSolidSphere(0.08,100,10);

    glEnd();
    glPopMatrix();


    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(-0.6,-0.0,0.0);
    glutSolidSphere(0.08,100,10);

    glEnd();

    glPopMatrix();
    glFlush();
    glPopMatrix();
    glFlush();
}

void display_b() //2d
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.4f, -0.8f);
	glVertex2f(0.4f, -0.9f);
	glVertex2f(-0.4f, -0.9f);
	glVertex2f(-0.4f, -0.8f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.35f, -0.8f);
	glVertex2f(-0.35f, -0.6f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.25f, -0.6f);
	glVertex2f(-0.25f, -0.9f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.30f, -0.3f);
	glVertex2f(-0.30f, -0.6f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.20f, -0.3f);
	glVertex2f(-0.20f, -0.9f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.10f, 0.1f);
	glVertex2f(-0.10f, -0.9f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.25f, 0.1f);
	glVertex2f(-0.25f, -0.3f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.35f, -0.8f);
	glVertex2f(0.35f, -0.6f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.25f, -0.6f);
	glVertex2f(0.25f, -0.9f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.30f, -0.3f);
	glVertex2f(0.30f, -0.6f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.20f, -0.3f);
	glVertex2f(0.20f, -0.9f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.10f, 0.1f);
	glVertex2f(0.10f, -0.9f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.25f, 0.1f);
	glVertex2f(0.25f, -0.3f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.17f, 0.1f);
	glVertex2f(0.17f, 0.3f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.17f, 0.1f);
	glVertex2f(-0.17f, 0.5f);

    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.35f, -0.6f);
	glVertex2f(-0.35f, -0.59f);
	glVertex2f(-0.25f, -0.59f);
	glVertex2f(-0.25f, -0.6f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.35f, -0.6f);
	glVertex2f(0.35f, -0.59f);
	glVertex2f(0.25f, -0.59f);
	glVertex2f(0.25f, -0.6f);

    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.30f, -0.3f);
	glVertex2f(-0.30f, -0.29f);
	glVertex2f(-0.20f, -0.29f);
	glVertex2f(-0.20f, -0.3f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.30f, -0.3f);
	glVertex2f(0.30f, -0.29f);
	glVertex2f(0.20f, -0.29f);
	glVertex2f(0.20f, -0.3f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.25f, 0.1f);
	glVertex2f(0.25f, 0.09f);
	glVertex2f(0.10f, 0.09f);
	glVertex2f(0.10f, 0.1f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.25f, 0.1f);
	glVertex2f(-0.25f, 0.09f);
	glVertex2f(-0.10f, 0.09f);
	glVertex2f(-0.10f, 0.1f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.10f, 0.5f);
	glVertex2f(-0.10f, 0.7f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.10f, 0.3f);
	glVertex2f(0.10f, 0.6f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.05f, 0.5f);
	glVertex2f(-0.05f, -0.9f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.05f, 0.3f);
	glVertex2f(0.05f, -0.9f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.17f, 0.5f);
	glVertex2f(-0.17f, 0.49f);
	glVertex2f(-0.05f, 0.49f);
	glVertex2f(-0.05f, 0.5f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.17f, 0.3f);
	glVertex2f(0.17f, 0.29f);
	glVertex2f(0.05f, 0.29f);
	glVertex2f(0.05f, 0.3f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.0f, 0.98f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.05f, 0.6f);
	glVertex2f(0.05f, 0.8f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.04f, 0.6f);
	glVertex2f(0.04f, 0.59f);
	glVertex2f(0.10f, 0.59f);
	glVertex2f(0.10f, 0.6f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.00f, 0.8f);
	glVertex2f(0.00f, 0.79f);
	glVertex2f(0.05f, 0.79f);
	glVertex2f(0.05f, 0.8f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.004f, 0.7f);
	glVertex2f(0.004f, 0.69f);
	glVertex2f(-0.10f, 0.69f);
	glVertex2f(-0.10f, 0.7f);

    glEnd();



    glPopMatrix();
    glFlush();

}

void display_c() //3d
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
    glColor3f(0.741, 0.718, 0.420);
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.3f, -0.9f);
	glVertex2f(-0.3f, -0.9f);
	glVertex2f(-0.3f, 0.0f);

    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f,0.5f,0.5f);
	glVertex2f(0.15f, -0.4f);
	glVertex2f(0.15f, -0.9f);
	glVertex2f(-0.15f, -0.9f);
	glVertex2f(-0.15f, -0.4f);

    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f,0.5f,0.5f);
	glVertex2f(0.4f, -0.0f);
	glVertex2f(0.4f, 0.3f);
	glVertex2f(-0.4f, 0.3f);
	glVertex2f(-0.4f, -0.0f);

    glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(0.3f, 0.1f);
	glVertex2f(-0.3f, 0.1f);
	glVertex2f(0.0f, 0.9f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.741, 0.718, 0.420);
	glVertex2f(-0.75f, -0.9f);
	glVertex2f(-0.45f, -0.9f);
	glVertex2f(-0.45f, -0.3f);
	glVertex2f(-0.75f, -0.3f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(-0.8f, -0.3f);
	glVertex2f(-0.4f, -0.3f);
	glVertex2f(-0.4f, -0.2f);
	glVertex2f(-0.8f, -0.2f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.8f, -0.1f);
	glVertex2f(-0.7f, -0.1f);
	glVertex2f(-0.7f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.65f, -0.2f);
	glVertex2f(-0.65f, -0.1f);
	glVertex2f(-0.55f, -0.1f);
	glVertex2f(-0.55f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.4f, -0.1f);
	glVertex2f(-0.4f, -0.2f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.741, 0.718, 0.420);
	glVertex2f(0.75f, -0.9f);
	glVertex2f(0.45f, -0.9f);
	glVertex2f(0.45f, -0.3f);
	glVertex2f(0.75f, -0.3f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(0.8f, -0.3f);
	glVertex2f(0.4f, -0.3f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.8f, -0.2f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.8f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.7f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.65f, -0.2f);
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.55f, -0.1f);
	glVertex2f(0.55f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.4f, -0.2f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f,0.5f,0.5f);
	glVertex2f(0.65f, -0.4f);
	glVertex2f(0.65f, -0.60f);
	glVertex2f(0.55f, -0.60f);
	glVertex2f(0.55f, -0.4f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f,0.5f,0.5f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.60f);
	glVertex2f(-0.55f, -0.60f);
	glVertex2f(-0.55f, -0.4f);

    glEnd();


    glPopMatrix();
    glFlush();

}

void display_d() //4d
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
	glColor3f(1.0f,0.5f,0.0f);
	glVertex2f(-0.45f, 0.0f);
	glVertex2f(-0.2f, -0.14f);
	glVertex2f(0.0f, 0.05f);
	glVertex2f(-0.24f, 0.2f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.45f, 0.0f);
	glVertex2f(-0.45f, -0.32f);
	glVertex2f(-0.2f, -0.45f);
	glVertex2f(-0.2f, -0.15f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f,0.5f,0.5f);
	glVertex2f(-0.2f, -0.45f);
	glVertex2f(-0.2f, -0.15f);
	glVertex2f(-0.0f, 0.05f);
	glVertex2f(-0.01f, -0.23f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.5f,0.5f,0.5f);
	glVertex2f(0.09f, -0.1f);
	glVertex2f(0.23f, -0.32f);
	glVertex2f(0.5f, -0.31f);
	glVertex2f(0.36f, -0.1f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.09f, -0.1f);
	glVertex2f(0.23f, -0.32f);
	glVertex2f(0.06f, -0.60f);
	glVertex2f(-0.07f, -0.33f);

    glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.0f,0.5f,0.1f);
	glVertex2f(0.23f, -0.32f);
	glVertex2f(0.5f, -0.32f);
	glVertex2f(0.34f, -0.56f);
	glVertex2f(0.07f, -0.60f);

    glEnd();



    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(-0.4,-0.15,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.1,-0.15,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.15,-0.01,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.15,-0.01,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.15,-0.01,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.15,-0.1,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.10,0.158,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(-0.2,0.13,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(-0.55,0.13,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();


    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.1,0.13,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();


    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.1,-0.07,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.1,-0.12,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(-0.06,-0.12,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(-0.133,0.124,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.531,-0.124,0.0);
    glutSolidSphere(0.04,100,10);

    glEnd();

    glPopMatrix();

    glFlush();
    glPopMatrix();
    glFlush();

}
    float _move = 0.0f;
float _angle1 = 0.0f;
void display_e() //5d
{
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glColor3d(1,0,0);
glLineWidth(7.5);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);



 glPushMatrix();
glScalef(1.0f, 1.0f, 0.0f);
glTranslatef(0.0, -0.5f, 0.0f);
glBegin(GL_POLYGON); // These vertices form a closed polygon
glColor3f(1.000, 0.271, 0.000); // Yellow
glVertex2f(0.1f, 0.06f);
glVertex2f(0.8f, 0.06f);
glVertex2f(0.8f, -0.06f);
glVertex2f(0.1f, -0.06f);

glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon
glColor3f(0.196, 0.804, 0.196); // Yellow
glVertex2f(0.5f, 0.32f);
glVertex2f(-0.05f, 0.9f);
glVertex2f(-0.15f, 0.8f);
glVertex2f(0.1f, 0.32f);

glEnd();


glBegin(GL_POLYGON); // These vertices form a closed polygon
glColor3f(1.000, 0.843, 0.000); // Yellow
glVertex2f(0.08f, 0.0f);
glVertex2f(0.08f, 0.62f);
glVertex2f(0.4f, 0.62f);
glVertex2f(0.45f, 0.32f);
glVertex2f(0.75f, 0.32f);
glVertex2f(0.77f, 0.30f);
glVertex2f(0.77f, 0.12f);

glEnd();


glBegin(GL_POLYGON); // These vertices form a closed polygon
glColor3f(0.000, 0.0, 0.000); // Yellow
glVertex2f(0.1f, 0.60f);
glVertex2f(0.1f, 0.18f);
glVertex2f(0.25f, 0.31f);
glVertex2f(0.4f, 0.31f);
glVertex2f(0.37f, 0.60f);


glEnd();


glBegin(GL_POLYGON); // These vertices form a closed polygon
glColor3f(0.400, 0.804, 0.667); // Yellow
glVertex2f(0.25f, 0.06f);
glVertex2f(0.85f, 0.06f);
glVertex2f(0.85f, 0.21f);
glVertex2f(0.25f, 0.21f);

glEnd();





glPopMatrix();



    // Clear the color buffer (background)
	glLineWidth(1.5);
	glTranslatef(-0.3, -0.3f, 0.0f);
	glBegin(GL_POLYGON);
	glTranslatef(-0.2, -0.5f, 0.0f);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<600;i++)
        {

            glColor3f(0.000, 0.545, 0.545);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.15;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	glFlush();  // Render now


glBegin(GL_POLYGON);
// These vertices form a closed polygon
glColor3f(1.000, 1.000, 1.000); // Yellow
glVertex2f(-0.16f, 0.01f);
glVertex2f(-0.16f, 0.31f);
glVertex2f(0.3f, 0.31f);
glVertex2f(0.3f, 0.01f);


glEnd();


glBegin(GL_POLYGON);
// These vertices form a closed polygon
glColor3f(0.196, 0.804, 0.196); // Yellow
glVertex2f(-0.09f, 0.01f);
glVertex2f(-0.16f, 0.01f);
glVertex2f(0.21f, 0.69f);
glVertex2f(0.25f, 0.41f);


glEnd();


 glPushMatrix();
glTranslatef(0.5, -0.24f, 0.0f);
glScalef(0.25f, 0.25f, 0.0f);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.000, 0.000, 0.000);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.663, 0.663, 0.663);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.4;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.412, 0.412, 0.412);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.184, 0.310, 0.310);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.3f, 0.0f); // x, y



 glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(-0.3f, 0.0f); // x, y



 glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.0f, 0.3f); // x, y



 glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.0f, -0.3f); // x, y



 glEnd();



 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.412, 0.412, 0.412);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glFlush();
glPopMatrix();



//second wheel
 glPushMatrix();
glTranslatef(0.75, -0.24f, 0.0f);
glScalef(0.25f, 0.25f, 0.0f);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.000, 0.000, 0.000);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.663, 0.663, 0.663);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.4;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.412, 0.412, 0.412);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.184, 0.310, 0.310);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.3f, 0.0f); // x, y



 glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(-0.3f, 0.0f); // x, y



 glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.0f, 0.3f); // x, y



 glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.0f, -0.3f); // x, y



 glEnd();



 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.412, 0.412, 0.412);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glFlush();
glPopMatrix();
// 3rd wheel;

glPushMatrix();
glTranslatef(1.0, -0.24f, 0.0f);
glScalef(0.25f, 0.25f, 0.0f);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.000, 0.000, 0.000);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.663, 0.663, 0.663);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.4;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.412, 0.412, 0.412);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.184, 0.310, 0.310);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.2;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.3f, 0.0f); // x, y



 glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(-0.3f, 0.0f); // x, y



 glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.0f, 0.3f); // x, y



 glEnd();
glBegin(GL_LINES); // Each set of 4 vertices form a quad
glColor3f(0.502, 0.502, 0.502); // Red
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.0f, -0.3f); // x, y



 glEnd();



 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3f(0.412, 0.412, 0.412);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}



glEnd();
glFlush();
glPopMatrix();




 glPopMatrix();




 glutSwapBuffers();
}



void update(int value) {



 _angle1+=1.0f;
if(_angle1 > 360.0)
{
_angle1-=360;
}
//glutPostRedisplay();



 _move -= .001;
if(_move > 1.3)
{
_move = -1.0;
}
glutPostRedisplay(); //Notify GLUT that the display has changed



 glutTimerFunc(50, update, 0); //Notify GLUT to call update again in 25 milliseconds
}

void display_f() //6d
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
	glColor3f(0.482, 0.408, 0.933);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(0.8f, -0.6f);
	glVertex2f(-0.4f, -0.6f);
	glVertex2f(-0.4f, 0.0f);

    glEnd();

    glTranslatef(0.0, -0.2f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f( 	0.000, 0.545, 0.545);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.0f, -0.1f);
	glVertex2f(-0.1f, -0.1f);

    glEnd();

    glTranslatef(0.2, -0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.0f, -0.1f);
	glVertex2f(-0.1f, -0.1f);

    glEnd();

    glTranslatef(0.2, -0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.0f, -0.1f);
	glVertex2f(-0.1f, -0.1f);

    glEnd();

    glTranslatef(0.2, -0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.0f, -0.1f);
	glVertex2f(-0.1f, -0.1f);

    glEnd();

    glTranslatef(-0.6, 0.2f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.2f);
	glVertex2f(-0.2f, -0.2f);
	glVertex2f(-0.2f, -0.6f);

    glEnd();

    glTranslatef(-0.2, 0.5f, 0.0f);
    glBegin(GL_TRIANGLES);
	glColor3f( 	0.255, 0.412, 0.882);
	glVertex2f(0.0f, -0.5f);
	glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.2f, -0.5f);
    glEnd();

    glTranslatef(0.2, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
	glColor3f( 	0.255, 0.412, 0.882);
	glVertex2f(0.0f, -0.5f);
	glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.2f, -0.5f);
    glEnd();

    glTranslatef(0.2, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
	glColor3f( 	0.255, 0.412, 0.882);
	glVertex2f(0.0f, -0.5f);
	glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.2f, -0.5f);
    glEnd();

	glFlush();

    glTranslatef(-0.8, -0.5f, 0.0f);
    glBegin(GL_QUADS);
	glColor3f(0.412, 0.412, 0.412);
	glVertex2f(0.05f, 0.5f);
	glVertex2f(0.1f, -0.6f);
	glVertex2f(-0.2f, -0.6f);
	glVertex2f(-0.15f, 0.5f);

    glEnd();
    glPopMatrix();
    glFlush();

}

void display_g() //7d
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
	glColor3f(0.647, 0.165, 0.165);
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.3f, 0.04f);
	glVertex2f(1.0f, 0.04f);
	glVertex2f(1.0f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.420, 0.557, 0.137);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(1.0f, 0.00f);
	glVertex2f(1.0f, -0.6f);
	glVertex2f(0.4f, -0.6f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.416, 0.353, 0.804);
	glVertex2f(0.45f, -0.1f);
	glVertex2f(0.9f, -0.1f);
	glVertex2f(0.9f, -0.3f);
	glVertex2f(0.45f, -0.3f);

    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(1.0f, -0.6f);
	glVertex2f(1.0f, -0.7f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.95f, 0.4f);
	glVertex2f(-0.95f, 0.3f);
	glVertex2f(0.85f, 0.3f);
	glVertex2f(0.85f, 0.4f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.275f,0.510f,0.706f);
	glVertex2f(-0.95f, 0.4f);
	glVertex2f(-0.90f, 0.8f);
	glVertex2f(0.80f, 0.8f);
	glVertex2f(0.85f, 0.4f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.275f,0.510f,0.706f);
	glVertex2f(-0.6f, -0.6f);
	glVertex2f(-0.7f, -0.6f);
	glVertex2f(-0.7f, 0.3f);
	glVertex2f(-0.6f, 0.3f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.275f,0.510f,0.706f);
	glVertex2f(0.6f, -0.6f);
	glVertex2f(0.5f, -0.6f);
	glVertex2f(0.5f, 0.3f);
	glVertex2f(0.6f, 0.3f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.502f,0.502f,0.502f);
	glVertex2f(-0.6f, -0.55f);
	glVertex2f(-0.6f, -0.6f);
	glVertex2f(0.5f, -0.6f);
	glVertex2f(0.5f, -0.55f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.400, 0.804, 0.667);
	glVertex2f(0.1f, -0.50f);
	glVertex2f(0.27f, -0.50f);
	glVertex2f(0.3f, -0.55f);
	glVertex2f(0.07f, -0.55f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.400, 0.804, 0.667);
	glVertex2f(-0.1f, -0.50f);
	glVertex2f(-0.27f, -0.50f);
	glVertex2f(-0.3f, -0.55f);
	glVertex2f(-0.07f, -0.55f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.482, 0.408, 0.933);
	glVertex2f(0.1f, -0.50f);
	glVertex2f(0.27f, -0.50f);
	glVertex2f(0.27f, -0.35f);
	glVertex2f(0.1f, -0.35f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.482, 0.408, 0.933);
	glVertex2f(-0.1f, -0.50f);
	glVertex2f(-0.27f, -0.50f);
	glVertex2f(-0.27f, -0.35f);
	glVertex2f(-0.1f, -0.35f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.118, 0.565, 1.000);
	glVertex2f(0.1f, -0.35f);
	glVertex2f(0.27f, -0.35f);
	glVertex2f(0.27f, -0.15f);
	glVertex2f(0.1f, -0.15f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.118, 0.565, 1.000);
	glVertex2f(-0.1f, -0.35f);
	glVertex2f(-0.27f, -0.35f);
	glVertex2f(-0.27f, -0.15f);
	glVertex2f(-0.1f, -0.15f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.561, 0.737, 0.561);
	glVertex2f(0.07f, -0.05f);
	glVertex2f(0.07f, -0.1f);
	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.3f, -0.05f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.561, 0.737, 0.561);
	glVertex2f(-0.07f, -0.05f);
	glVertex2f(-0.07f, -0.1f);
	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.3f, -0.05f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.000, 0.392, 0.000);
	glVertex2f(0.12f, -0.2f);
	glVertex2f(0.12f, -0.3f);
	glVertex2f(0.25f, -0.3f);
	glVertex2f(0.25f, -0.2f);

    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.000, 0.392, 0.000);
	glVertex2f(-0.12f, -0.2f);
	glVertex2f(-0.12f, -0.3f);
	glVertex2f(-0.25f, -0.3f);
	glVertex2f(-0.25f, -0.2f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.25f, -0.1f);
	glVertex2f(0.25f, -0.15f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(0.12f, -0.1f);
	glVertex2f(0.12f, -0.15f);

    glEnd();

        glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.12f, -0.1f);
	glVertex2f(-0.12f, -0.15f);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);
	glColor3f(0.1f,0.1f,0.1f);
	glVertex2f(-0.25f, -0.1f);
	glVertex2f(-0.25f, -0.15f);

    glEnd();
    glPopMatrix();
    glFlush();

}



void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
        case '1':
             glutDisplayFunc(displayStart);
             glutPostRedisplay();
        break;
        case '2':
             glutDisplayFunc(displayEnd);
             glutPostRedisplay();
        break;
        case 'a':
             glutDisplayFunc(display_a);
             glutPostRedisplay();
        break;
        case 'b':
             glutDisplayFunc(display_b);
             glutPostRedisplay();
        break;
        case 'c':
             glutDisplayFunc(display_c);
             glutPostRedisplay();
        break;
        case 'd':
             glutDisplayFunc(display_d);
             glutPostRedisplay();
        break;
        case 'e':
             glutDisplayFunc(display_e);
             glutPostRedisplay();
        break;
        case 'f':
             glutDisplayFunc(display_f);
             glutPostRedisplay();
        break;
        case 'g':
             glutDisplayFunc(display_g);
             glutPostRedisplay();
        break;

	}
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("26 Objects On 26 Key Press");
    glutDisplayFunc(displayStart);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(20, update, -1);
    glutMainLoop();
    return 0;
}

