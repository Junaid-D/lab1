// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

int main()
{

	char response='0';
	do
	{
		using cFloat=std::complex<float>;//alias for complex of <float>

		float temp=0;

		std::cout<<"Enter a"<<std::endl;
		std::cin>>temp;
		cFloat aComp=cFloat{temp,0};

		std::cout<<"Enter b"<<std::endl;
		std::cin>>temp;
		cFloat bComp=cFloat{temp,0};

		std::cout<<"Enter c"<<std::endl;
		std::cin>>temp;
		cFloat cComp=cFloat{temp,0};



		cFloat root = std::sqrt(std::pow(bComp,2)-aComp*cComp*4.f)/(2.f*aComp);

		cFloat ans=(-bComp)/(2.f*aComp);
		std::cout<<"The roots are :"<<std::endl;
		std::cout<<ans+root<<std::endl;
		std::cout<<ans-root<<std::endl;
		std::cout<<"Would you like to do another?"<<std::endl;
		
		std::cin>>response;

	}while(response!='q');

	return 0;
}
