#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

int	main()
{
	int	a;
	int	b;
	int *a_;
	int *b_;

	a = 12;
	b = 3;
	a_ = &a;
	b_ = &b;
	
	ft_ultimate_div_mod(a_, b_);
	printf("4, 0: %d, %d\n", a, b);
	return 0;
}
