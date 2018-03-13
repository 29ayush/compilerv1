int main (int a)
{

	if(a==0)
	{
		return 5;
	}

	print(a);
	main(a-1);
}