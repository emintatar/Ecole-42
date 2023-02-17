#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	d;

	d = *a;
	*a = *b;
	*b = d;
}

int	main(void)
{
	int a;
    int *a_;
	int b;
	int *b_;

	a = 1;
	b = 2;
	a_ = &a;
	b_ = &b;
	printf("It should print '1, 2': %d, %d\n\n",*a_,*b_);
	ft_swap(a_,b_);
	printf("It should print '2, 1': %d, %d\n",*a_,*b_);
	return(0);
}
