// Copyright 2026 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef BINDIFF_STATUS_MACROS_H_
#define BINDIFF_STATUS_MACROS_H_

#if __has_include("third_party/absl/status/status_macros.h")
#include "third_party/absl/status/status_macros.h"
#else
#include "third_party/zynamics/binexport/util/status_macros.h"

#define ABSL_RETURN_IF_ERROR NA_RETURN_IF_ERROR
#define ABSL_ASSIGN_OR_RETURN NA_ASSIGN_OR_RETURN
#define ABSL_ASSERT_OK_AND_ASSIGN NA_ASSERT_OK_AND_ASSIGN
#endif

#endif  // BINDIFF_STATUS_MACROS_H_
