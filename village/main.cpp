#include<windows.h>
#include<gl/glut.h>
void draw_pixel(GLint cx, GLint cy)
{

	glBegin(GL_POINTS);
		glVertex2i(cx,cy);
	glEnd();
}

void plotpixels(GLint h,GLint k, GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
}

void draw_circle(GLint h, GLint k, GLint r)
{
	GLint d=1-r, x=0, y=r;
	while(y>x)
	{
		plotpixels(h,k,x,y);
		if(d<0) d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels(h,k,x,y);
}





void draw()
{
         glClear(GL_COLOR_BUFFER_BIT);
         glColor3f(1.0,0.0,1.0);

         glBegin(GL_POLYGON);
         glColor3f(0.0,1.0,0.0);
         glVertex2f(0,30);
         glVertex2f(800,120);
         glVertex2f(800,400);
         glVertex2f(0,400);
         glEnd();

         glBegin(GL_POLYGON);
         glColor3f(0.0,1.0,1.0);
         glVertex2f(100,80);
         glVertex2f(290,80);
         glVertex2f(290,300);
         glVertex2f(100,300);
         glEnd();

         glBegin(GL_TRIANGLES);
         glColor3f(0.0,0.0,1.0);
         glVertex2f(70,300);
         glVertex2f(320,300);
         glVertex2f(200,500);
         glEnd();


         glBegin(GL_QUADS);
         glColor3f(0.0,0.0,1.0);
         glVertex2f(180,80);
         glVertex2f(220,80);
         glVertex2f(220,190);
         glVertex2f(180,190);
         glEnd();

         glBegin(GL_QUADS);
         glColor3f(1.0,0.0,0.0);
         glVertex2f(120,190);
         glVertex2f(140,190);
         glVertex2f(140,240);
         glVertex2f(120,240);
         glEnd();

         glBegin(GL_QUADS);
         glColor3f(1.0,0.0,0.0);
         glVertex2f(250,190);
         glVertex2f(270,190);
         glVertex2f(270,240);
         glVertex2f(250,240);
         glEnd();



         glBegin(GL_POLYGON);
         glColor3f(0.0,1.0,1.0);
         glVertex2f(450,170);
         glVertex2f(630,170);
         glVertex2f(630,400);
         glVertex2f(450,400);
         glEnd();

         glBegin(GL_TRIANGLES);
         glColor3f(1.0,1.0,0.0);
         glVertex2f(400,400);
         glVertex2f(670,400);
         glVertex2f(530,580);
         glEnd();


         glBegin(GL_QUADS);
         glColor3f(0.0,0.0,1.0);
         glVertex2f(510,170);
         glVertex2f(560,170);
         glVertex2f(560,320);
         glVertex2f(510,320);
         glEnd();

         glBegin(GL_QUADS);
         glColor3f(1.0,0.0,0.0);
         glVertex2f(470,320);
         glVertex2f(500,320);
         glVertex2f(500,370);
         glVertex2f(470,370);
         glEnd();

         glBegin(GL_QUADS);
         glColor3f(1.0,0.0,0.0);
         glVertex2f(580,320);
         glVertex2f(610,320);
         glVertex2f(610,370);
         glVertex2f(580,370);
         glEnd();


         glBegin(GL_POLYGON);
         glColor3f(1.0,0.0,0.0);
         glVertex2f(690,60);
         glVertex2f(710,70);
         glVertex2f(710,200);
         glVertex2f(690,200);
         glEnd();

         glBegin(GL_TRIANGLES);
         glColor3f(0.0,1.0,0.0);
         glVertex2f(660,170);
         glVertex2f(730,170);
         glVertex2f(700,280);
         glEnd();


          glBegin(GL_TRIANGLES);
         glColor3f(0.0,1.0,0.0);
         glVertex2f(660,200);
         glVertex2f(730,200);
         glVertex2f(700,300);
         glEnd();

         glBegin(GL_POLYGON);
         glColor3f(0.0,1.0,1.0);
         glVertex2f(0,0);
         glVertex2f(800,0);
         glVertex2f(800,150);
         glVertex2f(0,30);
         glEnd();
         glBegin(GL_POLYGON);
         glColor3f(1.0,0.0,0.0);
         glVertex2f(500,20);
         glVertex2f(600,20);
         glVertex2f(630,60);
         glVertex2f(480,60);
         glEnd();
         glBegin(GL_POLYGON);
         glColor3f(0.0,0.0,1.0);
         glVertex2f(540,60);
         glVertex2f(550,60);
         glVertex2f(550,150);
         glVertex2f(540,150);
         glEnd();
         glBegin(GL_TRIANGLES);
         glColor3f(1.0,0.0,0.0);
         glVertex2f(550,100);
         glVertex2f(580,100);
         glVertex2f(550,150);

         glEnd();

for(int l=0;l<=35;l++)
{
		glColor3f(1.0,0.9,0.0);
		draw_circle(220,580,l);
}

for(int l=0;l<=30;l++)
{
		glColor3f(0.0,1.0,1.0);
		draw_circle(480,650,l);
}
for(int l=0;l<=25;l++)
{
		glColor3f(0.0,1.0,1.0);
		draw_circle(480,600,l);
}
for(int l=0;l<=25;l++)
{
		glColor3f(0.0,1.0,1.0);
		draw_circle(520,650,l);
}
for(int l=0;l<=25;l++)
{
		glColor3f(0.0,1.0,1.0);
		draw_circle(430,650,l);
}




         glFlush();


}
void initialize()
{
         glClearColor(0.0,0.0,0.0,0.0);
         glMatrixMode(GL_PROJECTION);
         glLoadIdentity();
         gluOrtho2D(0.0,800.0,0.0,700.0);

}
int main(int Argc,char **Argv)
{
         glutInit(&Argc,Argv);
          glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

    glutInitWindowSize(850,900);
    glutInitWindowPosition(50,50);
    glutCreateWindow("MY WINDOW");

    initialize();
    glutDisplayFunc(draw);

    glutMainLoop();

    return 0;
}
