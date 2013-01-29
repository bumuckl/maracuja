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
/// \file    MSImage.hpp
/// \class   MSImage
///
/// \package maracuja
/// \version 0.1.0
///
/// \brief   base class for image segmentation
///
/// \details this is base container for multispectral images
///
/// \author  Alexandru Duliu, Anne-Claire Morvan
/// \date    Jan 15, 2013
///


#include <maracuja/util.hpp>
#include <maracuja/Spectrum.hpp>
#include <maracuja/Channel.hpp>


namespace maracuja
{

    class MSImage
    {
        public:
            MSImage();
            virtual ~MSImage();
            int getChannelsNumber();
            std::vector<Channel> getChannels();
            Channel getChannel(int channelIdx);
            void init();
            void addChannel(Channel channel);
            std::vector<double> coefficientsCalculation(Spectrum spectrum);
            cimg_library::CImg<uint8_t> convolute(Spectrum spectrum);
            std::vector<std::vector<double>> initialization(std::vector<Spectrum> spectrums);
            cimg_library::CImg<uint8_t> imageReconstruction(std::vector<std::vector<double>> reconstructionCoeffs, unsigned channelIdx);

        protected:
            std::vector<Channel> m_channels;
    };

} // end namespace maracuja
