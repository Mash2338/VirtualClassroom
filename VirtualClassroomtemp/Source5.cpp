#include "Header4.h"

void Snowman::drawTeacher() {

    glColor3f(0.39f, 0.32f, 0.29f);

    // Draw Head
    glPushMatrix();
    glTranslatef(0.0f, 3.5f, 0.0f);
    glutSolidSphere(1.0f, 20, 20);
    glPopMatrix();
    

    // Draw Eyes
    glPushMatrix();
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(0.5f, 3.8f, 1.0f);
    glutSolidSphere(0.15f, 10, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 3.8f, 1.0f);
    glutSolidSphere(0.15f, 10, 10);
    glPopMatrix();

    //Draw Nose

    glPushMatrix();
    glTranslatef(0.25f, 3.5f, 1.0f);
    glutSolidCube(0.15f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.25f, 3.35f, 1.0f);
    glutSolidCube(0.15f);
    glPopMatrix();

    //Draw Mouth

    glBegin(GL_QUADS);
    glVertex3f(0.0f, 3.0f, 1.0f);
    glVertex3f(0.5f, 3.0f, 1.0f);
    glVertex3f(0.5f, 3.1f, 1.0f);
    glVertex3f(0.0f, 3.1f, 1.0f);
    glEnd();

    // Draw Body

    //body1 
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(-1.0f, 2.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    
    glTranslatef(0.0f, 2.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    
    glTranslatef(1.0f, 2.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //body2
    glPushMatrix();
   
    glTranslatef(-1.0f, 1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    
    glTranslatef(0.0f, 1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    
    glTranslatef(1.0f, 1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //body3

    glPushMatrix();
    
    glTranslatef(-1.0f, 0.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    
    glTranslatef(0.0f, 0.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    
    glTranslatef(1.0f, 0.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();


    //body4

    glPushMatrix();
    
    glTranslatef(-1.0f, -1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    
    glTranslatef(0.0f, -1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    
    glTranslatef(1.0f, -1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //leg1

    glPushMatrix();
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(-1.0f, -1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
   
    glTranslatef(1.0f, -1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //leg2 

    glPushMatrix();
    
    glTranslatef(-1.0f, -2.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    
    glTranslatef(1.0f, -2.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //leg3

    glPushMatrix();
    
    glTranslatef(-1.0f, -3.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
   
    glTranslatef(1.0f, -3.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //leg4

    glPushMatrix();
    
    glTranslatef(-1.0f, -4.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
   
    glTranslatef(1.0f, -4.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //leg5

    glPushMatrix();
    
    glTranslatef(-1.0f, -5.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.0f, -5.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //leg6

    glPushMatrix();
   
    glTranslatef(-1.0f, -6.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
   
    glTranslatef(1.0f, -6.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //hands1

    glColor3f(1.0, 0.5, 0.0);
    glPushMatrix();
   
    glTranslatef(-2.0f, 2.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
  
    glTranslatef(2.0f, 2.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //hands2

    glPushMatrix();
   
    glTranslatef(-2.0f, 1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
   
    glTranslatef(2.0f, 1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //hands3

    glPushMatrix();
   
    glTranslatef(-2.0f, 0.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
    
    glTranslatef(2.0f, 0.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    //hands4

    glPushMatrix();
   
    glTranslatef(-2.0f, -1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    glPushMatrix();
   
    glTranslatef(2.0f, -1.0f, 0.0f);
    glutSolidCube(1.2f);
    glPopMatrix();

    

        
}