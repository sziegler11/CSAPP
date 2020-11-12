/* Addition that saturates to TMin or TMax */ 
int TMAX = 0x7FFFFFFF;
int TMIN = 0x80000000;

int saturating_add(int x, int y) {
	int true_sum = x + y;
  if (x > 0 && y > 0 && true_sum < 0) {
    return TMAX;
  } else if (x < 0 && y < 0 && true_sum > 0) {
    return TMIN;
  } else {
    return true_sum;
  }
}