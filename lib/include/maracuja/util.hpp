/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
// This file is part of maracuja, a C++ library for multispectral images       //
//                                                                             //
// Copyright (C) 2013 Alexandru Duliu, Anne-Claire Morvan                      //
//                                                                             //
// maracuja is free software; you can redistribute it and/or                   //
// modify it under the terms of the GNU Lesser General Public                  //
// License as published by the Free Software Foundation; either                //
// version 3 of the License, or (at your option) any later version.            //
//                                                                             //
// maracuja is distributed in the hope that it will be useful, but WITHOUT ANY //
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS   //
// FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License or the  //
// GNU General Public License for more details.                                //
//                                                                             //
// You should have received a copy of the GNU Lesser General Public            //
// License along with maracuja. If not, see <http://www.gnu.org/licenses/>.    //
//                                                                             //
////////////////////////////////////////////////////////////////////////////////


#pragma once

///
/// \file    util.hpp
///
/// \package maracuja
/// \version 0.1.0
///
/// \brief   collection of utility functions
///
/// \details this file contains a collection of small utility functions,
///          to simplify development of the maracuja library
///
/// \author  Alexandru Duliu, Anne-Claire Morvan
/// \date    Jan 5, 2013
///

#include <cmath>
#include <memory>
#include <vector>
#include <stdexcept>
#include <stdint.h>

#include <Eigen/Core>
#include <Eigen/Geometry>
// #include <Eigen/Dense>

#define cimg_display 0
#include <CImg.h>

namespace maracuja
{


template <typename T>
inline void str2scalar( std::string str, T& result )
{
    std::stringstream ss;
    ss << str;
    ss.seekg( 0, std::ios::beg );
    ss >> result;
}


template <typename T>
inline void str2vector( const std::string& str, std::vector<T>& result )
{
    std::stringstream ss;
    ss << str;
    ss.seekg( 0, std::ios::beg );
    while( !ss.eof() )
    {
        T tmp;
        ss >> tmp;
        result.push_back( tmp );
    }
    result.pop_back();
}

} // end namespace maracuja


