#include<stdio.h>
main()
{
	int a,b,c,d,e;
	
	printf(" Enter Value A=");
	scanf("%d",&a);
	printf(" Enter Value B=");
	scanf("%d",&b);
	printf(" Enter Value C=");
	scanf("%d",&c);
	printf(" Enter Value D=");
	scanf("%d",&d);
	printf(" Enter Value E=");
	scanf("%d",&e);
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf(" A is minimum");	
				}
				else
				{
					printf(" E is minimum");
				}
		    }
			else
			{
				if(d<e)
				{
					printf(" D is minimum");	
				}
				else
				{
					printf(" E is minimum");	
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf(" C is minimum");		
				}
				else
				{
					printf(" E is minimum");		
				}
			}
			else
			{
				if(d<e)
				{
					printf(" D is minimum");	
				}
				else
				{
					printf(" E is minimum");	
				}
			}	
		}	
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf(" B is minimum");	
				}
				else
				{
					printf(" E is minimum");
				}
		    }
			else
			{
				if(b<e)
				{
					printf(" B is minimum");	
				}
				else
				{
					printf(" E is minimum");	
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf(" C is minimum");		
				}
				else
				{
					printf(" E is minimum");		
				}
			}
			else
			{
				if(d<e)
				{
					printf(" D is minimum");	
				}
				else
				{
					printf(" E is minimum");	
				}
			}	
		}	
	}	
	
}