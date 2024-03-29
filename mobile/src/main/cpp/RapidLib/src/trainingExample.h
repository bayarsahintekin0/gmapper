/**
 * @file  trainingExample.h
 * RapidLib
 *
 * @author   Michael Zbyszynski
 * @date    22 Nov 2017
 * @copyright Copyright © 2016 Goldsmiths. All rights reserved.
 */

#pragma once


#include <vector>
#include <string>

/** This is used by both NN and KNN models for training */
template<typename T>
struct trainingExampleTemplate
{
    std::vector<T> input;
    std::vector<T> output;
};

namespace rapidlib
{
    //This is here to keep the old API working
    using trainingExample = trainingExampleTemplate<double>;
    using trainingExampleFloat = trainingExampleTemplate<float>;
}

/** This is used by DTW models for training */
template<typename T>
struct trainingSeriesTemplate
{
    std::vector<std::vector<T> > input;
    std::string label;
};

namespace rapidlib
{
    //This is here to keep the old API working
    using trainingSeries = trainingSeriesTemplate<double> ;
    using trainingSeriesFloat = trainingSeriesTemplate<float>;
}

