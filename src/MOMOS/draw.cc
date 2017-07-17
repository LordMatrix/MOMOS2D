#include <MOMOS/draw.h>
#include <MOMOS/momos.h>

namespace MOMOS {

	void DrawBegin() {
		glPointSize(10);
		glLineWidth(2.5);
	}


	void DrawEnd() {

	}


	void DrawSetStrokeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char Alpha) {
		glColor4f(R, G, B, Alpha);
	}


	void DrawSetFillColor(unsigned char R, unsigned char G, unsigned char B, unsigned char Alpha) {
		glColor4f(R, G, B, Alpha);
	}


	void DrawClear(unsigned char R, unsigned char G, unsigned char B, unsigned char Alpha) {
		glClearColor(R, G, B, Alpha);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}


	void DrawLine(float x1, float y1, float x2, float y2) {
		glBegin(GL_LINES);
		glVertex2f(x1, win_height - y1);
		glVertex2f(x2, win_height - y2);
		glEnd();
	}


	void DrawPath(float *pairs_of_points, int num_points) {

	}


	void DrawSolidPath(float *pairs_of_points, int num_points, bool stroke) {
		glBegin(GL_POLYGON);
		for (int i = 0; i < num_points; i++) {
			glVertex2f(pairs_of_points[i*2], win_height - pairs_of_points[i*2+1]);
		}
		glEnd();
	}


	void DrawSetTextFont(const char *name) {

	}


	void DrawSetTextSize(float size) {

	}


	void DrawSetTextBlur(float blur_radius) {

	}


	void DrawText(float x, float y, const char *text) {

	}

}