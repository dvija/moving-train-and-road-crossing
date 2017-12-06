
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>


void create_menu(void);
void menu(int);
int w=2000,z=2000;
float a=0,b=0,p=0;
int x=3;
void init()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_MODELVIEW);
	gluOrtho2D(0.0,200.0,0.0,200.0);

}

void bitmap_output(int x, int y, char *string, void *font)
{
  int len, i;

  glRasterPos2f(x, y);
  len = (int) strlen(string);
  for (i = 0; i < len; i++) 
  {
    glutBitmapCharacter(font, string[i]);
  }
}





void mytext()
{
	glColor3f(1.0,0.0,0.0);
	bitmap_output(60, 190, "WELCOME!",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.1,0.0,1.0);
	bitmap_output(80, 183, " Moving Train & road crossing by car",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP); 
		glVertex2f(80,182);
		glVertex2f(130,182);
	glEnd();


	glColor3f(0.1,0.0,1.0);
	bitmap_output(135, 26, "Name : Padaliya Dvija",GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(135, 19, "EnrollNo :100760107023",GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(135, 12, "SubjectName  :computer graphics",GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(135, 5, "Guided By :Dramendra Singh & Ishani patel",GLUT_BITMAP_TIMES_ROMAN_24);
		
}
void trac()
{   int k=0;
for(k=0;k<200;)
{glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(k+2,51);
	glVertex2i(k+6,51);
	glVertex2i(k+4,45);
	glVertex2i(k,45);
	glEnd();
	k=k+8;
}
	glColor3f(0.4,0.4,0.4);
	glBegin(GL_POLYGON);
	glVertex2i(0,43);
	glVertex2i(w,43);
	glVertex2i(0,46);
	glVertex2i(w,46);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(0,49);
	glVertex2i(w,49);
	glVertex2i(0,51);
	glVertex2i(w,51);
	glEnd();



}


void c(int x,int y,float r)
{
	float x2,y2;
    float angle;


 
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x,y);
 
for (angle=1.0f;angle<361.0f;angle+=0.2)
{
    x2 = x+sin(angle)*r;
    y2 = y+cos(angle)*r;
    glVertex2f(x2,y2);
	
}
 
glEnd();
	
}

void cir(int x,int y)
{
int p=x;
int q=y;
	
glColor3f(0.9,0.5,0.0);
c(p,q,6);
glColor3f(0.9,0.0,0.0);
c(p,q,0.6);
glColor3f(1.0,0.3,0.0);
c(p,q+4,1.5); 
c(p,q-3.7,1.5);
c(p-3,q+2,1.5);	
c(p+3,q+2,1.5);
c(p-3,q-2,1.5);
c(p+3,q-2,1.5);
 
}

void wheel()
{cir(-28+a,51);

cir(-10+a,51);

cir(5+a,51);

cir(24+a,51);
	
cir(40+a,51);
	
cir(59+a,51);


}
void wagon1()
{   int k=-32;
	
	glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(-34+a,57);
	glVertex2i(-4+a,57);
	glVertex2i(-4+a,64);
	glVertex2i(-34+a,64);
	glEnd();
/*
	glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(-3+a,59);
	glVertex2i(-32+a,59);
	glVertex2i(-32+a,62);
	glVertex2i(-34+a,62);
	glEnd();
	*/
	glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(-4+a,59);
	glVertex2i(-2+a,59);
	glVertex2i(-2+a,62);
	glVertex2i(-4+a,62);
	glEnd();

	glColor3f(0.8,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(-34+a,64);
	glVertex2i(-4+a,64);
	glVertex2i(-4+a,90);
	glVertex2i(-34+a,90);
	glEnd();

	
	do
	{
	glColor3f(1.0,1.0,0.9);
	glBegin(GL_POLYGON);
	glVertex2i(k+a,75);
	glVertex2i(k+7+a,75);
	
	glColor3f(0.5,0.5,0.5);
	glVertex2i(k+7+a,85);
	glVertex2i(k+a,85);
	glEnd();
	k=k+9;
	}while(k<-7);

	
}


void wagon()
{   int k=1;
	
	glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(0+a,57);
	glVertex2i(30+a,57);
	glVertex2i(30+a,64);
	glVertex2i(0+a,64);
	glEnd();

	glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(-2+a,59);
	glVertex2i(0+a,59);
	glVertex2i(0+a,62);
	glVertex2i(-2+a,62);
	glEnd();

	glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(30+a,59);
	glVertex2i(33+a,59);
	glVertex2i(33+a,62);
	glVertex2i(30+a,62);
	glEnd();

	glColor3f(0.8,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(0+a,64);
	glVertex2i(30+a,64);
	glVertex2i(30+a,90);
	glVertex2i(0+a,90);
	glEnd();

	
	do
	{
	glColor3f(1.0,1.0,0.9);
	glBegin(GL_POLYGON);
	glVertex2i(k+a,75);
	glVertex2i(k+7+a,75);
	
	glColor3f(0.5,0.5,0.5);
	glVertex2i(k+7+a,85);
	glVertex2i(k+a,85);
	glEnd();
	k=k+9;
	}while(k<23);

	
}


void engine()
{   int q=113,s=6;
	int k=37;
	glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(35+a,57);
	glVertex2i(65+a,57);
	glVertex2i(65+a,64);
	glVertex2i(35+a,64);
	glEnd();
	
	
	glBegin(GL_POLYGON);
	glVertex2i(32+a,59);
	glVertex2i(35+a,59);
	glVertex2i(35+a,62);
	glVertex2i(32+a,62);
	glEnd();

	glColor3f(0.8,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(35+a,64);
	glVertex2i(50+a,64);
	glVertex2i(50+a,90);
	glVertex2i(35+a,90);
	glEnd();

	
	do
	{
	glColor3f(1.0,1.0,0.9);
	glBegin(GL_POLYGON);
	glVertex2i(k+2+a,75);
	glVertex2i(k+9+a,75);
	glColor3f(0.5,0.5,0.5);
    glVertex2i(k+9+a,85);
	glVertex2i(k+2+a,85);
	glEnd();
	k=k+9;
	}while(k<45);


	glColor3f(0.8,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(50+a,64);
	glVertex2i(63+a,64);
	glVertex2i(63+a,82);
	glVertex2i(50+a,82);
	glEnd();


	glColor3f(0.4,0.4,0.4);
	glBegin(GL_POLYGON);
	glVertex2i(60+a,82);
	glVertex2i(63+a,82);
	glVertex2i(63+a,90);
	glVertex2i(60+a,90);
	glEnd();


	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(63+a,67);
	glVertex2i(65+a,67);
	glVertex2i(65+a,79);
	glVertex2i(63+a,79);
	glEnd();
	
	glColor3f(0.8,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(65+a,70);
	glVertex2i(66+a,70);
	glVertex2i(66+a,76);
	glVertex2i(65+a,76);
	glEnd();
	glColor3f(0.3,0.0,0.0);
	glLineWidth(2.0);   
	glBegin(GL_LINES);
	glVertex2i(50+a,64);
	glVertex2i(50+a,90);
	glEnd();


		glColor3f(0.7,0.4,0.0);  
	c(156-q+a,72+s,3.5);
	glColor3f(0.0,0.0,0.0);  
c(154-q+a,73+s,0.5);
c(158-q+a,73+s,0.5);
glBegin(GL_POINTS);
glVertex2f(156-q+a,70+s);
glVertex2f(155.9-q+a,70.1+s);
glVertex2f(156.1-q+a,70.1+s);
glVertex2f(155.8-q+a,70.2+s);
glVertex2f(156.2-q+a,70.2+s);
glVertex2f(155.7-q+a,70.3+s);
glVertex2f(156.3-q+a,70.3+s);
glVertex2f(155.6-q+a,70.4+s);
glVertex2f(156.4-q+a,70.4+s);
glEnd();
glColor3f(0.0,0.0,1.0);  
glBegin(GL_POLYGON);
	glVertex2i(41+a,81);
	glVertex2i(45+a,81);
	glVertex2i(45+a,83);
	glVertex2i(41+a,83);
	glEnd();

	
	

	
	
	}

	void cloud()
	{glColor3f(0.7,0.7,0.7);
	c(58+a,96,2);
	c(59+a,97,2);
	c(60+a,95,2);
	c(61+a,94,3);
	c(57+a,94,3);
	c(57+a,97,3);


	c(55+a,97,3);c(52+a,98,3);c(51+a,96,3);c(52+a,99,3);

	c(50+a,97,3);c(48+a,98,3);c(49+a,96,3);c(47+a,99,3);

	c(31+a,110,3);c(35+a,108,3);c(38+a,109,3);c(33+a,112,3);

	c(20+a,115,3);c(18+a,114,3);
	c(19+a,116,2);

	}

void station()
{  int k;
	glColor3f(0.4,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(149,55);
	glVertex2i(190,55);
	glVertex2i(190,110);
	glVertex2i(149,110);
	glEnd();

	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(150,110);
	glVertex2i(190,110);
	glVertex2i(190,130);
	glVertex2i(150,130);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2i(150,110);
	glVertex2i(140,110);
	glVertex2i(150,130);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2i(200,110);
	glVertex2i(190,130);
	glVertex2i(190,110);
	glEnd();

	for(k=151;k<187;)
	{
	
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2i(k,55);
	glVertex2i(k+11,55);

	glColor3f(1.0,1.0,0.9);
	glVertex2i(k+11,105);
	glVertex2i(k,105);
	glEnd();
	k=k+13;
	}
	

	glColor3f(0.4,0.0,0.1);
	glBegin(GL_TRIANGLES);
	glVertex2i(156,72);
	glVertex2f(158.5,64);
	glVertex2f(153.5,64);
	glEnd();

	glColor3f(0.0,0.0,0.1);
	glBegin(GL_POLYGON);
	glVertex2f(153.5,64);
	glVertex2f(153,59);
	glVertex2f(155,59);
	glVertex2f(156,60);
	glVertex2f(157,59);
	glVertex2f(159,59);
	glVertex2f(158.5,64);
	
	glEnd();


	glColor3f(0.0,0.0,0.0);


	glBegin(GL_LINES);
	
    glVertex2f(155,69);
	glVertex2f(152.5,65);
    
	glVertex2f(157,69);
	glVertex2f(159.5,65);

	glVertex2f(154,59);
	glVertex2f(154,54);
	glVertex2f(158,59);
	glVertex2f(158,54);
    glEnd();

c(152.5,65,0.6);
c(159.5,65,0.6);


	
c(155,54,1);
c(159,54,1);

glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(152,63);
	glVertex2f(152,65);

glEnd();

glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
	glVertex2i(151.5,63);
	glVertex2i(153.5,63);
	glVertex2i(153.5,56);
	glVertex2i(151.5,56);
	glEnd();



	glColor3f(0.7,0.5,0.0);  
	c(156,72,3.5);
	glColor3f(0.0,0.0,0.0);  
c(154,73,0.5);c(158,73,0.5);
glBegin(GL_POINTS);
glVertex2f(156,70);
glVertex2f(155.9,70.1);
glVertex2f(156.1,70.1);
glVertex2f(155.8,70.2);
glVertex2f(156.2,70.2);
glVertex2f(155.7,70.3);
glVertex2f(156.3,70.3);
glVertex2f(155.6,70.4);
glVertex2f(156.4,70.4);
glEnd();

glBegin(GL_LINES);
glVertex2f(156,75.5);
	glVertex2f(154,74);

	glVertex2f(156,75.5);
	glVertex2f(156,74);
	glVertex2f(156,75.5);
	glVertex2f(158,74);

	glVertex2f(156,75.5);
	glVertex2f(153,75);
	glVertex2f(156,75.5);
	glVertex2f(159,75.8);


glEnd();
	
}


void road()
{	int k;
	glColor3f(0.9,0.9,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(w,0);
	glColor3f(0.5,0.3,0.0);
	glVertex2i(0,150);
	glVertex2i(w,150);
	glEnd();
	
	glColor3f(0.5,1.0,0.9);
	glBegin(GL_POLYGON);
	glVertex2i(0,150);
	glVertex2i(w,150);
	glColor3f(1.0,1.0,0.9);
	glVertex2i(0,200);
	glVertex2i(w,200);
	glEnd();

    glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2i(60,0);
	glVertex2i(110,0);
	glVertex2i(90,150);
	glVertex2i(80,150);
	glEnd();

	for(k=0;k<150;)
	{glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(84.5,k);
	glVertex2i(85.5,k);
	glVertex2i(85.5,k+20);
	glVertex2i(84.5,k+20);
	glEnd();
	k=k+26;
	}
	
 }

void car()
{   glColor3f(0.2,0.0,0.8);
	glBegin(GL_POLYGON);
	glVertex2i(70+x,10+b);
	glVertex2i(80+x,10+b);
	glVertex2i(80+x,25+b);
	glVertex2i(70+x,25+b);
	glEnd();

	glColor3f(1.0,1.0,0.9);
	glBegin(GL_POLYGON);
	glVertex2i(71+x,18+b);
	glVertex2i(79+x,18+b);
	glColor3f(0.5,0.5,0.5);
	glVertex2i(79+x,23+b);
	glVertex2i(71+x,23+b);
	glEnd();
	
	glColor3f(0.9,0.0,0.0);
 c(72+x,12+b,1);
 c(78+x,12+b,1);

	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(71+x,5+b);
	glVertex2i(73+x,5+b);
	glVertex2i(73+x,10+b);
	glVertex2i(71+x,10+b);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(77+x,5+b);
	glVertex2i(79+x,5+b);
	glVertex2i(79+x,10+b);
	glVertex2i(77+x,10+b);
	glEnd();
}

void car2()
{   glColor3f(0.5,0.0,0.2);
	glBegin(GL_POLYGON);
	glVertex2i(85+x,95-p);
	glVertex2i(95+x,95-p);
	glVertex2i(95+x,80-p);
	glVertex2i(85+x,80-p);
	glEnd();

	glColor3f(1.0,1.0,0.9);
	glBegin(GL_POLYGON);
	glVertex2i(86+x,93-p);
	glVertex2i(94+x,93-p);
	glColor3f(0.5,0.5,0.5);
	glVertex2i(94+x,88-p);
	glVertex2i(86+x,88-p);
	glEnd();
	
	glColor3f(0.9,0.5,0.0);
 c(87+x,83-p,1);
 c(93+x,83-p,1);

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(88+x,80-p);
	glVertex2i(86+x,80-p);
	glVertex2i(86+x,75-p);
	glVertex2i(88+x,75-p);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(92+x,80-p);
	glVertex2i(94+x,80-p);
	glVertex2i(94+x,75-p);
	glVertex2i(92+x,75-p);
	glEnd();
}

void train()
{

wheel();
wagon();
wagon1();
engine();
}
void pr()
{int k;
glClear(GL_COLOR_BUFFER_BIT); 
road();
station();
trac();
car();
car2();
cloud();
     mytext();

if(a<=180)
{
	 a=a+1;
	 if(a>=120)
	 {

	 if(b<130)
	 {
		
		 b=b+1.5;
	  
		p=p+1;     
	 } 

	 }
}
else 
{
	a=0;
	b=0;
	p=0; 
}
 train(); 
 
glutPostRedisplay();
glFlush();
}

void ideal()
{
glClear(GL_COLOR_BUFFER_BIT); 
road();
station();
trac();

car();
car2();
train();
cloud();
    
glutPostRedisplay();
 mytext();
glFlush();
	
}

void create_menu(void)
   {
     glutCreateMenu(menu);
     glutAttachMenu(GLUT_LEFT_BUTTON);
     glutAttachMenu(GLUT_RIGHT_BUTTON);
     glutAddMenuEntry("stop train", 1);
     glutAddMenuEntry("moov train", 2);
     glutAddMenuEntry("Exit", 3);
     
    }
void menu(int val)
   {

   
     switch (val) {
     case 1:
			glutDisplayFunc(ideal);;
			break;
     case 2:
		    glutDisplayFunc(pr);
			break;
	 case 3: exit(0);
 
     
	
     
   }

}
void keyInput(unsigned char key, int x, int y)
{switch(key)
{case 27:
exit(0);
break;
default:break;
}
}

void main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(50,100);
	printf("\n MOVING TRAIN \n\n\n here in my project mouse event is use.  \n\n from right & left click you get one menu\n here three optin is availalble \n");
	printf("\n (1) stop train : you can stop the train \n (2) move train : you start train to move \n (3) Exit : exit the window\n\n\n\n\n\n key event use: \n\npress   Esc  key to close the window.");
	glutInitWindowSize(1400,1400);
	glutCreateWindow("moving train");
	init();
	create_menu();
 glutIdleFunc(ideal);
   glutDisplayFunc(pr);
   glutKeyboardFunc(keyInput);
	glutMainLoop();
}