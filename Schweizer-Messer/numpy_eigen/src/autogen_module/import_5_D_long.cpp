// This file automatically generated by create_export_module.py
#define NO_IMPORT_ARRAY 

#include <NumpyEigenConverter.hpp>

#include <boost/cstdint.hpp>


void import_5_D_long()
{
	NumpyEigenConverter<Eigen::Matrix< boost::int64_t, 5, Eigen::Dynamic > >::register_converter();
}

