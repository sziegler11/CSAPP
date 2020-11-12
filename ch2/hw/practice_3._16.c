void cond(short a, short *p) 
{
	if (!a)
		goto done;
	if (*p >= a)
		goto done;
	*p = a;
done:
	return;
}

// assembly has two conditional branches because there is a logical short circuting: negation of an "and" is
// an "or" and if the first condition of "or" is true we can skip eval