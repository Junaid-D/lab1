// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

int main()
{
	using cFloat=std::complex<float>;//alias for complex of <float>

	int a,b,c=0;
	
	std::cin>>a;
	std::cin>>b;
	std::cin>>c;

	cFloat aComp=cFloat{a,0};
	cFloat bComp=cFloat{b,0};
	cFloat cComp=cFloat{c,0};



	cFloat root = std::sqrt(std::pow(b,2)-a*c*4.0f);
	cFloat ans=(-bComp)/(2.0f*aComp);

	std::cout<<ans+root<<std::endl;
	if(ans.imag()==0.)
	{
		std::cout<<ans-root<<std::endl;

	}

	return 0;
}
