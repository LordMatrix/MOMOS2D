#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>

#include <MOMOS/math.h>
#include <MOMOS/momos.h>

namespace MOMOS {

	Mat3 Mat3Multiply(const Mat3 &a, const Mat3 &b) {
		Mat3 momos_mat;

		momos_mat.d[0] = a.d[0] * b.d[0] + a.d[1] * b.d[3] + a.d[2] * b.d[6];
		momos_mat.d[1] = a.d[0] * b.d[1] + a.d[1] * b.d[4] + a.d[2] * b.d[7];
		momos_mat.d[2] = a.d[0] * b.d[2] + a.d[1] * b.d[5] + a.d[2] * b.d[8];

		momos_mat.d[3] = a.d[3] * b.d[0] + a.d[4] * b.d[3] + a.d[5] * b.d[6];
		momos_mat.d[4] = a.d[3] * b.d[1] + a.d[4] * b.d[4] + a.d[5] * b.d[7];
		momos_mat.d[5] = a.d[3] * b.d[2] + a.d[4] * b.d[5] + a.d[5] * b.d[8];

		momos_mat.d[6] = a.d[6] * b.d[0] + a.d[7] * b.d[3] + a.d[5] * b.d[6];
		momos_mat.d[7] = a.d[6] * b.d[1] + a.d[7] * b.d[4] + a.d[5] * b.d[7];
		momos_mat.d[8] = a.d[6] * b.d[2] + a.d[7] * b.d[5] + a.d[5] * b.d[8];

		return momos_mat;
	}


	Mat3 Mat3Identity() {
		Mat3 momos_mat;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				momos_mat.d[i * 3 + j] = (i == j) ? 1.0f : 0.0f;
			}
		}

		return momos_mat;
	}


	Mat3 Mat3Translate(float translate_x, float translate_y) {
		Mat3 momos_mat = Mat3Identity();
		momos_mat.d[2] = translate_x;
		momos_mat.d[5] = translate_y;

		return momos_mat;
	}


	Mat3 Mat3Rotate(float radians) {
		Mat3 momos_mat = Mat3Identity();
		momos_mat.d[0] = cos(radians);
		momos_mat.d[1] = -sin(radians);
		momos_mat.d[3] = sin(radians);
		momos_mat.d[4] = cos(radians);

		return momos_mat;
	}


	Mat3 Mat3Scale(float scale_x, float scale_y) {
		Mat3 momos_mat = Mat3Identity();
		
		momos_mat.d[0] = scale_x;
		momos_mat.d[3] = scale_y;

		return momos_mat;
	}


	Mat3 Mat3FromColumns(const float data[9]) {
		Mat3 momos_mat;
		return momos_mat;
	}


	Vec3 Mat3TransformVec3(const Mat3 &a, const Vec3 &v) {
		Vec3 momos_vec;
		return momos_vec;
	}


	Vec2 Mat3TransformVec2(const Mat3 &a, const Vec2  &v) {
		Vec2 momos_vec;
		return momos_vec;
	}


	Mat4 Mat4Multiply(const Mat4 &a, const Mat4 &b) {
		Mat4 momos_mat;
		return momos_mat;
	}


	Mat4 Mat4Identity() {
		Mat4 momos_mat;
		return momos_mat;
	}


	Mat4 Mat4Translate(float translate_x, float translate_y, float translate_z) {
		Mat4 momos_mat;
		return momos_mat;
	}


	Mat4 Mat4RotateX(float radians) {
		Mat4 momos_mat;
		return momos_mat;
	}


	Mat4 Mat4RotateY(float radians) {
		Mat4 momos_mat;
		return momos_mat;
	}


	Mat4 Mat4RotateZ(float radians) {
		Mat4 momos_mat;
		return momos_mat;
	}


	Mat4 Mat4Scale(float scale_x, float scale_y, float scale_z) {
		Mat4 momos_mat;
		return momos_mat;
	}


	Mat4 Mat4FromColumns(const float data[16]) {
		Mat4 momos_mat;
		return momos_mat;
	}


	Mat4 Mat4Projection() {
		Mat4 momos_mat;
		return momos_mat;
	}


	Vec4 Mat4TransformVec4(const Mat4 &a, const Vec4 &v) {
		Vec4 momos_vec;
		return momos_vec;
	}


	Vec3 Mat4TransformVec3(const Mat4 &a, const Vec3 &v) {
		Vec3 momos_vec;
		return momos_vec;
	}


	void Mat3TransformRawVec2(const Mat3 &m, const float v_in[2], float v_out[2]) {
		v_out[0] = v_in[0] * m.d[0] + v_in[1] * m.d[1] + 1 * m.d[2];
		v_out[1] = v_in[0] * m.d[3] + v_in[1] * m.d[4] + 1 * m.d[5];
	}


	void Mat3TransformRawVec3(const Mat3 &m, const float v_in[3], float v_out[3]) {

	}


	void Mat4TransformRawVec3(const Mat4 &m, const float v_in[3], float v_out[3]) {

	}


	void Mat4TransformRawVec4(const Mat4 &m, const float v_in[4], float v_out[4]) {

	}

} /* MOMOS */