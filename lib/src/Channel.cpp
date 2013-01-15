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

///
/// \file    Channel.cpp
/// \class   Channel
///
/// \package maracuja
/// \version 0.1.0
///
/// \brief   base class for channel's characteristics memorization
///
/// \author  Alexandru Duliu, Anne-Claire Morvan
/// \date    Jan 15, 2013
///


#include <maracuja/Channel.hpp>


namespace maracuja
{

    Channel::Channel()
    {

    }


    Channel::~Channel() {
        // TODO Auto-generated destructor stub
    }


    int Channel::getId()
    {
        return this->m_id;
    }

    Spectrum Channel::getFilter()
    {
        return this->m_filter;
    }

    Spectrum Channel::getSensor()
    {
        return this->m_sensor;
    }

    cimg_library::CImg<uint8_t> Channel::getImg()
    {
        return this->m_image;
    }

    std::string Channel::getName()
    {
        return this->m_name;
    }



} // end namespace maracuja
