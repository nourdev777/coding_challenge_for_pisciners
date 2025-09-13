
void func(int i)
{
	i = 999;
}

int main()
{
	int i = 0;
	func(i);
	printf("%d\n", i);
}

// Question: What will be printed on the screen?
// a) 0
// b) 999
// c) i
// d) Nothing
















// Answer: a) 