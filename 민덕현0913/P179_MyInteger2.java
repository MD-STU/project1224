package 민덕현0913;

public class P179_MyInteger2 {
	int val;

	int add(int val) {
		return this.val + val;
	}

	int add(P179_MyInteger2 ob) {
		return this.val + ob.val;
	}

	int subtract(P179_MyInteger2 ob) {
		return this.val = ob.val;
	}

	int multiply(P179_MyInteger2 ob) {
		return this.val * ob.val;
	}

	double divide(P179_MyInteger2 ob) {
		return ((double) this.val) / ob.val;
	}
}
