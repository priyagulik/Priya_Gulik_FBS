void main()
{
	int no=12567834,n=3;
	int ld;
	
	if(no/n>=2)
	{
		int x=1,i=1;
		while(i<=n)
		{
		  x=x*10;
		  i++;	
		}
		ld=no%x;
	}
}
