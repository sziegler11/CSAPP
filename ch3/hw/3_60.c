long loop(long x, long n)
{
	long result = 0;
	long mask;
	for (mask = 1; mask != 0; mask = mask <<= (n & 255)) {
		result |= (x & mask);
	}
	return result;
}