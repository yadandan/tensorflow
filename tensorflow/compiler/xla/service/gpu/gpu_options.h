/* Copyright 2018 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_GPU_OPTIONS_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_GPU_OPTIONS_H_

#include "tensorflow/compiler/xla/service/hlo_module_config.h"

// Helper functions for querying options that are specific to the GPU backend.

namespace xla {
namespace gpu {

// Returns true if we should use heuristics to assign convolution layouts, as
// opposed to always assigning NCHW.
bool ConvUseLayoutHeuristic(const HloModuleConfig& config);

}  // namespace gpu
}  // namespace xla

#endif  // TENSORFLOW_COMPILER_XLA_SERVICE_GPU_GPU_OPTIONS_H_
