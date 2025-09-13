package 민덕현0913;

public class P186_MyMath {
	static final double PI = 3.141592;
	static final double KMPerMILE = 1.609344;

	static double getCirclePerimeter(double r) {
		return 2 * PI * r;
	}

	static double getCircleArea(double r) {
		return PI * r * r;
	}

	static double kilometerToMile(double km) {
		return km * 1 / KMPerMILE;
	}

	static double mileToKilometer(double m) {
		return m * KMPerMILE;
	}

}
