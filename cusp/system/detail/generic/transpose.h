/*
 *  Copyright 2008-2013 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


#pragma once

#include <thrust/detail/config.h>
#include <thrust/system/detail/generic/tag.h>

namespace cusp
{
namespace system
{
namespace detail
{
namespace generic
{

template <typename DerivedPolicy, typename MatrixType1, typename MatrixType2, typename Format1, typename Format2>
void transpose(cusp::execution_policy<DerivedPolicy> &exec, const MatrixType1& A, MatrixType2& At, Format1, Format2);

} // end namespace generic
} // end namespace detail
} // end namespace system
} // end namespace cusp

#include <cusp/system/detail/generic/transpose.inl>
