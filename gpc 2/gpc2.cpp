#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include "glut.h"

// dimensiunea ferestrei in pixeli
#define dim 300

unsigned char prevKey;

// concoida lui Nicomede (concoida dreptei)
// $x = a + b \cdot cos(t), y = a \cdot tg(t) + b \cdot sin(t)$. sau
// $x = a - b \cdot cos(t), y = a \cdot tg(t) - b \cdot sin(t)$. unde
// $t \in (-\pi / 2, \pi / 2)$
void Display1() {
	double xmax, ymax, xmin, ymin;
	double a = 1, b = 2;
	double pi = 4 * atan(1.0);
	double ratia = 0.05;
	double t;

	// calculul valorilor maxime/minime ptr. x si y
	// aceste valori vor fi folosite ulterior la scalare
	xmax = a - b - 1;
	xmin = a + b + 1;
	ymax = ymin = 0;
	for (t = -pi / 2 + ratia; t < pi / 2; t += ratia) {
		double x1, y1, x2, y2;
		x1 = a + b * cos(t);
		xmax = (xmax < x1) ? x1 : xmax;
		xmin = (xmin > x1) ? x1 : xmin;

		x2 = a - b * cos(t);
		xmax = (xmax < x2) ? x2 : xmax;
		xmin = (xmin > x2) ? x2 : xmin;

		y1 = a * tan(t) + b * sin(t);
		ymax = (ymax < y1) ? y1 : ymax;
		ymin = (ymin > y1) ? y1 : ymin;

		y2 = a * tan(t) - b * sin(t);
		ymax = (ymax < y2) ? y2 : ymax;
		ymin = (ymin > y2) ? y2 : ymin;
	}

	xmax = (fabs(xmax) > fabs(xmin)) ? fabs(xmax) : fabs(xmin);
	ymax = (fabs(ymax) > fabs(ymin)) ? fabs(ymax) : fabs(ymin);

	// afisarea punctelor propriu-zise precedata de scalare
	glColor3f(1, 0.1, 0.1); // rosu
	glBegin(GL_LINE_STRIP);
	for (t = -pi / 2 + ratia; t < pi / 2; t += ratia) {
		double x1, y1, x2, y2;
		x1 = (a + b * cos(t)) / xmax;
		x2 = (a - b * cos(t)) / xmax;
		y1 = (a * tan(t) + b * sin(t)) / ymax;
		y2 = (a * tan(t) - b * sin(t)) / ymax;

		glVertex2f(x1, y1);
	}
	glEnd();

	glBegin(GL_LINE_STRIP);
	for (t = -pi / 2 + ratia; t < pi / 2; t += ratia) {
		double x1, y1, x2, y2;
		x1 = (a + b * cos(t)) / xmax;
		x2 = (a - b * cos(t)) / xmax;
		y1 = (a * tan(t) + b * sin(t)) / ymax;
		y2 = (a * tan(t) - b * sin(t)) / ymax;

		glVertex2f(x2, y2);
	}
	glEnd();
}

// graficul functiei 
// $f(x) = \bar sin(x) \bar \cdot e^{-sin(x)}, x \in \langle 0, 8 \cdot \pi \rangle$, 
void Display2() {
	double pi = 4 * atan(1.0);
	double xmax = 8 * pi;
	double ymax = exp(1.1);
	double ratia = 0.05;

	// afisarea punctelor propriu-zise precedata de scalare
	glColor3f(1, 0.1, 0.1); // rosu
	glBegin(GL_LINE_STRIP);
	for (double x = 0; x < xmax; x += ratia) {
		double x1, y1;
		x1 = x / xmax;
		y1 = (fabs(sin(x)) * exp(-sin(x))) / ymax;

		glVertex2f(x1, y1);
	}
	glEnd();
}
//-----------------------------tema----------------------------
//Functia f(x)
void Display3() {
	

	double ratia = 0.05;
	double xmax = 20;

	glColor3f(1, 0.1, 0.1);//rosu
	glBegin(GL_LINE_STRIP);
	for (double x = 0; x <= 100; x += ratia) {
		double y;
		if (x == 0) {
			y = 1;
		}
		else {
			y = fabs((x - round(x))) / x;
		}
		double x1 = x / xmax;//la scala
		glVertex2f(x1, y);
		
	}
	glEnd();
}

//melcul lui Pascal
void Display4() {


	double pi = 4 * atan(1.0);// nu a mers cu M_PI
	double ratia = 0.025;
	double a = 0.3, b = 0.2;

	glColor3f(1, 0.1, 0.1);//rosu
	glBegin(GL_LINE_STRIP);
	for (double t = -pi + ratia; t < pi; t += ratia) {
		double x = 2 * (a * cos(t) + b) * cos(t);
		double y = 2 * (a * cos(t) + b) * sin(t);
		glVertex2f(x, y);
	}
	glEnd();//ramane un spatiu gol intre -pi + ratia si  pi - ratia pe care il vom completa
	//alternativ, puteam sa punem t de la - pi la pi, dar enuntul problemei ne constrange
	//deci vom calcula din nou punctul de inceput si sfarsit si le vom uni pe acestea

	glBegin(GL_LINE_STRIP);
	double t = -pi + ratia;//punctul de inceput
	double x = 2 * (a * cos(t) + b) * cos(t);
	double y = 2 * (a * cos(t) + b) * sin(t);
	glVertex2f(x, y);

	t = pi - ratia;//punctul de sfarsit
	x = 2 * (a * cos(t) + b) * cos(t);
	y = 2 * (a * cos(t) + b) * sin(t);
	glVertex2f(x, y);
	
	glEnd();
}

//Trisectoarea lui Longchamps
void Display5() {

}

//Cicloida
void Display6() {
	//la cicloida din 2 pi in 2 pi se realizeaza un semicerc
	// la pi ul impar, semicercul e la inaltimea maxima
	//avem 2 semicercuri complete si 2 jumatati de semicerc, deci 4+2=6 pi

	double pi = 4 * atan(1.0);
	double ratia = 0.05;
	double a = 0.1, b = 0.2;
	

	glColor3f(1, 0.1, 0.1);//rosu
	glBegin(GL_LINE_STRIP);

	for (double t = -3 * pi; t <= 3 * pi; t += ratia) {
		double x = a * t - b * sin(t);
		double y = a - b * cos(t);

		glVertex2f(x, y);
	}

	glEnd();
}

//epicicloida
void Display7() {
	

	double pi = 4 * atan(1.0);
	double ratia = 0.05;
	double R = 0.1, r = 0.3;

	glColor3f(1, 0.1, 0.1);
	glBegin(GL_LINE_STRIP);
	for (double t = 0; t <= 2 * pi; t += ratia) {
		double x = (R + r) * cos(r / R * t) - r * cos(t + r / R * t);
		double y = (R + r) * sin(r / R * t) - r * sin(t + r / R * t);

		glVertex2f(x, y);
	}
	glEnd();
}

//Hipocicloida
void Display8() {
	

	double pi = 4 * atan(1.0);
	double ratia = 0.05;
	double R = 0.1, r = 0.3;

	glColor3f(1, 0.1, 0.1);
	glBegin(GL_LINE_STRIP);
	for (double t = 0; t <= 2 * pi; t += ratia) {
		double x = (R - r) * cos(r / R * t) - r * cos(t - r / R * t);
		double y = (R - r) * sin(r / R * t) - r * sin(t - r / R * t);

		glVertex2f(x, y);
	}
	glEnd();
}

//Lemniscata lui Bernoulli
void Display9() {
	 

	double pi = 4 * atan(1.0);
	double ratia = 0.0025;
	double a = 0.4;

	glColor3f(1, 0.1, 0.1);//rosu
	glBegin(GL_LINE_STRIP);
	//face o jumatate
	for (double t = (-pi) / 4 + ratia; t < pi / 4; t += ratia) {
		double x1 = (a * sqrt(2 * cos(2 * t))) * cos(t);
		double y1 = (a * sqrt(2 * cos(2 * t))) * sin(t);

		glVertex2f(x1, -y1);
	}
	//in oglinda
	for (double t = (-pi) / 4 + ratia; t < pi / 4; t += ratia) {
		double x2 = (-a * sqrt(2 * cos(2 * t))) * cos(t);
		double y2 = (-a * sqrt(2 * cos(2 * t))) * sin(t);

		glVertex2f(x2, y2);
	}
	glEnd();
}

//Spirala logaritmica
void Display10() {
	
	//https://en.wikipedia.org/wiki/Logarithmic_spiral- am gasit formula in sistem cartezianS
	double ratia = 0.025;
	double a = 0.02;

	glColor3f(1, 0.1, 0.1);
	glBegin(GL_LINE_STRIP);
	for (double t = ratia; t < 100; t += ratia) {
		double x = a * exp(1 + t) * cos(t);
		double y = a * exp(1 + t) * sin(t);

		glVertex2f(x, y);
	}
	glEnd();
}
//-------------------------------------
void Init(void) {

	glClearColor(1.0, 1.0, 1.0, 1.0);

	glLineWidth(1);

	

	glPolygonMode(GL_FRONT, GL_LINE);
}

void Display(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	switch (prevKey) {
	case '1':
		Display1();
		break;
	case '2':
		Display2();
		break;
	case '3':
		Display3();
		break;
	case '4':
		Display4();
		break;
	case '5':
		Display5();
		break;
	case '6':
		Display6();
		break;
	case '7':
		Display7();
		break;
	case '8':
		Display8();
		break;
	case '9':
		Display9();
		break;
	case '0':
		Display10();
		break;
	default:
		break;
	}

	glFlush();
}

void Reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
}

void KeyboardFunc(unsigned char key, int x, int y) {
	prevKey = key;
	if (key == 27) // escape
		exit(0);
	glutPostRedisplay();
}

void MouseFunc(int button, int state, int x, int y) {
}

int main(int argc, char** argv) {

	glutInit(&argc, argv);

	glutInitWindowSize(dim, dim);

	glutInitWindowPosition(100, 100);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutCreateWindow(argv[0]);

	Init();

	glutReshapeFunc(Reshape);

	glutKeyboardFunc(KeyboardFunc);

	glutMouseFunc(MouseFunc);

	glutDisplayFunc(Display);

	glutMainLoop();

	return 0;
}